#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOSNES30MACUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0xC5FFE70)
#define INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOSNES30MACUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0xC5FF530)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int EightBitdoSNES30MacUnityProfile_TypeDefinitionIndex = 41987;

	class EightBitdoSNES30MacUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOSNES30MACUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_EIGHTBITDOSNES30MACUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
