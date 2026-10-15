#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_CONFIGMANAGER_BUNDLECONFIGS_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC5BA80)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConfigManager_BundleConfigs_TypeDefinitionIndex = 8202;

	class ConfigManager_BundleConfigs : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* all_env_config; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_BUNDLECONFIGS_CTOR_OFFSET))(this);
		}

	};
}
