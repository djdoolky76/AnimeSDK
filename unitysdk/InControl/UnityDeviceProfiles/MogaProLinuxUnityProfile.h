#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_MOGAPROLINUXUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BAC7F50)
#define INCONTROL_UNITYDEVICEPROFILES_MOGAPROLINUXUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1BAC6D60)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int MogaProLinuxUnityProfile_TypeDefinitionIndex = 41001;

	class MogaProLinuxUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_MOGAPROLINUXUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_MOGAPROLINUXUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
