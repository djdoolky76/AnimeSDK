#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/SDLControllerNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_SDLLOGITECHF510MODEXNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BA43F00)
#define INCONTROL_NATIVEDEVICEPROFILES_SDLLOGITECHF510MODEXNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1BA42BC0)

namespace InControl::NativeDeviceProfiles
{
	class SDLLogitechF510ModeXNativeProfile : public ::InControl::NativeDeviceProfiles::SDLControllerNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_SDLLOGITECHF510MODEXNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_SDLLOGITECHF510MODEXNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
