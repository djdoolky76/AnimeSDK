#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/XboxOneDriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_PROEXXBOXONECONTROLLERMACNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBC4560)
#define INCONTROL_NATIVEDEVICEPROFILES_PROEXXBOXONECONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1CBC44E0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int ProEXXboxOneControllerMacNativeProfile_TypeDefinitionIndex = 42193;

	class ProEXXboxOneControllerMacNativeProfile : public ::InControl::NativeDeviceProfiles::XboxOneDriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_PROEXXBOXONECONTROLLERMACNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_PROEXXBOXONECONTROLLERMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
