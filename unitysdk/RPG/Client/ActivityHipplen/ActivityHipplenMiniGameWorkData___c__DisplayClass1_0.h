#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenGameGradeType.h"
#include "unitysdk/System/Object.h"
class FPHEGOFOLFM;

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEWORKDATA___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC422F50)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEWORKDATA___C__DISPLAYCLASS1_0___INITWORKEFFECTS_B__0_OFFSET UNITYSDK_OFFSET(0xC422FA0)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenMiniGameWorkData___c__DisplayClass1_0_TypeDefinitionIndex = 75613;

	class ActivityHipplenMiniGameWorkData___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::HipplenGameGradeType gradeType; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEWORKDATA___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __InitWorkEffects_b__0(::FPHEGOFOLFM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FPHEGOFOLFM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEWORKDATA___C__DISPLAYCLASS1_0___INITWORKEFFECTS_B__0_OFFSET))(this, a1);
		}

	};
}
