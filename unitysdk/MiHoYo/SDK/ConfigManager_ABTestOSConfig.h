#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class AbTestConfig_7911CDDE5D92E7D1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_CONFIGMANAGER_ABTESTOSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDE5110)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConfigManager_ABTestOSConfig_TypeDefinitionIndex = 8217;

	class ConfigManager_ABTestOSConfig : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MiHoYo::SDK::AbTestConfig_7911CDDE5D92E7D1*>* abtestOS; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_ABTESTOSCONFIG_CTOR_OFFSET))(this);
		}

	};
}
