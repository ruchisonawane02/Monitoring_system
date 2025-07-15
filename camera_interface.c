
#include "camera_interface.h"

CameraFrame get_camera_frame() {
    CameraFrame frame;
    frame.red_light = true;
    frame.vehicle_detected = true;
    return frame;
}
