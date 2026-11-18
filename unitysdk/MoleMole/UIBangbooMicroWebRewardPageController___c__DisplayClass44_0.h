#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBangbooMicroWebRewardPageController; }

#define MOLEMOLE_UIBANGBOOMICROWEBREWARDPAGECONTROLLER___C__DISPLAYCLASS44_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1965C8F0)
#define MOLEMOLE_UIBANGBOOMICROWEBREWARDPAGECONTROLLER___C__DISPLAYCLASS44_0__ONEXPPHASE1COMPLETE_B__0_OFFSET UNITYSDK_OFFSET(0x1965C900)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooMicroWebRewardPageController___c__DisplayClass44_0_TypeDefinitionIndex = 70471;

	class UIBangbooMicroWebRewardPageController___c__DisplayClass44_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBangbooMicroWebRewardPageController* __4__this; // 0x10
		::System::Boolean reachMaxLevel; // 0x18
		::System::Byte _padding0[0x3];
		::System::Int32 newExp; // 0x1C
		::System::Single newRatio; // 0x20
		::System::Int32 newLevel; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBREWARDPAGECONTROLLER___C__DISPLAYCLASS44_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnExpPhase1Complete_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBREWARDPAGECONTROLLER___C__DISPLAYCLASS44_0__ONEXPPHASE1COMPLETE_B__0_OFFSET))(this);
		}
	};
}
