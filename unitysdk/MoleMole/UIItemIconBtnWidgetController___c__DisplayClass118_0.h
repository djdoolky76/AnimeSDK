#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IFOHGNLIAKH;
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS118_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14C85790)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS118_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x14C857A0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS118_0__REFRESHVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x14C858A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIItemIconBtnWidgetController___c__DisplayClass118_0_TypeDefinitionIndex = 55112;

	class UIItemIconBtnWidgetController___c__DisplayClass118_0 : public ::System::Object
	{
	public:
		::System::Action* customDoubleClickAction; // 0x10
		::MoleMole::UIItemIconBtnWidgetController* __4__this; // 0x18
		::System::Action* customTipHandle; // 0x20
		::System::Action_1<::IFOHGNLIAKH*>* customTipHandleWithController; // 0x28
		::System::Int32 itemID; // 0x30
		::System::Boolean jumpControl; // 0x34
		::System::Boolean disableJump; // 0x35
		::System::Boolean isShowTip; // 0x36

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS118_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS118_0__REFRESHVIEW_B__0_OFFSET))(this);
		}

		::System::Void _RefreshView_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS118_0__REFRESHVIEW_B__1_OFFSET))(this);
		}
	};
}
