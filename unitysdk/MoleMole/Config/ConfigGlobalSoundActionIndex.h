#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Config/ConfigGlobalSoundActionIndexEntry.h"
#include "unitysdk/Foundation/AssetPath.h"

#define MOLEMOLE_CONFIG_CONFIGGLOBALSOUNDACTIONINDEX_GET_INDEXASSETPATH_OFFSET UNITYSDK_OFFSET(0x1BA2CB90)
#define MOLEMOLE_CONFIG_CONFIGGLOBALSOUNDACTIONINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA2CBE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGlobalSoundActionIndex_TypeDefinitionIndex = 57486;

	class ConfigGlobalSoundActionIndex : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		// static const ::System::String* ASSET_PATH; // 0x0
		::Il2CppArray<::MoleMole::Config::ConfigGlobalSoundActionIndexEntry>* Entries; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGLOBALSOUNDACTIONINDEX__CTOR_OFFSET))(this);
		}

		static ::Foundation::AssetPath get_IndexAssetPath()
		{
			return ((::Foundation::AssetPath(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGLOBALSOUNDACTIONINDEX_GET_INDEXASSETPATH_OFFSET))();
		}
	};
}
