#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIZenkovTaskDetailWidgetController; }
namespace System { class String; }

#define MOLEMOLE_UIZENKOVTASKDETAILWIDGETCONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13B42D50)
#define MOLEMOLE_UIZENKOVTASKDETAILWIDGETCONTROLLER___C__DISPLAYCLASS18_0__ONSHOW_B__0_OFFSET UNITYSDK_OFFSET(0x13B42D60)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovTaskDetailWidgetController___c__DisplayClass18_0_TypeDefinitionIndex = 92938;

	class UIZenkovTaskDetailWidgetController___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::System::String* anim; // 0x10
		::MoleMole::UIZenkovTaskDetailWidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTASKDETAILWIDGETCONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnShow_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTASKDETAILWIDGETCONTROLLER___C__DISPLAYCLASS18_0__ONSHOW_B__0_OFFSET))(this);
		}
	};
}
