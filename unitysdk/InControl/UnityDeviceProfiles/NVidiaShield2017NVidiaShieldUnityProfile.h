#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_NVIDIASHIELD2017NVIDIASHIELDUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC799B0)
#define INCONTROL_UNITYDEVICEPROFILES_NVIDIASHIELD2017NVIDIASHIELDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1CC787E0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int NVidiaShield2017NVidiaShieldUnityProfile_TypeDefinitionIndex = 41951;

	class NVidiaShield2017NVidiaShieldUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_NVIDIASHIELD2017NVIDIASHIELDUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_NVIDIASHIELD2017NVIDIASHIELDUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
