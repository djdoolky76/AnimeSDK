#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_GAMESTICKLINUXUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC3E7C0)
#define INCONTROL_UNITYDEVICEPROFILES_GAMESTICKLINUXUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1CC3D730)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int GameStickLinuxUnityProfile_TypeDefinitionIndex = 41970;

	class GameStickLinuxUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_GAMESTICKLINUXUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_GAMESTICKLINUXUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
