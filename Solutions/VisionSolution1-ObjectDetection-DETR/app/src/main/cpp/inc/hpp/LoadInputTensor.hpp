//==============================================================================
//
//  Copyright (c) 2017-2019 Qualcomm Technologies, Inc.
//  All Rights Reserved.
//  Confidential and Proprietary - Qualcomm Technologies, Inc.
//
//==============================================================================

#ifndef LOADINPUTTENSOR_H
#define LOADINPUTTENSOR_H

#include <unordered_map>
#include <string>
#include <vector>

#include "SNPE/SNPE.hpp"
#include "DlSystem/ITensorFactory.hpp"
#include "DlSystem/TensorMap.hpp"

bool loadInputUserBuffer_pose(std::unordered_map<std::string, std::vector<float32_t>>& applicationBuffers,
                         std::unique_ptr<zdl::SNPE::SNPE>& snpe,
                         const cv::Mat &model_input,
                         zdl::DlSystem::UserBufferMap& inputMap,
                         int bitWidth, double center[], double scale[], const float &top, const float &bottom, const float &left, const float &right);

bool loadInputUserBuffer_BB(std::unordered_map<std::string, std::vector<float32_t>>& applicationBuffers,
                         std::unique_ptr<zdl::SNPE::SNPE>& snpe,
                         cv::Mat &model_input,
                         zdl::DlSystem::UserBufferMap& inputMap,
                         int bitWidth);
#endif
