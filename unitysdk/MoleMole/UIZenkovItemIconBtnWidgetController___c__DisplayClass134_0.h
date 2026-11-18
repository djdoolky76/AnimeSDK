#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IFOHGNLIAKH;
namespace MoleMole { class UIZenkovItemIconBtnWidgetController; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIZENKOVITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS134_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13BF9EF0)
#define MOLEMOLE_UIZENKOVITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS134_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x13BF9F00)
#define MOLEMOLE_UIZENKOVITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS134_0__REFRESHVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x13BFA060)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovItemIconBtnWidgetController___c__DisplayClass134_0_TypeDefinitionIndex = 66158;

	class UIZenkovItemIconBtnWidgetController___c__DisplayClass134_0 : public ::System::Object
	{
	public:
		::MoleMole::UIZenkovItemIconBtnWidgetController* __4__this; // 0x10
		::System::Action_1<::IFOHGNLIAKH*>* customTipHandleWithController; // 0x18
		::System::Action* customDoubleClickAction; // 0x20
		::System::Action* customTipHandle; // 0x28
		::System::Boolean jumpControl; // 0x30
		::System::Boolean disableJump; // 0x31
		::System::Boolean isShowTip; // 0x32
		::System::Byte _padding0[0x1];
		::System::Int32 itemID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS134_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS134_0__REFRESHVIEW_B__0_OFFSET))(this);
		}

		::System::Void _RefreshView_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS134_0__REFRESHVIEW_B__1_OFFSET))(this);
		}
	};
}
