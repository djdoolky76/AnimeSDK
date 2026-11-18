#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGNNAMFJDL.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLWIDGETWIDGETCONTROLLER_BUDDYSKILLITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x17F76400)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseBangbooSkillWidgetWidgetController_BuddySkillItem_TypeDefinitionIndex = 54182;

	class UIInLevelPauseBangbooSkillWidgetWidgetController_BuddySkillItem : public ::System::Object
	{
	public:
		::DBGNNAMFJDL SkillType; // 0x10

		::System::Void _ctor(::DBGNNAMFJDL SkillType)
		{
			return ((::System::Void(*)(::PVOID, ::DBGNNAMFJDL))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBANGBOOSKILLWIDGETWIDGETCONTROLLER_BUDDYSKILLITEM__CTOR_OFFSET))(this, SkillType);
		}
	};
}
