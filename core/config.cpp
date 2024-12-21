#include "backends/p4tools/modules/rtsmith/core/config.h"

#include "lib/error.h"

namespace P4::P4Tools::RtSmith {

void FuzzerConfig::setMaxEntryGenCnt(const int numEntries) {
    if (numEntries < 0) {
        error(
            "ControlPlaneSmith: The maximum number of entries to generate must be a non-negative "
            "integer.");
    }
    maxEntryGenCnt = numEntries;
}

void FuzzerConfig::setMaxAttempts(const int numAttempts) {
    if (numAttempts <= 0) {
        error("ControlPlaneSmith: The number of attempts must be a positive integer.");
    }
    maxAttempts = numAttempts;
}

void FuzzerConfig::setMaxTables(const int numTables) {
    if (numTables < 0) {
        error("ControlPlaneSmith: The maximum number of tables must be a non-negative integer.");
    }
    maxTables = numTables;
}

void FuzzerConfig::setThresholdForDeletion(const uint64_t threshold) {
    thresholdForDeletion = threshold;
}

void FuzzerConfig::setTablesToSkip(const std::vector<std::string> &tables) {
    tablesToSkip = tables;
}

void FuzzerConfig::setMaxUpdateCount(const size_t count) { maxUpdateCount = count; }

void FuzzerConfig::setMaxUpdateTimeInMicroseconds(const uint64_t micros) {
    if (micros <= 0) {
        error("ControlPlaneSmith: The maximum wait time must be a positive integer.");
    }
    maxUpdateTimeInMicroseconds = micros;
}
void FuzzerConfig::setMinUpdateTimeInMicroseconds(const uint64_t micros) {
    if (micros <= 0) {
        error("ControlPlaneSmith: The minimum wait time must be a positive integer.");
    }
    minUpdateTimeInMicroseconds = micros;
}

void FuzzerConfig::setMaxSubscribers(const int numSubscribers) {
    if (numSubscribers < 0) {
        error("ControlPlaneSmith: The maximum number of subscribers must be a non-negative integer.");
    }
    maxSubscribers = numSubscribers;
}

void FuzzerConfig::setMaxRouters(const int numRouters) {
    if (numRouters < 0) {
        error("ControlPlaneSmith: The maximum number of routers must be a non-negative integer.");
    }
    maxRouters = numRouters;
}

void FuzzerConfig::setMaxControlPlaneEntries(const int numEntries) {
    if (numEntries < 0) {
        error(
            "ControlPlaneSmith: The maximum number of control-plane entries must be a non-negative "
            "integer.");
    }
    maxControlPlaneEntries = numEntries;
}

void FuzzerConfig::setEnableVLANTagging(const bool enable) { enableVLANTagging = enable; }

void FuzzerConfig::setEnableMPLSLabelStacking(const bool enable) { enableMPLSLabelStacking = enable; }

void FuzzerConfig::setEnablePPPoE(const bool enable) { enablePPPoE = enable; }

void FuzzerConfig::setThresholdForControlPlaneSignaling(const uint64_t threshold) {
    thresholdForControlPlaneSignaling = threshold;
}
}  // namespace P4::P4Tools::RtSmith
