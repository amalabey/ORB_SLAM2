#include <cv_bridge/cv_bridge.h>
#include <opencv2/core/core.hpp>

#include "../include/KeyFramePublisher.h"

using namespace std;

namespace ORB_SLAM2
{
cv::Mat KeyFramePublisher::DrawFrame()
{
    cout << "KeyFramePublisher::DrawFrame() ..." << endl;

    cv::Mat imWithInfo;
    int state;
    cv::Mat im;

    DrawTextInfo(im,state, imWithInfo);

    return imWithInfo; 
}

void KeyFramePublisher::DrawTextInfo(cv::Mat &im, int nState, cv::Mat &imText)
{
    cout << "KeyFramePublisher::DrawTextInfo() ..." << endl;
}
}