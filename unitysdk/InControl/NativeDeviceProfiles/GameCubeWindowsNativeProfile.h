#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_GAMECUBEWINDOWSNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1B9F3F00)
#define INCONTROL_NATIVEDEVICEPROFILES_GAMECUBEWINDOWSNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1B9F3130)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int GameCubeWindowsNativeProfile_TypeDefinitionIndex = 41304;

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
