#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DIMBOKENEMI;

#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM___C__DISPLAYCLASS32_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15AD7950)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM___C__DISPLAYCLASS32_0__FORCECLEANUPALLDELAYEDFADEOUT_B__0_OFFSET UNITYSDK_OFFSET(0x15AD7960)

namespace MoleMole
{
	inline static constexpr unsigned int SwitchTeamInBattleSubSystem___c__DisplayClass32_0_TypeDefinitionIndex = 64733;

	class SwitchTeamInBattleSubSystem___c__DisplayClass32_0 : public ::System::Object
	{
	public:
		::DIMBOKENEMI* switchComp; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM___C__DISPLAYCLASS32_0__CTOR_OFFSET))(this);
		}

		::System::Void _ForceCleanupAllDelayedFadeOut_b__0(::System::UInt32 entityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM___C__DISPLAYCLASS32_0__FORCECLEANUPALLDELAYEDFADEOUT_B__0_OFFSET))(this, entityID);
		}
	};
}
