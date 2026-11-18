#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UITrainingCoursePagePageController; }

#define MOLEMOLE_UITRAININGCOURSEPAGEPAGECONTROLLER___C__DISPLAYCLASS13_1__CTOR_OFFSET UNITYSDK_OFFSET(0x166FB330)
#define MOLEMOLE_UITRAININGCOURSEPAGEPAGECONTROLLER___C__DISPLAYCLASS13_1__ONUIOPEN_B__1_OFFSET UNITYSDK_OFFSET(0x166FB340)

namespace MoleMole
{
	inline static constexpr unsigned int UITrainingCoursePagePageController___c__DisplayClass13_1_TypeDefinitionIndex = 44112;

	template <typename T>
	class UITrainingCoursePagePageController___c__DisplayClass13_1 : public ::System::Object
	{
	public:
		::MoleMole::UITrainingCoursePagePageController* __4__this; // 0x10
		::System::Int32 scrollIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRAININGCOURSEPAGEPAGECONTROLLER___C__DISPLAYCLASS13_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRAININGCOURSEPAGEPAGECONTROLLER___C__DISPLAYCLASS13_1__ONUIOPEN_B__1_OFFSET))(this);
		}
	};
}
