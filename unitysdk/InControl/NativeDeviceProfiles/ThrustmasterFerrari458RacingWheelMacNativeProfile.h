#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_THRUSTMASTERFERRARI458RACINGWHEELMACNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x156119C0)
#define INCONTROL_NATIVEDEVICEPROFILES_THRUSTMASTERFERRARI458RACINGWHEELMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15611910)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int ThrustmasterFerrari458RacingWheelMacNativeProfile_TypeDefinitionIndex = 42214;

	class ThrustmasterFerrari458RacingWheelMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_THRUSTMASTERFERRARI458RACINGWHEELMACNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_THRUSTMASTERFERRARI458RACINGWHEELMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
