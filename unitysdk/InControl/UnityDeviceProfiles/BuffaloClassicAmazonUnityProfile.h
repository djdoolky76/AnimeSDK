#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_BUFFALOCLASSICAMAZONUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0xC5EE9B0)
#define INCONTROL_UNITYDEVICEPROFILES_BUFFALOCLASSICAMAZONUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC5EE1D0)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int BuffaloClassicAmazonUnityProfile_TypeDefinitionIndex = 41902;

	class BuffaloClassicAmazonUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_BUFFALOCLASSICAMAZONUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_BUFFALOCLASSICAMAZONUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
