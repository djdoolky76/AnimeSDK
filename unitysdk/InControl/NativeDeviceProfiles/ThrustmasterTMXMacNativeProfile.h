#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_THRUSTMASTERTMXMACNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x15611CD0)
#define INCONTROL_NATIVEDEVICEPROFILES_THRUSTMASTERTMXMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x15611C50)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int ThrustmasterTMXMacNativeProfile_TypeDefinitionIndex = 42216;

	class ThrustmasterTMXMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_THRUSTMASTERTMXMACNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_THRUSTMASTERTMXMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
