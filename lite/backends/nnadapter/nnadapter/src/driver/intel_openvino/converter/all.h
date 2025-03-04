// Copyright (c) 2021 PaddlePaddle Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef __NNADAPTER_DRIVER_INTEL_OPENVINO_CONVERTER_ALL_H__  // NOLINT
#define __NNADAPTER_DRIVER_INTEL_OPENVINO_CONVERTER_ALL_H__

REGISTER_CONVERTER(ABS, ConvertUnaryActivations)
REGISTER_CONVERTER(ADD, ConvertElementwise)
REGISTER_CONVERTER(ASSIGN, ConvertAssign)
REGISTER_CONVERTER(AVERAGE_POOL_2D, ConvertPool2D)
REGISTER_CONVERTER(BATCH_NORMALIZATION, ConvertBatchNormalization)
REGISTER_CONVERTER(CONCAT, ConvertConcat)
REGISTER_CONVERTER(CONV_2D, ConvertConv2D)
REGISTER_CONVERTER(CONV_2D_TRANSPOSE, ConvertConv2DTranspose)
REGISTER_CONVERTER(DIV, ConvertElementwise)
REGISTER_CONVERTER(EQUAL, ConvertElementwise)
REGISTER_CONVERTER(EXP, ConvertUnaryActivations)
REGISTER_CONVERTER(FLATTEN, ConvertFlatten)
REGISTER_CONVERTER(FLOOR, ConvertUnaryActivations)
REGISTER_CONVERTER(GELU, ConvertGelu)
REGISTER_CONVERTER(GREATER_EQUAL, ConvertElementwise)
REGISTER_CONVERTER(HARD_SIGMOID, ConvertHardSigmoid)
REGISTER_CONVERTER(HARD_SWISH, ConvertHardSwish)
REGISTER_CONVERTER(LEAKY_RELU, ConvertLeakyRelu)
REGISTER_CONVERTER(LOG, ConvertUnaryActivations)
REGISTER_CONVERTER(MAT_MUL, ConvertMatMul)
REGISTER_CONVERTER(MAX, ConvertElementwise)
REGISTER_CONVERTER(MAX_POOL_2D, ConvertPool2D)
REGISTER_CONVERTER(MIN, ConvertElementwise)
REGISTER_CONVERTER(MUL, ConvertElementwise)
REGISTER_CONVERTER(POW, ConvertElementwise)
REGISTER_CONVERTER(RELU, ConvertUnaryActivations)
REGISTER_CONVERTER(RELU6, ConvertRelu6)
REGISTER_CONVERTER(RESHAPE, ConvertReshape)
REGISTER_CONVERTER(SLICE, ConvertSlice)
REGISTER_CONVERTER(SIGMOID, ConvertUnaryActivations)
REGISTER_CONVERTER(SOFTMAX, ConvertSoftmax)
REGISTER_CONVERTER(SOFTPLUS, ConvertSoftplus)
REGISTER_CONVERTER(SQUEEZE, ConvertSqueeze)
REGISTER_CONVERTER(SPLIT, ConvertSplit)
REGISTER_CONVERTER(STACK, ConvertStack)
REGISTER_CONVERTER(SUB, ConvertElementwise)
REGISTER_CONVERTER(SWISH, ConvertSwish)
REGISTER_CONVERTER(TANH, ConvertUnaryActivations)

#endif  // NOLINT
