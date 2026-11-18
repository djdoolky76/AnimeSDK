#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/NAPBatch/BatchItemValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::NAPBatch
{
	inline static constexpr unsigned int MaterialBatchWriter_TypeDefinitionIndex = 6141;

	struct alignas(4) MaterialBatchWriter
	{
		::System::Int32 MaterialInstanceID; // 0x10
		::System::Int32 PropertyID; // 0x14
		::UnityEngine::NAPBatch::BatchItemValueType ValueType; // 0x18
		::UnityEngine::Vector4 VectorValue; // 0x1C
		::System::Int32 TextureInstanceID; // 0x2C
		::UnityEngine::Matrix4x4 MatrixValue; // 0x30
	};
}
