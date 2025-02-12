/* ----------------------------------------------------------------------------
 * Copyright 2017, Massachusetts Institute of Technology,
 * Cambridge, MA 02139
 * All Rights Reserved
 * Authors: Luca Carlone, et al. (see THANKS for the full author list)
 * See LICENSE for the license information
 * -------------------------------------------------------------------------- */

/**
 * @file   Mono2ImuPipeline.h
 * @brief  Implements MonoVIO pipeline workflow.
 * @author Marcus Abate
 */

#pragma once

#include "kimera-vio/dataprovider/MonoDataProviderModule.h"
#include "kimera-vio/frontend/Camera.h"
#include "kimera-vio/pipeline/Pipeline.h"

namespace VIO {

class Mono2ImuPipeline : public Pipeline {
 public:
  KIMERA_POINTER_TYPEDEFS(Mono2ImuPipeline);
  KIMERA_DELETE_COPY_CONSTRUCTORS(Mono2ImuPipeline);
  EIGEN_MAKE_ALIGNED_OPERATOR_NEW

 public:
  Mono2ImuPipeline(const VioParams& params,
                  Visualizer3D::UniquePtr&& visualizer = nullptr,
                  DisplayBase::UniquePtr&& displayer = nullptr,
                  PreloadedVocab::Ptr&& preloaded_vocab = nullptr);

  ~Mono2ImuPipeline() = default;

 protected:
  Camera::ConstPtr camera_;
};

}  // namespace VIO
