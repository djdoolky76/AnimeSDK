#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/Config/ConfigPhotoCameraFrame_JMLJFHDDDML.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_CONFIGPHOTOCAMERAFRAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA39AE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPhotoCameraFrame_TypeDefinitionIndex = 79833;

	class ConfigPhotoCameraFrame : public ::System::Object
	{
	public:
		::Foundation::AssetPath PrefabAssetPath; // 0x10
		::MoleMole::Config::ConfigPhotoCameraFrame_JMLJFHDDDML UidTextStyle; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPHOTOCAMERAFRAME__CTOR_OFFSET))(this);
		}
	};
}
