#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIAbyssS2RoleChallengeListWidgetController_AvatarEntranceType.h"
#include "unitysdk/System/Object.h"

class COAFFLKMBIA;

#define MOLEMOLE_UIABYSSS2ROLECHALLENGELISTWIDGETCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A114620)
#define MOLEMOLE_UIABYSSS2ROLECHALLENGELISTWIDGETCONTROLLER___C__DISPLAYCLASS13_0__INITDATA_B__0_OFFSET UNITYSDK_OFFSET(0x1A114630)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2RoleChallengeListWidgetController___c__DisplayClass13_0_TypeDefinitionIndex = 79011;

	class UIAbyssS2RoleChallengeListWidgetController___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::MoleMole::UIAbyssS2RoleChallengeListWidgetController_AvatarEntranceType type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ROLECHALLENGELISTWIDGETCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _InitData_b__0(::COAFFLKMBIA* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::COAFFLKMBIA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ROLECHALLENGELISTWIDGETCONTROLLER___C__DISPLAYCLASS13_0__INITDATA_B__0_OFFSET))(this, x);
		}
	};
}
