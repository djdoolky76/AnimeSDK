#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EnterBattleState.h"
#include "unitysdk/MoleMole/CheckEnterBattleStateBase.h"

class PPODAINACLI;

#define MOLEMOLE_CHECKAVATARENTERBATTLESTATE_GETCURRENTENTERBATTLESTATE_OFFSET UNITYSDK_OFFSET(0x16513C40)
#define MOLEMOLE_CHECKAVATARENTERBATTLESTATE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x16513B10)
#define MOLEMOLE_CHECKAVATARENTERBATTLESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x16513C90)
#define MOLEMOLE_CHECKAVATARENTERBATTLESTATE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x16513D20)

namespace MoleMole
{
	inline static constexpr unsigned int CheckAvatarEnterBattleState_TypeDefinitionIndex = 87455;

	class CheckAvatarEnterBattleState : public ::MoleMole::CheckEnterBattleStateBase
	{
	public:
		::PPODAINACLI* _enterBattleComponent; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKAVATARENTERBATTLESTATE__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKAVATARENTERBATTLESTATE_ONAWAKE_OFFSET))(this);
		}

		::MoleMole::Config::EnterBattleState GetCurrentEnterBattleState()
		{
			return ((::MoleMole::Config::EnterBattleState(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKAVATARENTERBATTLESTATE_GETCURRENTENTERBATTLESTATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKAVATARENTERBATTLESTATE___BASE_ONAWAKE_OFFSET))(this);
		}
	};
}
