#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_XBOX360AMAZONUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0xC691340)
#define INCONTROL_UNITYDEVICEPROFILES_XBOX360AMAZONUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC690090)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int Xbox360AmazonUnityProfile_TypeDefinitionIndex = 41910;

	class Xbox360AmazonUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOX360AMAZONUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XBOX360AMAZONUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
