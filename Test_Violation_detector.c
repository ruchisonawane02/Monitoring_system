
#include "violation_detector.h"
#include <assert.h>

void test_violation_detection() {
    CameraFrame frame = {true, true};
    assert(is_violation(frame) == true);

    frame.vehicle_detected = false;
    assert(is_violation(frame) == false);
}
