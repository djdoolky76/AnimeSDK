#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIAbyssRewardWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15B05760)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER___C__DISPLAYCLASS11_0__ONSCROLLITEMUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0x15B05770)
#define MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER___C__DISPLAYCLASS11_0__ONSCROLLITEMUPDATE_B__1_OFFSET UNITYSDK_OFFSET(0x15B057F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssRewardWidgetController___c__DisplayClass11_0_TypeDefinitionIndex = 84647;

	class UIAbyssRewardWidgetController___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::MoleMole::UIAbyssRewardWidgetController* __4__this; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* temp; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnScrollItemUpdate_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER___C__DISPLAYCLASS11_0__ONSCROLLITEMUPDATE_B__0_OFFSET))(this);
		}

		::System::Void _OnScrollItemUpdate_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDWIDGETCONTROLLER___C__DISPLAYCLASS11_0__ONSCROLLITEMUPDATE_B__1_OFFSET))(this);
		}
	};
}
