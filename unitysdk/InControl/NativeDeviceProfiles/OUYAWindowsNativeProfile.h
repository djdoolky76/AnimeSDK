#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_OUYAWINDOWSNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BA2D500)
#define INCONTROL_NATIVEDEVICEPROFILES_OUYAWINDOWSNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1BA2C5D0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int OUYAWindowsNativeProfile_TypeDefinitionIndex = 41315;

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
