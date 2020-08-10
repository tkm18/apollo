/******************************************************************************
 * Copyright 2020 The Apollo Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

#include <vector>
#include <complex>

namespace apollo {
namespace audio {

/**
 * @file moving_detection.h
 * @description detect if the sound is approaching or departing
 */

class MovingDetection {
 public:
  MovingDetection() = default;

  std::vector<std::complex<double>> fft1d(const std::vector<double>& signal);
};

}  // namespace audio
}  // namespace apollo
