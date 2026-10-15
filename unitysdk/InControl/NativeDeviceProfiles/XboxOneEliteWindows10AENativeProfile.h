#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_XBOXONEELITEWINDOWS10AENATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BA5A630)
#define INCONTROL_NATIVEDEVICEPROFILES_XBOXONEELITEWINDOWS10AENATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1BA59470)

namespace InControl::NativeDeviceProfiles
{
	class XboxOneEliteWindows10AENativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XBOXONEELITEWINDOWS10AENATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XBOXONEELITEWINDOWS10AENATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
