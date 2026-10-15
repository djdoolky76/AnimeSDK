#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/SDLControllerNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_SDLPLAYSTATION4NATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BA4AAB0)
#define INCONTROL_NATIVEDEVICEPROFILES_SDLPLAYSTATION4NATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1BA49080)

namespace InControl::NativeDeviceProfiles
{
	class SDLPlayStation4NativeProfile : public ::InControl::NativeDeviceProfiles::SDLControllerNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_SDLPLAYSTATION4NATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_SDLPLAYSTATION4NATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
