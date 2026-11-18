#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERAAXISSTATE_GET_MCURRENTSPEED_OFFSET UNITYSDK_OFFSET(0x411A70)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERAAXISSTATE_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x847C80)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERAAXISSTATE_SET_MCURRENTSPEED_OFFSET UNITYSDK_OFFSET(0x5C7530)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERAAXISSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x847C60)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int OverShoulderCameraAxisState_TypeDefinitionIndex = 86089;

	struct alignas(4) OverShoulderCameraAxisState
	{
		// static const ::System::Single Epsilon; // 0x0
		::System::Single m_AccelTime; // 0x10
		::System::Single m_DecelTime; // 0x14
		::System::Single _mCurrentSpeed_k__BackingField; // 0x18

		::System::Void _ctor(::System::Single NKAJIJCGBDO, ::System::Single OLAIKCEEABF)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERAAXISSTATE__CTOR_OFFSET))(this, NKAJIJCGBDO, OLAIKCEEABF);
		}

		::System::Single get_mCurrentSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERAAXISSTATE_GET_MCURRENTSPEED_OFFSET))(this);
		}

		::System::Void set_mCurrentSpeed(::System::Single EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERAAXISSTATE_SET_MCURRENTSPEED_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void OKJCHFGIKBH(::System::Single HLFFCMIFFIB, ::System::Single PMNLNNGEIFM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERAAXISSTATE_OKJCHFGIKBH_OFFSET))(this, HLFFCMIFFIB, PMNLNNGEIFM);
		}
	};
}
