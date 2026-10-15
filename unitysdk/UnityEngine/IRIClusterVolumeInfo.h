#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
namespace UnityEngine { class Transform; }

namespace UnityEngine
{
	struct alignas(8) IRIClusterVolumeInfo
	{
		::UnityEngine::Transform* TransformComp; // 0x10
		::UnityEngine::Bounds LocalAABB; // 0x18
		::System::UInt32 MatrixNativeArrayCount; // 0x30
		::System::Byte _padding0[0x4];
		::PVOID MatrixNativeArrayPtr; // 0x38
		::PVOID Types; // 0x40
		::System::UInt32 TypesCount; // 0x48
	};
}
