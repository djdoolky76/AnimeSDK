#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_NYKOPLAYPADPROAMAZONUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC89000)
#define INCONTROL_UNITYDEVICEPROFILES_NYKOPLAYPADPROAMAZONUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1CC880D0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int NykoPlayPadProAmazonUnityProfile_TypeDefinitionIndex = 41907;

	class NykoPlayPadProAmazonUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_NYKOPLAYPADPROAMAZONUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_NYKOPLAYPADPROAMAZONUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
