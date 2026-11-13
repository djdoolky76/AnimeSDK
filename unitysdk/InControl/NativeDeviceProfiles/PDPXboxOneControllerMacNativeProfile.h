#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/XboxOneDriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_PDPXBOXONECONTROLLERMACNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x155EC950)
#define INCONTROL_NATIVEDEVICEPROFILES_PDPXBOXONECONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x155EC4C0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int PDPXboxOneControllerMacNativeProfile_TypeDefinitionIndex = 42185;

	class PDPXboxOneControllerMacNativeProfile : public ::InControl::NativeDeviceProfiles::XboxOneDriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_PDPXBOXONECONTROLLERMACNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_PDPXBOXONECONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
