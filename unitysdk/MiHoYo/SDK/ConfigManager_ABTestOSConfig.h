#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class AbTestConfig_0610364D5D6941F8; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_CONFIGMANAGER_ABTESTOSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC5BA60)

namespace MiHoYo::SDK
{
	class ConfigManager_ABTestOSConfig : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MiHoYo::SDK::AbTestConfig_0610364D5D6941F8*>* abtestOS; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_ABTESTOSCONFIG_CTOR_OFFSET))(this);
		}

	};
}
