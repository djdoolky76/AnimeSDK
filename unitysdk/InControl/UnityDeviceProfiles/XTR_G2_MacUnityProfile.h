#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_UNITYDEVICEPROFILES_XTR_G2_MACUNITYPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCBF920)
#define INCONTROL_UNITYDEVICEPROFILES_XTR_G2_MACUNITYPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1CCBF840)

namespace InControl::UnityDeviceProfiles
{
	inline static constexpr unsigned int XTR_G2_MacUnityProfile_TypeDefinitionIndex = 42006;

	class XTR_G2_MacUnityProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XTR_G2_MACUNITYPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYDEVICEPROFILES_XTR_G2_MACUNITYPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
