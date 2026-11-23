#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkWwiseInitializationSettings_PlatformSettings.h"

class AkCommonAdvancedSettings;
class AkCommonCommSettings;
class AkCommonUserSettings;
class AkWindowsSettings_PlatformAdvancedSettings;

#define AKWINDOWSSETTINGS_E446548DFEF8A7F7_OFFSET UNITYSDK_OFFSET(0x17395E0)
#define AKWINDOWSSETTINGS_E88F3D5670D6BAD6_OFFSET UNITYSDK_OFFSET(0x165A410)
#define AKWINDOWSSETTINGS_F4EEC9E688F62269_OFFSET UNITYSDK_OFFSET(0x18249B0)
#define AKWINDOWSSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x28FD160)

inline static constexpr unsigned int AkWindowsSettings_TypeDefinitionIndex = 19769;

class AkWindowsSettings : public ::AkWwiseInitializationSettings_PlatformSettings
{
public:
	::AkCommonUserSettings* UserSettings; // 0x30
	::AkWindowsSettings_PlatformAdvancedSettings* AdvancedSettings; // 0x38
	::AkCommonCommSettings* CommsSettings; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKWINDOWSSETTINGS__CTOR_OFFSET))(this);
	}

	::AkCommonCommSettings* F4EEC9E688F62269()
	{
		return ((::AkCommonCommSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKWINDOWSSETTINGS_F4EEC9E688F62269_OFFSET))(this);
	}

	::AkCommonAdvancedSettings* E88F3D5670D6BAD6()
	{
		return ((::AkCommonAdvancedSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKWINDOWSSETTINGS_E88F3D5670D6BAD6_OFFSET))(this);
	}

	::AkCommonUserSettings* E446548DFEF8A7F7()
	{
		return ((::AkCommonUserSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKWINDOWSSETTINGS_E446548DFEF8A7F7_OFFSET))(this);
	}
};
