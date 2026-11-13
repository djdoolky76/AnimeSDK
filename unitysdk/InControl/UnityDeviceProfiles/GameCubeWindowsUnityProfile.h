#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_GAMECUBEWINDOWSUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0xC60A100)
#define INCONTROL_UNITYDEVICEPROFILES_GAMECUBEWINDOWSUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC6091D0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int GameCubeWindowsUnityProfile_TypeDefinitionIndex = 42043;

	class GameCubeWindowsUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_GAMECUBEWINDOWSUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_GAMECUBEWINDOWSUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
