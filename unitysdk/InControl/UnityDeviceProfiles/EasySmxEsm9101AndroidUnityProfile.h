#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_EASYSMXESM9101ANDROIDUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BA9A860)
#define INCONTROL_UNITYDEVICEPROFILES_EASYSMXESM9101ANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1BA99550)

namespace InControl::UnityDeviceProfiles
{
	class EasySmxEsm9101AndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_EASYSMXESM9101ANDROIDUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_EASYSMXESM9101ANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
