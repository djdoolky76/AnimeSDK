#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_THRUSTMASTERFERRARI458SPIDERRACINGWHEELMACNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBDDA20)
#define INCONTROL_NATIVEDEVICEPROFILES_THRUSTMASTERFERRARI458SPIDERRACINGWHEELMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1CBDD9A0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int ThrustMasterFerrari458SpiderRacingWheelMacNativeProfile_TypeDefinitionIndex = 42213;

	class ThrustMasterFerrari458SpiderRacingWheelMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_THRUSTMASTERFERRARI458SPIDERRACINGWHEELMACNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_THRUSTMASTERFERRARI458SPIDERRACINGWHEELMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
