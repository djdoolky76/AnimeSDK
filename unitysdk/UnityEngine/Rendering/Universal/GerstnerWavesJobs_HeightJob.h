#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Wave.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_GERSTNERWAVESJOBS_HEIGHTJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x858540)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int GerstnerWavesJobs_HeightJob_TypeDefinitionIndex = 26675;

	struct alignas(8) GerstnerWavesJobs_HeightJob
	{
		::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::Wave> WaveData; // 0x10
		::System::Byte _padding0[0x8];
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> Position; // 0x20
		::System::Byte _padding1[0x8];
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> OutPosition; // 0x30
		::System::Byte _padding2[0x8];
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> OutNormal; // 0x40
		::System::Byte _padding3[0x8];
		::System::Single Time; // 0x50
		::UnityEngine::Vector2Int OffsetLength; // 0x54

		::System::Void Execute(::System::Int32 i)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GERSTNERWAVESJOBS_HEIGHTJOB_EXECUTE_OFFSET))(this, i);
		}
	};
}
