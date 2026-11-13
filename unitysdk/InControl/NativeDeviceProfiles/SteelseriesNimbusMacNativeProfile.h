#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_STEELSERIESNIMBUSMACNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1560F260)
#define INCONTROL_NATIVEDEVICEPROFILES_STEELSERIESNIMBUSMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1560E700)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int SteelseriesNimbusMacNativeProfile_TypeDefinitionIndex = 42243;

	class SteelseriesNimbusMacNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_STEELSERIESNIMBUSMACNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_STEELSERIESNIMBUSMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
