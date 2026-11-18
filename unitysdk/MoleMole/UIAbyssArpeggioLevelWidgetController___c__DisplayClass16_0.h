#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AJPMAGNBPNF;
namespace MoleMole { class UIAbyssArpeggioLevelWidgetController; }
namespace System { class Action; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A111950)
#define MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER___C__DISPLAYCLASS16_0__REFRESHSWEEPBTN_B__0_OFFSET UNITYSDK_OFFSET(0x1A111960)
#define MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER___C__DISPLAYCLASS16_0__REFRESHSWEEPBTN_B__1_OFFSET UNITYSDK_OFFSET(0x1A112190)
#define MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER___C__DISPLAYCLASS16_0__REFRESHSWEEPBTN_B__2_OFFSET UNITYSDK_OFFSET(0x1A1122F0)
#define MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER___C__DISPLAYCLASS16_0__REFRESHSWEEPBTN_B__3_OFFSET UNITYSDK_OFFSET(0x1A1123A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssArpeggioLevelWidgetController___c__DisplayClass16_0_TypeDefinitionIndex = 49337;

	class UIAbyssArpeggioLevelWidgetController___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::System::Action* __9__2; // 0x10
		::UnityEngine::Events::UnityAction* __9__1; // 0x18
		::MoleMole::UIAbyssArpeggioLevelWidgetController* __4__this; // 0x20
		::System::Action* __9__3; // 0x28
		::AJPMAGNBPNF* _levelCfg; // 0x30
		::System::Int32 itemCount; // 0x38
		::System::Boolean canSweep; // 0x3C
		::System::Byte _padding0[0x3];
		::System::Int32 consume; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshSweepBtn_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER___C__DISPLAYCLASS16_0__REFRESHSWEEPBTN_B__0_OFFSET))(this);
		}

		::System::Void _RefreshSweepBtn_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER___C__DISPLAYCLASS16_0__REFRESHSWEEPBTN_B__1_OFFSET))(this);
		}

		::System::Void _RefreshSweepBtn_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER___C__DISPLAYCLASS16_0__REFRESHSWEEPBTN_B__2_OFFSET))(this);
		}

		::System::Void _RefreshSweepBtn_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER___C__DISPLAYCLASS16_0__REFRESHSWEEPBTN_B__3_OFFSET))(this);
		}
	};
}
