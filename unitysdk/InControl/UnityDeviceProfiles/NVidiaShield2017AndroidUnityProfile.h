#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_NVIDIASHIELD2017ANDROIDUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0xC648BD0)
#define INCONTROL_UNITYDEVICEPROFILES_NVIDIASHIELD2017ANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC6479F0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int NVidiaShield2017AndroidUnityProfile_TypeDefinitionIndex = 41950;

	class NVidiaShield2017AndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_NVIDIASHIELD2017ANDROIDUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_NVIDIASHIELD2017ANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
