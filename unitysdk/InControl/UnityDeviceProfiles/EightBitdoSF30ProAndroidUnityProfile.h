#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOSF30PROANDROIDUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BAA28C0)
#define INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOSF30PROANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1BAA1790)

namespace InControl::UnityDeviceProfiles
{
	class EightBitdoSF30ProAndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOSF30PROANDROIDUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOSF30PROANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
