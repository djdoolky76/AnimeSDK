#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_GAMESTICKUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0xC60FE00)
#define INCONTROL_UNITYDEVICEPROFILES_GAMESTICKUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC60ED90)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int GameStickUnityProfile_TypeDefinitionIndex = 42013;

	class GameStickUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_GAMESTICKUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_GAMESTICKUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
