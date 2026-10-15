#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3Int.h"
namespace UnityEngine::Tilemaps { class ITilemap; }
namespace UnityEngine::Tilemaps { class Tilemap; }

#define UNITYENGINE_TILEMAPS_ITILEMAP_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1F4A9850)
#define UNITYENGINE_TILEMAPS_ITILEMAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4A97F0)
#define UNITYENGINE_TILEMAPS_ITILEMAP_REFRESHTILE_OFFSET UNITYSDK_OFFSET(0x1F4A9800)

namespace UnityEngine::Tilemaps
{
	inline static constexpr unsigned int ITilemap_TypeDefinitionIndex = 5854;

	class ITilemap : public ::System::Object
	{
	public:
		::UnityEngine::Tilemaps::Tilemap* m_Tilemap; // 0x10
		static ::UnityEngine::Tilemaps::ITilemap** StaticGet_s_Instance()
		{
			return (::UnityEngine::Tilemaps::ITilemap**)UnitySDK::FromName("UnityEngine.Tilemaps", "ITilemap")->GetStaticField(0x420);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_ITILEMAP_CTOR_OFFSET))(this);
		}

		::System::Void RefreshTile(::UnityEngine::Vector3Int a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_ITILEMAP_REFRESHTILE_OFFSET))(this, a1);
		}

		static ::UnityEngine::Tilemaps::ITilemap* CreateInstance()
		{
			return ((::UnityEngine::Tilemaps::ITilemap*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_ITILEMAP_CREATEINSTANCE_OFFSET))();
		}

	};
}
