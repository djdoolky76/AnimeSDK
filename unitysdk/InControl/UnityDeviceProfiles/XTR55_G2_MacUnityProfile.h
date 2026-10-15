#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_XTR55_G2_MACUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB36960)
#define INCONTROL_UNITYDEVICEPROFILES_XTR55_G2_MACUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1BB36880)

namespace InControl::UnityDeviceProfiles
{
	class XTR55_G2_MacUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XTR55_G2_MACUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XTR55_G2_MACUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
