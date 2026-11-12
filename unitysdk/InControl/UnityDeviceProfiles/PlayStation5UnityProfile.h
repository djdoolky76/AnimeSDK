#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION5UNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCA85F0)
#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION5UNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1CCA7550)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int PlayStation5UnityProfile_TypeDefinitionIndex = 42017;

	class PlayStation5UnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION5UNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION5UNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
