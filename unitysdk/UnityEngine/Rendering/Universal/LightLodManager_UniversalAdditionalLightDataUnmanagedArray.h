#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"
#include "unitysdk/UnityEngine/Jobs/TransformAccessArray.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Rendering/Universal/LightLodManager_UniversalAdditionalLightDataUnmanagedConst.h"
#include "unitysdk/UnityEngine/Rendering/Universal/LightLodManager_UniversalAdditionalLightDataUnmanagedMutable.h"

namespace System { class Object; }
namespace UnityEngine::Rendering::Universal { class UniversalAdditionalLightData; }

#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODMANAGER_UNIVERSALADDITIONALLIGHTDATAUNMANAGEDARRAY_ADD_OFFSET UNITYSDK_OFFSET(0x850490)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODMANAGER_UNIVERSALADDITIONALLIGHTDATAUNMANAGEDARRAY_CREATECONSTLIGHTDATA_OFFSET UNITYSDK_OFFSET(0x1C9C1470)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODMANAGER_UNIVERSALADDITIONALLIGHTDATAUNMANAGEDARRAY_CREATEMUTABLELIGHTDATA_OFFSET UNITYSDK_OFFSET(0x1C9C1880)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODMANAGER_UNIVERSALADDITIONALLIGHTDATAUNMANAGEDARRAY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8504B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODMANAGER_UNIVERSALADDITIONALLIGHTDATAUNMANAGEDARRAY_GET_DYNAMICLIGHTCOUNT_OFFSET UNITYSDK_OFFSET(0x850470)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODMANAGER_UNIVERSALADDITIONALLIGHTDATAUNMANAGEDARRAY_INITALLOCATE_OFFSET UNITYSDK_OFFSET(0x850480)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODMANAGER_UNIVERSALADDITIONALLIGHTDATAUNMANAGEDARRAY_REMOVEATSWAPBACK_OFFSET UNITYSDK_OFFSET(0x8504A0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightLodManager_UniversalAdditionalLightDataUnmanagedArray_TypeDefinitionIndex = 27232;

	struct alignas(8) LightLodManager_UniversalAdditionalLightDataUnmanagedArray
	{
		::Unity::Collections::NativeList_1<::System::Object*> lightDataConst; // 0x10
		::System::Byte _padding0[0x8];
		::Unity::Collections::NativeList_1<::System::Object*> lightDataMutable; // 0x20
		::System::Byte _padding1[0x8];
		::Unity::Collections::NativeList_1<::UnityEngine::Vector3> lightPositions; // 0x30
		::System::Byte _padding2[0x8];
		::Unity::Collections::NativeArray_1<::System::Object*> outputs; // 0x40
		::System::Byte _padding3[0x8];
		::UnityEngine::Jobs::TransformAccessArray dynamicLightTransformAccessArray; // 0x50
		::System::Int32 count; // 0x58
		::System::Int32 startIndex; // 0x5C

		::System::Int32 get_dynamicLightCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODMANAGER_UNIVERSALADDITIONALLIGHTDATAUNMANAGEDARRAY_GET_DYNAMICLIGHTCOUNT_OFFSET))(this);
		}

		::System::Void InitAllocate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODMANAGER_UNIVERSALADDITIONALLIGHTDATAUNMANAGEDARRAY_INITALLOCATE_OFFSET))(this);
		}

		::System::Void Add(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData* lightDataManaged)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODMANAGER_UNIVERSALADDITIONALLIGHTDATAUNMANAGEDARRAY_ADD_OFFSET))(this, lightDataManaged);
		}

		::System::Void RemoveAtSwapBack(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODMANAGER_UNIVERSALADDITIONALLIGHTDATAUNMANAGEDARRAY_REMOVEATSWAPBACK_OFFSET))(this, index);
		}

		static ::UnityEngine::Rendering::Universal::LightLodManager_UniversalAdditionalLightDataUnmanagedConst CreateConstLightData(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData* lightDataManaged)
		{
			return ((::UnityEngine::Rendering::Universal::LightLodManager_UniversalAdditionalLightDataUnmanagedConst(*)(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODMANAGER_UNIVERSALADDITIONALLIGHTDATAUNMANAGEDARRAY_CREATECONSTLIGHTDATA_OFFSET))(lightDataManaged);
		}

		static ::UnityEngine::Rendering::Universal::LightLodManager_UniversalAdditionalLightDataUnmanagedMutable CreateMutableLightData(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData* lightDataManaged)
		{
			return ((::UnityEngine::Rendering::Universal::LightLodManager_UniversalAdditionalLightDataUnmanagedMutable(*)(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODMANAGER_UNIVERSALADDITIONALLIGHTDATAUNMANAGEDARRAY_CREATEMUTABLELIGHTDATA_OFFSET))(lightDataManaged);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODMANAGER_UNIVERSALADDITIONALLIGHTDATAUNMANAGEDARRAY_DISPOSE_OFFSET))(this);
		}
	};
}
