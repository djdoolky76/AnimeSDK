#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_AIRFLOWIREDPS3MACUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0xC5DEDA0)
#define INCONTROL_UNITYDEVICEPROFILES_AIRFLOWIREDPS3MACUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC5DDA90)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int AirFloWiredPS3MacUnityProfile_TypeDefinitionIndex = 41983;

	class AirFloWiredPS3MacUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_AIRFLOWIREDPS3MACUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_AIRFLOWIREDPS3MACUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
