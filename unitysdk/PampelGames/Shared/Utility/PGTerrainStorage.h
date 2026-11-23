#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace PampelGames::Shared::Utility { class SO_TerrainStorage; }
namespace UnityEngine { class Terrain; }

#define PAMPELGAMES_SHARED_UTILITY_PGTERRAINSTORAGE_E4C6128BD5A8A8E5_OFFSET UNITYSDK_OFFSET(0x3DBD370)
#define PAMPELGAMES_SHARED_UTILITY_PGTERRAINSTORAGE_EBBB69EB18398F92_OFFSET UNITYSDK_OFFSET(0x3DBD560)
#define PAMPELGAMES_SHARED_UTILITY_PGTERRAINSTORAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x3DBD610)

namespace PampelGames::Shared::Utility
{
	inline static constexpr unsigned int PGTerrainStorage_TypeDefinitionIndex = 21159;

	class PGTerrainStorage : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Terrain* terrain; // 0x20
		::System::Boolean heights; // 0x28
		::System::Boolean textures; // 0x29
		::System::Boolean details; // 0x2A
		::System::Boolean trees; // 0x2B
		::System::Byte _padding0[0x4];
		::PampelGames::Shared::Utility::SO_TerrainStorage* _TerrainStorage; // 0x30

		::System::Void E4C6128BD5A8A8E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_SHARED_UTILITY_PGTERRAINSTORAGE_E4C6128BD5A8A8E5_OFFSET))(this);
		}

		::System::Void EBBB69EB18398F92()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_SHARED_UTILITY_PGTERRAINSTORAGE_EBBB69EB18398F92_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_SHARED_UTILITY_PGTERRAINSTORAGE__CTOR_OFFSET))(this);
		}
	};
}
