#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDONES30PROANDROIDUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0xC5F8470)
#define INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDONES30PROANDROIDUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC5F7200)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int EightBitdoNES30ProAndroidUnityProfile_TypeDefinitionIndex = 41924;

	class EightBitdoNES30ProAndroidUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDONES30PROANDROIDUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDONES30PROANDROIDUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
