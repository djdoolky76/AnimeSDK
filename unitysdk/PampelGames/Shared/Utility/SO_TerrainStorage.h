#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace PampelGames::Shared::Tools { class SerializableTerrain; }

#define PAMPELGAMES_SHARED_UTILITY_SO_TERRAINSTORAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F270C0)

namespace PampelGames::Shared::Utility
{
	inline static constexpr unsigned int SO_TerrainStorage_TypeDefinitionIndex = 21146;

	class SO_TerrainStorage : public ::UnityEngine::ScriptableObject
	{
	public:
		::PampelGames::Shared::Tools::SerializableTerrain* serializedTerrain; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_SHARED_UTILITY_SO_TERRAINSTORAGE__CTOR_OFFSET))(this);
		}
	};
}
