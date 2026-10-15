#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_GAMECORE_GAMEENTITY_GAMECOMPONENTDICTIONARY_CTOR_OFFSET UNITYSDK_OFFSET(0xE6AA0D0)

namespace RPG::GameCore
{
	class GameEntity_GameComponentDictionary
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GAMECOMPONENTDICTIONARY_CTOR_OFFSET))(this);
		}

	};
}
