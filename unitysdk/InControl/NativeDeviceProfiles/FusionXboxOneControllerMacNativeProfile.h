#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/XboxOneDriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_FUSIONXBOXONECONTROLLERMACNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x19FC0000)
#define INCONTROL_NATIVEDEVICEPROFILES_FUSIONXBOXONECONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x19FBFF40)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int FusionXboxOneControllerMacNativeProfile_TypeDefinitionIndex = 42091;

	class FusionXboxOneControllerMacNativeProfile : public ::InControl::NativeDeviceProfiles::XboxOneDriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_FUSIONXBOXONECONTROLLERMACNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_FUSIONXBOXONECONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
