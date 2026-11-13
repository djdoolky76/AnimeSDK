#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_MAYFLASHMAGICNSMACNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x155E3900)
#define INCONTROL_NATIVEDEVICEPROFILES_MAYFLASHMAGICNSMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x155E3880)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int MayflashMagicNSMacNativeProfile_TypeDefinitionIndex = 42167;

	class MayflashMagicNSMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MAYFLASHMAGICNSMACNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MAYFLASHMAGICNSMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
