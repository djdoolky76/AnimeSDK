#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/SDLControllerNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_SDLXBOXSERIESXNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBD9510)
#define INCONTROL_NATIVEDEVICEPROFILES_SDLXBOXSERIESXNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1CBD7FD0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int SDLXboxSeriesXNativeProfile_TypeDefinitionIndex = 42268;

	class SDLXboxSeriesXNativeProfile : public ::InControl::NativeDeviceProfiles::SDLControllerNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_SDLXBOXSERIESXNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_SDLXBOXSERIESXNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
