#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_MOGAPROLINUXUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0xC641890)
#define INCONTROL_UNITYDEVICEPROFILES_MOGAPROLINUXUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC6406A0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int MogaProLinuxUnityProfile_TypeDefinitionIndex = 41976;

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
