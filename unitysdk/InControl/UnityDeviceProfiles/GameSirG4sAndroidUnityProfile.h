#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_GAMESIRG4SANDROIDUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC3D640)
#define INCONTROL_UNITYDEVICEPROFILES_GAMESIRG4SANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1CC3C3D0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int GameSirG4sAndroidUnityProfile_TypeDefinitionIndex = 41934;

	class GameSirG4sAndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_GAMESIRG4SANDROIDUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_GAMESIRG4SANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
