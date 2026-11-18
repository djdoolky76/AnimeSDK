#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IFOHGNLIAKH;
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS120_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19031940)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS120_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x19031950)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS120_0__REFRESHVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x19031A50)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS120_0__REFRESHVIEW_B__2_OFFSET UNITYSDK_OFFSET(0x19031BD0)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS120_0__REFRESHVIEW_B__3_OFFSET UNITYSDK_OFFSET(0x19031C00)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS120_0__REFRESHVIEW_B__4_OFFSET UNITYSDK_OFFSET(0x19031C30)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS120_0__REFRESHVIEW_B__5_OFFSET UNITYSDK_OFFSET(0x19031DC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIItemIconBtnWidgetController___c__DisplayClass120_0_TypeDefinitionIndex = 55110;

	class UIItemIconBtnWidgetController___c__DisplayClass120_0 : public ::System::Object
	{
	public:
		::System::Action* customDoubleClickAction; // 0x10
		::MoleMole::UIItemIconBtnWidgetController* __4__this; // 0x18
		::System::Action* customTipHandle; // 0x20
		::System::Action_1<::IFOHGNLIAKH*>* customTipHandleWithController; // 0x28
		::System::Int32 curCount; // 0x30
		::System::Boolean jumpControl; // 0x34
		::System::Boolean disableJump; // 0x35

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS120_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS120_0__REFRESHVIEW_B__0_OFFSET))(this);
		}

		::System::Void _RefreshView_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS120_0__REFRESHVIEW_B__1_OFFSET))(this);
		}

		::System::Void _RefreshView_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS120_0__REFRESHVIEW_B__2_OFFSET))(this);
		}

		::System::Void _RefreshView_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS120_0__REFRESHVIEW_B__3_OFFSET))(this);
		}

		::System::Void _RefreshView_b__4(::System::Single t1, ::System::Single t2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS120_0__REFRESHVIEW_B__4_OFFSET))(this, t1, t2);
		}

		::System::Void _RefreshView_b__5(::System::Single t1, ::System::Single t2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS120_0__REFRESHVIEW_B__5_OFFSET))(this, t1, t2);
		}
	};
}
