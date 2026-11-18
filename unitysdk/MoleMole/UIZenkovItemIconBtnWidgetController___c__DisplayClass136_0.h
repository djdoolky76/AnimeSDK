#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IFOHGNLIAKH;
namespace MoleMole { class UIZenkovItemIconBtnWidgetController; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIZENKOVITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS136_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12C09D80)
#define MOLEMOLE_UIZENKOVITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS136_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x12C09D90)
#define MOLEMOLE_UIZENKOVITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS136_0__REFRESHVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x12C09EF0)
#define MOLEMOLE_UIZENKOVITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS136_0__REFRESHVIEW_B__2_OFFSET UNITYSDK_OFFSET(0x12C0A080)
#define MOLEMOLE_UIZENKOVITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS136_0__REFRESHVIEW_B__3_OFFSET UNITYSDK_OFFSET(0x12C0A0B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovItemIconBtnWidgetController___c__DisplayClass136_0_TypeDefinitionIndex = 66153;

	class UIZenkovItemIconBtnWidgetController___c__DisplayClass136_0 : public ::System::Object
	{
	public:
		::MoleMole::UIZenkovItemIconBtnWidgetController* __4__this; // 0x10
		::System::Action* customTipHandle; // 0x18
		::System::Action_1<::IFOHGNLIAKH*>* customTipHandleWithController; // 0x20
		::System::Action* customDoubleClickAction; // 0x28
		::System::Boolean disableJump; // 0x30
		::System::Boolean jumpControl; // 0x31
		::System::Byte _padding0[0x2];
		::System::Int32 curCount; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS136_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS136_0__REFRESHVIEW_B__0_OFFSET))(this);
		}

		::System::Void _RefreshView_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS136_0__REFRESHVIEW_B__1_OFFSET))(this);
		}

		::System::Void _RefreshView_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS136_0__REFRESHVIEW_B__2_OFFSET))(this);
		}

		::System::Void _RefreshView_b__3(::System::Single t1, ::System::Single t2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS136_0__REFRESHVIEW_B__3_OFFSET))(this, t1, t2);
		}
	};
}
