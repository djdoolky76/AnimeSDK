#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIZenkovItemIconBtnWidgetController; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define MOLEMOLE_UIZENKOVITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS131_0__CTOR_OFFSET UNITYSDK_OFFSET(0x170CD380)
#define MOLEMOLE_UIZENKOVITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS131_0__SETENABLEEMPTYCLICK_B__0_OFFSET UNITYSDK_OFFSET(0x170CD390)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovItemIconBtnWidgetController___c__DisplayClass131_0_TypeDefinitionIndex = 66156;

	class UIZenkovItemIconBtnWidgetController___c__DisplayClass131_0 : public ::System::Object
	{
	public:
		::MoleMole::UIZenkovItemIconBtnWidgetController* __4__this; // 0x10
		::UnityEngine::Events::UnityAction_1<::System::Int32>* onClickEmpty; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS131_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetEnableEmptyClick_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS131_0__SETENABLEEMPTYCLICK_B__0_OFFSET))(this);
		}
	};
}
