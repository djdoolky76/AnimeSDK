#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/NativeDeviceProfiles/Xbox360DriverMacNativeProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_MADCATZARCADESTICKMACNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBAC7F0)
#define INCONTROL_NATIVEDEVICEPROFILES_MADCATZARCADESTICKMACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1CBAC770)

namespace InControl::NativeDeviceProfiles
{
	inline static constexpr unsigned int MadCatzArcadeStickMacNativeProfile_TypeDefinitionIndex = 42139;

	class MadCatzArcadeStickMacNativeProfile : public ::InControl::NativeDeviceProfiles::Xbox360DriverMacNativeProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MADCATZARCADESTICKMACNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_MADCATZARCADESTICKMACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
