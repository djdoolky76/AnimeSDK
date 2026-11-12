#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_XBOXWIRELESSMACNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBF0E50)
#define INCONTROL_NATIVEDEVICEPROFILES_XBOXWIRELESSMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1CBEFE40)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int XboxWirelessMacNativeProfile_TypeDefinitionIndex = 42252;

	class XboxWirelessMacNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XBOXWIRELESSMACNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_XBOXWIRELESSMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
