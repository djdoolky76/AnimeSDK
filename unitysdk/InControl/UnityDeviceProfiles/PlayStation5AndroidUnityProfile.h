#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION5ANDROIDUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCA5E00)
#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION5ANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1CCA4AD0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int PlayStation5AndroidUnityProfile_TypeDefinitionIndex = 41958;

	class PlayStation5AndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION5ANDROIDUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION5ANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
