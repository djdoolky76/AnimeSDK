#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_GAMECUBEWINDOWSNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x19FC20D0)
#define INCONTROL_NATIVEDEVICEPROFILES_GAMECUBEWINDOWSNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x19FC1300)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int GameCubeWindowsNativeProfile_TypeDefinitionIndex = 42279;

	class GameCubeWindowsNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_GAMECUBEWINDOWSNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_GAMECUBEWINDOWSNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
