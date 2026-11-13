#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDRAGBLOCKZONE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E148F40)

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int ComicDessertDragBlockZone_TypeDefinitionIndex = 79761;

	class ComicDessertDragBlockZone : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDRAGBLOCKZONE_CTOR_OFFSET))(this);
		}

	};
}
