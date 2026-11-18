#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIZenkovItemIconBtnWidgetController; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define MOLEMOLE_UIZENKOVITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS96_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1138FF70)
#define MOLEMOLE_UIZENKOVITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS96_1__ONSCROLLITEMUPDATE_B__1_OFFSET UNITYSDK_OFFSET(0x1138FF80)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovItemIconBtnWidgetController___c__DisplayClass96_1_TypeDefinitionIndex = 66157;

	template <typename T>
	class UIZenkovItemIconBtnWidgetController___c__DisplayClass96_1 : public ::System::Object
	{
	public:
		::UnityEngine::Events::UnityAction_1<::System::Int32>* cb; // 0x10
		::MoleMole::UIZenkovItemIconBtnWidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS96_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnScrollItemUpdate_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS96_1__ONSCROLLITEMUPDATE_B__1_OFFSET))(this);
		}
	};
}
