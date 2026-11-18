#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/NapLightData.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTFILTER_CULL_OFFSET UNITYSDK_OFFSET(0x8B0330)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTFILTER_GETLIGHTATINDEX_OFFSET UNITYSDK_OFFSET(0x8B03D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTFILTER_GETVALUE_OFFSET UNITYSDK_OFFSET(0x8B03C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTFILTER_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8B0360)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTFILTER_TILELIGHTS_OFFSET UNITYSDK_OFFSET(0x8B0320)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightFilter_TypeDefinitionIndex = 26876;

	struct alignas(8) LightFilter
	{
		// static const ::System::Int32 TileCountPerAxis = 0x10; // 0x0
		// static const ::System::Int32 MaxTileCountPerAxis = 0x20; // 0x0
		::System::Single minTileSize; // 0x10
		::System::Int32 tileCountX; // 0x14
		::System::Int32 tileCountY; // 0x18
		::System::Byte _padding0[0x4];
		::System::Object* lightTiles; // 0x20
		::System::Collections::Generic::HashSet_1<::System::Int32>* cullResultHashSet; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* cullResultList; // 0x30
		::System::Int32 iterationIndex; // 0x38
		::UnityEngine::Vector2 min; // 0x3C
		::UnityEngine::Vector2 max; // 0x44
		::UnityEngine::Vector2 invTileSize; // 0x4C
		::System::Byte _padding1[0x4];
		::Unity::Collections::NativeArray_1<::UnityEngine::NAPRenderPipeline0::NapLightData> napLightDatas1; // 0x58
		::System::Byte _padding2[0x8];
		::System::Collections::Generic::List_1<::System::Single>* lightRadius; // 0x68
		::System::Int32 lightCount; // 0x70

		::System::Void TileLights(::System::Single minTileSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTFILTER_TILELIGHTS_OFFSET))(this, minTileSize);
		}

		::System::Void Cull(::System::Boolean cullingSphereEnabled, ::UnityEngine::Vector3 position, ::System::Single radius)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTFILTER_CULL_OFFSET))(this, cullingSphereEnabled, position, radius);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTFILTER_MOVENEXT_OFFSET))(this);
		}

		::UnityEngine::NAPRenderPipeline0::NapLightData& GetValue(::System::Single& radius, ::System::Int32& lightIndex)
		{
			return ((::UnityEngine::NAPRenderPipeline0::NapLightData&(*)(::PVOID, ::System::Single&, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTFILTER_GETVALUE_OFFSET))(this, radius, lightIndex);
		}

		::UnityEngine::NAPRenderPipeline0::NapLightData& GetLightAtIndex(::System::Int32 index)
		{
			return ((::UnityEngine::NAPRenderPipeline0::NapLightData&(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTFILTER_GETLIGHTATINDEX_OFFSET))(this, index);
		}
	};
}
