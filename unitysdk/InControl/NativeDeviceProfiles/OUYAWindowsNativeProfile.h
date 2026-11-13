#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_OUYAWINDOWSNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x155EA0A0)
#define INCONTROL_NATIVEDEVICEPROFILES_OUYAWINDOWSNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x155E9170)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int OUYAWindowsNativeProfile_TypeDefinitionIndex = 42290;

	class OUYAWindowsNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_OUYAWINDOWSNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_OUYAWINDOWSNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
