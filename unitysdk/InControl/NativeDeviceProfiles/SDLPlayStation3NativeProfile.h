#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/SDLControllerNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_SDLPLAYSTATION3NATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BA48F90)
#define INCONTROL_NATIVEDEVICEPROFILES_SDLPLAYSTATION3NATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1BA471E0)

namespace InControl::NativeDeviceProfiles
{
	class SDLPlayStation3NativeProfile : public ::InControl::NativeDeviceProfiles::SDLControllerNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_SDLPLAYSTATION3NATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_SDLPLAYSTATION3NATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
