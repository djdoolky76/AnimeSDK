#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_MADCATZCTRLRAMAZONUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC6A0A0)
#define INCONTROL_UNITYDEVICEPROFILES_MADCATZCTRLRAMAZONUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1CC68E30)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int MadCatzCTRLRAmazonUnityProfile_TypeDefinitionIndex = 41905;

	class MadCatzCTRLRAmazonUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_MADCATZCTRLRAMAZONUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_MADCATZCTRLRAMAZONUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
