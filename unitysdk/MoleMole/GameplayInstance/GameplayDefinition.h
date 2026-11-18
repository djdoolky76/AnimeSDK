#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

#define MOLEMOLE_GAMEPLAYINSTANCE_GAMEPLAYDEFINITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1191CA60)

namespace MoleMole::GameplayInstance
{
	inline static constexpr unsigned int GameplayDefinition_TypeDefinitionIndex = 39149;

	class GameplayDefinition : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPLAYINSTANCE_GAMEPLAYDEFINITION__CTOR_OFFSET))(this);
		}
	};
}
