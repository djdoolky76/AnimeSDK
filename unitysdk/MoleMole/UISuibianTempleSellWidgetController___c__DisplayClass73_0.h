#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GLFCLDDCFCP;
namespace MoleMole { class UISuibianTempleSellWidgetController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UISUIBIANTEMPLESELLWIDGETCONTROLLER___C__DISPLAYCLASS73_0__CTOR_OFFSET UNITYSDK_OFFSET(0x188D2440)
#define MOLEMOLE_UISUIBIANTEMPLESELLWIDGETCONTROLLER___C__DISPLAYCLASS73_0__ONSELECTBUDDY_B__0_OFFSET UNITYSDK_OFFSET(0x188D2450)
#define MOLEMOLE_UISUIBIANTEMPLESELLWIDGETCONTROLLER___C__DISPLAYCLASS73_0__ONSELECTBUDDY_B__1_OFFSET UNITYSDK_OFFSET(0x188D2590)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleSellWidgetController___c__DisplayClass73_0_TypeDefinitionIndex = 77372;

	class UISuibianTempleSellWidgetController___c__DisplayClass73_0 : public ::System::Object
	{
	public:
		::System::Action_1<::GLFCLDDCFCP*>* __9__1; // 0x10
		::MoleMole::UISuibianTempleSellWidgetController* __4__this; // 0x18
		::System::UInt32 buddyUid; // 0x20
		::System::UInt32 benchUid; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLESELLWIDGETCONTROLLER___C__DISPLAYCLASS73_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnSelectBuddy_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLESELLWIDGETCONTROLLER___C__DISPLAYCLASS73_0__ONSELECTBUDDY_B__0_OFFSET))(this);
		}

		::System::Void _OnSelectBuddy_b__1(::GLFCLDDCFCP* ret)
		{
			return ((::System::Void(*)(::PVOID, ::GLFCLDDCFCP*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLESELLWIDGETCONTROLLER___C__DISPLAYCLASS73_0__ONSELECTBUDDY_B__1_OFFSET))(this, ret);
		}
	};
}
