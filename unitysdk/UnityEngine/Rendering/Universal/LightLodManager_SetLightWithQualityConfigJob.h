#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }

#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODMANAGER_SETLIGHTWITHQUALITYCONFIGJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x91B7E0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightLodManager_SetLightWithQualityConfigJob_TypeDefinitionIndex = 27227;

	struct alignas(8) LightLodManager_SetLightWithQualityConfigJob
	{
		// static const ::System::Single SPECULAR_FADE_START_DISTANCE; // 0x0
		// static const ::System::Single SPECULAR_FADE_END_DISTANCE; // 0x0
		// static const ::System::Single SHADOW_FADE_START_DISTANCE; // 0x0
		// static const ::System::Single SHADOW_FADE_END_DISTANCE; // 0x0
		// static const ::System::Single DIFFUSE_FADE_START_DISTANCE; // 0x0
		// static const ::System::Single DIFFUSE_FADE_END_DISTANCE; // 0x0
		::UnityEngine::Vector3 triggerPosition; // 0x10
		::System::Int32 lightLodQuality; // 0x1C
		::System::Single maxRangeMultiply; // 0x20
		::System::Single globalLightLodBias; // 0x24
		::UnityEngine::LayerMask triggerLayerMask; // 0x28
		::System::Boolean triggerActive; // 0x2C
		::System::Boolean isApplicationPlaying; // 0x2D
		::System::Boolean isRtxActive; // 0x2E
		::System::Byte _padding0[0x1];
		::Unity::Collections::NativeList_1<::System::Object*> lightDataConstList; // 0x30
		::System::Byte _padding1[0x8];
		::Unity::Collections::NativeList_1<::System::Object*> lightDataMutableList; // 0x40
		::System::Byte _padding2[0x8];
		::Unity::Collections::NativeList_1<::UnityEngine::Vector3> lightPositions; // 0x50
		::System::Byte _padding3[0x8];
		::System::Int32 startIndex; // 0x60
		::System::Int32 count; // 0x64
		::Unity::Collections::NativeArray_1<::System::Object*> outputs; // 0x68

		::System::Void Execute(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODMANAGER_SETLIGHTWITHQUALITYCONFIGJOB_EXECUTE_OFFSET))(this, index);
		}
	};
}
