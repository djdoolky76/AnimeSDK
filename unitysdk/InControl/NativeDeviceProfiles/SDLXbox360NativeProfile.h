#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/SDLControllerNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_SDLXBOX360NATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBD68F0)
#define INCONTROL_NATIVEDEVICEPROFILES_SDLXBOX360NATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1CBD54B0)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int SDLXbox360NativeProfile_TypeDefinitionIndex = 42265;

	class SDLXbox360NativeProfile : public ::InControl::NativeDeviceProfiles::SDLControllerNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_SDLXBOX360NATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_SDLXBOX360NATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
