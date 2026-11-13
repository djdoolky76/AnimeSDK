#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION3LINUXUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0xC662D90)
#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION3LINUXUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC661AD0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int PlayStation3LinuxUnityProfile_TypeDefinitionIndex = 41979;

	class PlayStation3LinuxUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION3LINUXUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION3LINUXUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
