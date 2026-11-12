#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4MACUSBUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC9E6A0)
#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4MACUSBUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1CC9D270)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int PlayStation4MacUSBUnityProfile_TypeDefinitionIndex = 41999;

	class PlayStation4MacUSBUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4MACUSBUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4MACUSBUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
