#ifndef FRAMEPUBLISHER_H
#define FRAMEPUBLISHER_H

#include <cv_bridge/cv_bridge.h>
#include <opencv2/core/core.hpp>

#include "../../../../include/FrameDrawer.h"

namespace ORB_SLAM2
{
class FrameDrawer;

class KeyFramePublisher : public FrameDrawer
{
public:
  cv::Mat DrawFrame();

  void DrawTextInfo(cv::Mat &im, int nState, cv::Mat &imText);
};
} // namespace ORB_SLAM2
#endif