#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Rendering/BatchVisibility.h"
#include "unitysdk/UnityEngine/Rendering/LODParameters.h"
#include "unitysdk/UnityEngine/Plane.h"

#define UNITYENGINE_RENDERING_BATCHCULLINGCONTEXT_CTOR_OFFSET UNITYSDK_OFFSET(0x3C73190)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BatchCullingContext_TypeDefinitionIndex = 4735;

	struct alignas(8) BatchCullingContext
	{
		::Unity::Collections::NativeArray_1<::UnityEngine::Plane> cullingPlanes; // 0x10
		::System::Byte _padding0[0x8];
		::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility> batchVisibility; // 0x20
		::System::Byte _padding1[0x8];
		::Unity::Collections::NativeArray_1<::System::Int32> visibleIndices; // 0x30
		::System::Byte _padding2[0x8];
		::UnityEngine::Rendering::LODParameters lodParameters; // 0x40
		::System::Void _ctor(::Unity::Collections::NativeArray_1<::UnityEngine::Plane> a1, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility> a2, ::Unity::Collections::NativeArray_1<::System::Int32> a3, ::UnityEngine::Rendering::LODParameters a4)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchVisibility>, ::Unity::Collections::NativeArray_1<::System::Int32>, ::UnityEngine::Rendering::LODParameters))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHCULLINGCONTEXT_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

	};
}
