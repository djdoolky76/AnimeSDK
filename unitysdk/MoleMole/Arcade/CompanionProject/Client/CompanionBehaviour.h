#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MiniGame/MiniGameEngineScriptBase.h"

#define MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_COMPANIONBEHAVIOUR_KMMIPNMJILI_OFFSET UNITYSDK_OFFSET(0x1EBA55F0)
#define MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_COMPANIONBEHAVIOUR_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1EBA5540)
#define MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_COMPANIONBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBA5680)

namespace MoleMole::Arcade::CompanionProject::Client
{
	inline static constexpr unsigned int CompanionBehaviour_TypeDefinitionIndex = 96508;

	class CompanionBehaviour : public ::MoleMole::MiniGame::MiniGameEngineScriptBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_COMPANIONBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OJENCMOGDKL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_COMPANIONBEHAVIOUR_OJENCMOGDKL_OFFSET))(this);
		}

		::System::Void KMMIPNMJILI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COMPANIONPROJECT_CLIENT_COMPANIONBEHAVIOUR_KMMIPNMJILI_OFFSET))(this);
		}
	};
}
