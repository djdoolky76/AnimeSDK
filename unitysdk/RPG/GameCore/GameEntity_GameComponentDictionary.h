#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_GAMECORE_GAMEENTITY_GAMECOMPONENTDICTIONARY_CTOR_OFFSET UNITYSDK_OFFSET(0xF1A9890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameEntity_GameComponentDictionary_TypeDefinitionIndex = 54717;

	class GameEntity_GameComponentDictionary
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GAMECOMPONENTDICTIONARY_CTOR_OFFSET))(this);
		}

	};
}
