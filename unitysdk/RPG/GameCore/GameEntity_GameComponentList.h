#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_GAMECORE_GAMEENTITY_GAMECOMPONENTLIST_CTOR_OFFSET UNITYSDK_OFFSET(0xE6AA160)

namespace RPG::GameCore
{
	class GameEntity_GameComponentList
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GAMECOMPONENTLIST_CTOR_OFFSET))(this);
		}

	};
}
