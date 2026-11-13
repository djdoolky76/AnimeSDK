#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_OUYAAMAZONUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0xC65A710)
#define INCONTROL_UNITYDEVICEPROFILES_OUYAAMAZONUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC6595D0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int OuyaAmazonUnityProfile_TypeDefinitionIndex = 41908;

	class OuyaAmazonUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_OUYAAMAZONUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_OUYAAMAZONUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
