#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkWwiseInitializationSettings_CommonPlatformSettings.h"

#define AKLINUXSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x28FD160)

inline static constexpr unsigned int AkLinuxSettings_TypeDefinitionIndex = 19746;

class AkLinuxSettings : public ::AkWwiseInitializationSettings_CommonPlatformSettings
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKLINUXSETTINGS__CTOR_OFFSET))(this);
	}
};
