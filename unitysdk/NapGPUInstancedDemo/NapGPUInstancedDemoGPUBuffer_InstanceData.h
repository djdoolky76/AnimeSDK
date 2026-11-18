#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace NapGPUInstancedDemo
{
	inline static constexpr unsigned int NapGPUInstancedDemoGPUBuffer_InstanceData_TypeDefinitionIndex = 96783;

	struct alignas(4) NapGPUInstancedDemoGPUBuffer_InstanceData
	{
		::UnityEngine::Matrix4x4 objectToWorld; // 0x10
		::UnityEngine::Vector4 color; // 0x50
	};
}
