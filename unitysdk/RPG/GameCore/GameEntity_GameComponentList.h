#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_GAMECORE_GAMEENTITY_GAMECOMPONENTLIST_CTOR_OFFSET UNITYSDK_OFFSET(0xE69F960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameEntity_GameComponentList_TypeDefinitionIndex = 53553;

	class GameEntity_GameComponentList
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GAMECOMPONENTLIST_CTOR_OFFSET))(this);
		}

	};
}
