#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_GAMECUBEMAYFLASHWINDOWSNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x19FC1210)
#define INCONTROL_NATIVEDEVICEPROFILES_GAMECUBEMAYFLASHWINDOWSNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x19FC0010)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int GameCubeMayflashWindowsNativeProfile_TypeDefinitionIndex = 42278;

	class GameCubeMayflashWindowsNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_GAMECUBEMAYFLASHWINDOWSNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_GAMECUBEMAYFLASHWINDOWSNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
