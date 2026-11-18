#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }
namespace MoleMole { class UIGeneralNewsBubbleWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___C__DISPLAYCLASS52_0__CTOR_OFFSET UNITYSDK_OFFSET(0x166C0580)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___C__DISPLAYCLASS52_0__PAUSEBUBBLEGROUP_B__0_OFFSET UNITYSDK_OFFSET(0x166C0590)
#define MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___C__DISPLAYCLASS52_0__PAUSEBUBBLEGROUP_B__1_OFFSET UNITYSDK_OFFSET(0x166C0660)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleWidgetController___c__DisplayClass52_0_TypeDefinitionIndex = 69189;

	class UIGeneralNewsBubbleWidgetController___c__DisplayClass52_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralNewsBubbleRowWidgetController* ctrl; // 0x10
		::MoleMole::UIGeneralNewsBubbleWidgetController* __4__this; // 0x18
		::System::Action* __9__1; // 0x20
		::System::Boolean useSort; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___C__DISPLAYCLASS52_0__CTOR_OFFSET))(this);
		}

		::System::Void _PauseBubbleGroup_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___C__DISPLAYCLASS52_0__PAUSEBUBBLEGROUP_B__0_OFFSET))(this);
		}

		::System::Void _PauseBubbleGroup_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEWIDGETCONTROLLER___C__DISPLAYCLASS52_0__PAUSEBUBBLEGROUP_B__1_OFFSET))(this);
		}
	};
}
