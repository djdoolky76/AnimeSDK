#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkWwiseInitializationSettings_PlatformSettings.h"

class AkCommonAdvancedSettings;
class AkCommonCommSettings;
class AkCommonUserSettings;

#define AKWWISEINITIALIZATIONSETTINGS_COMMONPLATFORMSETTINGS_E446548DFEF8A7F7_OFFSET UNITYSDK_OFFSET(0x17395E0)
#define AKWWISEINITIALIZATIONSETTINGS_COMMONPLATFORMSETTINGS_E88F3D5670D6BAD6_OFFSET UNITYSDK_OFFSET(0x165A410)
#define AKWWISEINITIALIZATIONSETTINGS_COMMONPLATFORMSETTINGS_F4EEC9E688F62269_OFFSET UNITYSDK_OFFSET(0x18249B0)
#define AKWWISEINITIALIZATIONSETTINGS_COMMONPLATFORMSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x28FD160)

inline static constexpr unsigned int AkWwiseInitializationSettings_CommonPlatformSettings_TypeDefinitionIndex = 19718;

class AkWwiseInitializationSettings_CommonPlatformSettings : public ::AkWwiseInitializationSettings_PlatformSettings
{
public:
	::AkCommonUserSettings* UserSettings; // 0x30
	::AkCommonAdvancedSettings* AdvancedSettings; // 0x38
	::AkCommonCommSettings* CommsSettings; // 0x40

	::AkCommonUserSettings* E446548DFEF8A7F7()
	{
		return ((::AkCommonUserSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKWWISEINITIALIZATIONSETTINGS_COMMONPLATFORMSETTINGS_E446548DFEF8A7F7_OFFSET))(this);
	}

	::AkCommonAdvancedSettings* E88F3D5670D6BAD6()
	{
		return ((::AkCommonAdvancedSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKWWISEINITIALIZATIONSETTINGS_COMMONPLATFORMSETTINGS_E88F3D5670D6BAD6_OFFSET))(this);
	}

	::AkCommonCommSettings* F4EEC9E688F62269()
	{
		return ((::AkCommonCommSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKWWISEINITIALIZATIONSETTINGS_COMMONPLATFORMSETTINGS_F4EEC9E688F62269_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKWWISEINITIALIZATIONSETTINGS_COMMONPLATFORMSETTINGS__CTOR_OFFSET))(this);
	}
};
