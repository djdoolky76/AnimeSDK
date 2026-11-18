#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER___C__DISPLAYCLASS38_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17EE0F90)
#define MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER___C__DISPLAYCLASS38_0__PLAYTIMELINE_B__0_OFFSET UNITYSDK_OFFSET(0x17EE0FA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIChatPlusTimeLinePageController___c__DisplayClass38_0_TypeDefinitionIndex = 42312;

	class UIChatPlusTimeLinePageController___c__DisplayClass38_0 : public ::System::Object
	{
	public:
		::System::Action* onFinish; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER___C__DISPLAYCLASS38_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayTimeLine_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSTIMELINEPAGECONTROLLER___C__DISPLAYCLASS38_0__PLAYTIMELINE_B__0_OFFSET))(this);
		}
	};
}
