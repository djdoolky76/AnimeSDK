#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkWwiseInitializationSettings_PlatformSettings.h"

class AkCommonAdvancedSettings;
class AkCommonCommSettings;
class AkCommonUserSettings;
class AkMacSettings_PlatformAdvancedSettings;

#define AKMACSETTINGS_E446548DFEF8A7F7_OFFSET UNITYSDK_OFFSET(0x17395E0)
#define AKMACSETTINGS_E88F3D5670D6BAD6_OFFSET UNITYSDK_OFFSET(0x165A410)
#define AKMACSETTINGS_F4EEC9E688F62269_OFFSET UNITYSDK_OFFSET(0x18249B0)
#define AKMACSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x28FD160)

inline static constexpr unsigned int AkMacSettings_TypeDefinitionIndex = 19759;

class AkMacSettings : public ::AkWwiseInitializationSettings_PlatformSettings
{
public:
	::AkCommonUserSettings* UserSettings; // 0x30
	::AkMacSettings_PlatformAdvancedSettings* AdvancedSettings; // 0x38
	::AkCommonCommSettings* CommsSettings; // 0x40

	::AkCommonUserSettings* E446548DFEF8A7F7()
	{
		return ((::AkCommonUserSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMACSETTINGS_E446548DFEF8A7F7_OFFSET))(this);
	}

	::AkCommonCommSettings* F4EEC9E688F62269()
	{
		return ((::AkCommonCommSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMACSETTINGS_F4EEC9E688F62269_OFFSET))(this);
	}

	::AkCommonAdvancedSettings* E88F3D5670D6BAD6()
	{
		return ((::AkCommonAdvancedSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMACSETTINGS_E88F3D5670D6BAD6_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMACSETTINGS__CTOR_OFFSET))(this);
	}
};
