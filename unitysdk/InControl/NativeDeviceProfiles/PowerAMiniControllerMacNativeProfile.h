#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_POWERAMINICONTROLLERMACNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x155F68F0)
#define INCONTROL_NATIVEDEVICEPROFILES_POWERAMINICONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x155F6870)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int PowerAMiniControllerMacNativeProfile_TypeDefinitionIndex = 42188;

	class PowerAMiniControllerMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_POWERAMINICONTROLLERMACNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_POWERAMINICONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
