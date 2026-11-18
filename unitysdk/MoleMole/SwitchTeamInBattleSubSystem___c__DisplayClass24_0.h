#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class SwitchTeamInBattleSubSystem; }

#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18967D00)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM___C__DISPLAYCLASS24_0__SWITCHTEAM_B__0_OFFSET UNITYSDK_OFFSET(0x18967D10)

namespace MoleMole
{
	inline static constexpr unsigned int SwitchTeamInBattleSubSystem___c__DisplayClass24_0_TypeDefinitionIndex = 64732;

	class SwitchTeamInBattleSubSystem___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::MoleMole::SwitchTeamInBattleSubSystem* __4__this; // 0x10
		::UnityEngine::Quaternion cameraRot; // 0x18
		::UnityEngine::Vector3 cameraPos; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Void _SwitchTeam_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM___C__DISPLAYCLASS24_0__SWITCHTEAM_B__0_OFFSET))(this);
		}
	};
}
