#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceProfile.h"

#define INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDOSFC30MACNATIVEPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BA0F340)
#define INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDOSFC30MACNATIVEPROFILE_DEFINE_OFFSET UNITYSDK_OFFSET(0x1BA0E9A0)

namespace InControl::NativeDeviceProfiles
{
	class EightBitdoSFC30MacNativeProfile : public ::InControl::InputDeviceProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDOSFC30MACNATIVEPROFILE_CTOR_OFFSET))(this);
		}

		::System::Void Define()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEDEVICEPROFILES_EIGHTBITDOSFC30MACNATIVEPROFILE_DEFINE_OFFSET))(this);
		}

	};
}
