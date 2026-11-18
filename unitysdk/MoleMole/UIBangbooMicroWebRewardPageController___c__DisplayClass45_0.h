#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBangbooMicroWebRewardPageController; }

#define MOLEMOLE_UIBANGBOOMICROWEBREWARDPAGECONTROLLER___C__DISPLAYCLASS45_0__APPLYLEVELSWITCHANDPHASE2_B__1_OFFSET UNITYSDK_OFFSET(0x1965CB00)
#define MOLEMOLE_UIBANGBOOMICROWEBREWARDPAGECONTROLLER___C__DISPLAYCLASS45_0__APPLYLEVELSWITCHANDPHASE2_B__2_OFFSET UNITYSDK_OFFSET(0x1965CB30)
#define MOLEMOLE_UIBANGBOOMICROWEBREWARDPAGECONTROLLER___C__DISPLAYCLASS45_0__APPLYLEVELSWITCHANDPHASE2_G__AFTERSWITCHIN_0_OFFSET UNITYSDK_OFFSET(0x1965C970)
#define MOLEMOLE_UIBANGBOOMICROWEBREWARDPAGECONTROLLER___C__DISPLAYCLASS45_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1965C960)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooMicroWebRewardPageController___c__DisplayClass45_0_TypeDefinitionIndex = 70468;

	class UIBangbooMicroWebRewardPageController___c__DisplayClass45_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBangbooMicroWebRewardPageController* __4__this; // 0x10
		::System::Boolean reachMaxLevel; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single newRatio; // 0x1C
		::System::Int32 newLevel; // 0x20
		::System::Int32 newMaxExp; // 0x24
		::System::Int32 newExp; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBREWARDPAGECONTROLLER___C__DISPLAYCLASS45_0__CTOR_OFFSET))(this);
		}

		::System::Void _ApplyLevelSwitchAndPhase2_g__AfterSwitchIn_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBREWARDPAGECONTROLLER___C__DISPLAYCLASS45_0__APPLYLEVELSWITCHANDPHASE2_G__AFTERSWITCHIN_0_OFFSET))(this);
		}

		::System::Void _ApplyLevelSwitchAndPhase2_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBREWARDPAGECONTROLLER___C__DISPLAYCLASS45_0__APPLYLEVELSWITCHANDPHASE2_B__1_OFFSET))(this);
		}

		::System::Void _ApplyLevelSwitchAndPhase2_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBREWARDPAGECONTROLLER___C__DISPLAYCLASS45_0__APPLYLEVELSWITCHANDPHASE2_B__2_OFFSET))(this);
		}
	};
}
