#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkWwiseInitializationSettings_PlatformSettings.h"
class AkCommonAdvancedSettings;
class AkCommonCommSettings;
class AkCommonUserSettings;
class AkPellegrinoSettings_PlatformAdvancedSettings;

#define AKPELLEGRINOSETTINGS_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5ACBD0)
#define AKPELLEGRINOSETTINGS_GETADVANCEDSETTINGS_OFFSET UNITYSDK_OFFSET(0x1F5ACDB0)
#define AKPELLEGRINOSETTINGS_GETCOMMSSETTINGS_OFFSET UNITYSDK_OFFSET(0x1F5ACDF0)
#define AKPELLEGRINOSETTINGS_GETUSERSETTINGS_OFFSET UNITYSDK_OFFSET(0x1F5ACD70)

	class AkPellegrinoSettings : public ::AkWwiseInitializationSettings_PlatformSettings
	{
	public:
		::AkCommonUserSettings* UserSettings; // 0x30
		::AkPellegrinoSettings_PlatformAdvancedSettings* AdvancedSettings; // 0x38
		::AkCommonCommSettings* CommsSettings; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPELLEGRINOSETTINGS_CTOR_OFFSET))(this);
		}

		::AkCommonUserSettings* GetUserSettings()
		{
			return ((::AkCommonUserSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPELLEGRINOSETTINGS_GETUSERSETTINGS_OFFSET))(this);
		}

		::AkCommonAdvancedSettings* GetAdvancedSettings()
		{
			return ((::AkCommonAdvancedSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPELLEGRINOSETTINGS_GETADVANCEDSETTINGS_OFFSET))(this);
		}

		::AkCommonCommSettings* GetCommsSettings()
		{
			return ((::AkCommonCommSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPELLEGRINOSETTINGS_GETCOMMSSETTINGS_OFFSET))(this);
		}

	};
