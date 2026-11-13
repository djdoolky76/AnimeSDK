#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4UNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0xC6710E0)
#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4UNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC670030)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int PlayStation4UnityProfile_TypeDefinitionIndex = 42016;

	class PlayStation4UnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4UNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4UNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
