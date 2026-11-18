#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGNNAMFJDL.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER_BUDDYSKILLITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x18E938A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseSkillWidgetWidgetController_BuddySkillItem_TypeDefinitionIndex = 60965;

	class UIInLevelPauseSkillWidgetWidgetController_BuddySkillItem : public ::System::Object
	{
	public:
		::DBGNNAMFJDL SkillType; // 0x10

		::System::Void _ctor(::DBGNNAMFJDL SkillType)
		{
			return ((::System::Void(*)(::PVOID, ::DBGNNAMFJDL))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER_BUDDYSKILLITEM__CTOR_OFFSET))(this, SkillType);
		}
	};
}
