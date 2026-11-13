#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4MACBLUETOOTHUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0xC66AE80)
#define INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4MACBLUETOOTHUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC66A500)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int PlayStation4MacBluetoothUnityProfile_TypeDefinitionIndex = 41998;

	class PlayStation4MacBluetoothUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4MACBLUETOOTHUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_PLAYSTATION4MACBLUETOOTHUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
