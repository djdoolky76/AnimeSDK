#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_XINPUTWINDOWSNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BA566C0)
#define INCONTROL_NATIVEDEVICEPROFILES_XINPUTWINDOWSNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1BA55500)

namespace InControl::NativeDeviceProfiles
{
	class XInputWindowsNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XINPUTWINDOWSNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XINPUTWINDOWSNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
