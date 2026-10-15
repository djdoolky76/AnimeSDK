#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_BETOPBTPAX1TANDROIDUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BA93B70)
#define INCONTROL_UNITYDEVICEPROFILES_BETOPBTPAX1TANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1BA92A50)

namespace InControl::UnityDeviceProfiles
{
	class BetopBTPAX1TAndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_BETOPBTPAX1TANDROIDUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_BETOPBTPAX1TANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
