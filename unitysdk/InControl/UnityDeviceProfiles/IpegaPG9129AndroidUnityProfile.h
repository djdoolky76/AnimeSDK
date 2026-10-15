#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_IPEGAPG9129ANDROIDUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BACA460)
#define INCONTROL_UNITYDEVICEPROFILES_IPEGAPG9129ANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1BAC91B0)

namespace InControl::UnityDeviceProfiles
{
	class IpegaPG9129AndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_IPEGAPG9129ANDROIDUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_IPEGAPG9129ANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
