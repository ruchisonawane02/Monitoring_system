
#include "violation_detector.h"

bool is_violation(CameraFrame frame) {
    return frame.red_light && frame.vehicle_detected;
}
