#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/XboxOneDriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_ROCKCANDYXBOXONECONTROLLERMACNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x155FADC0)
#define INCONTROL_NATIVEDEVICEPROFILES_ROCKCANDYXBOXONECONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x155FAC90)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int RockCandyXboxOneControllerMacNativeProfile_TypeDefinitionIndex = 42209;

	class RockCandyXboxOneControllerMacNativeProfile : public ::InControl::NativeDeviceProfiles::XboxOneDriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_ROCKCANDYXBOXONECONTROLLERMACNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_ROCKCANDYXBOXONECONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
