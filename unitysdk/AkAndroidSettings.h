#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkWwiseInitializationSettings_PlatformSettings.h"

class AkAndroidSettings_PlatformAdvancedSettings;
class AkCommonAdvancedSettings;
class AkCommonCommSettings;
class AkCommonUserSettings;

#define AKANDROIDSETTINGS_E446548DFEF8A7F7_OFFSET UNITYSDK_OFFSET(0x17395E0)
#define AKANDROIDSETTINGS_E88F3D5670D6BAD6_OFFSET UNITYSDK_OFFSET(0x165A410)
#define AKANDROIDSETTINGS_F4EEC9E688F62269_OFFSET UNITYSDK_OFFSET(0x18249B0)
#define AKANDROIDSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x28F3050)

inline static constexpr unsigned int AkAndroidSettings_TypeDefinitionIndex = 19732;

class AkAndroidSettings : public ::AkWwiseInitializationSettings_PlatformSettings
{
public:
	::AkCommonUserSettings* UserSettings; // 0x30
	::AkAndroidSettings_PlatformAdvancedSettings* AdvancedSettings; // 0x38
	::AkCommonCommSettings* CommsSettings; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKANDROIDSETTINGS__CTOR_OFFSET))(this);
	}

	::AkCommonCommSettings* F4EEC9E688F62269()
	{
		return ((::AkCommonCommSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKANDROIDSETTINGS_F4EEC9E688F62269_OFFSET))(this);
	}

	::AkCommonUserSettings* E446548DFEF8A7F7()
	{
		return ((::AkCommonUserSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKANDROIDSETTINGS_E446548DFEF8A7F7_OFFSET))(this);
	}

	::AkCommonAdvancedSettings* E88F3D5670D6BAD6()
	{
		return ((::AkCommonAdvancedSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKANDROIDSETTINGS_E88F3D5670D6BAD6_OFFSET))(this);
	}
};
