#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION3MACUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB0B070)
#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION3MACUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1BB09D50)

namespace InControl::UnityDeviceProfiles
{
	class PlayStation3MacUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION3MACUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION3MACUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
