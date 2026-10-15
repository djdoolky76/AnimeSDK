#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IPedestrianMemberExternalConfig; }
namespace RPG::Client { class NPCPedestrianGPUAssetConfig_WalkBakedData; }
namespace System { class String; }

#define RPG_CLIENT_NPCPEDESTRIANGPUASSETCONFIG_ASSET_CTOR_OFFSET UNITYSDK_OFFSET(0xD930080)
#define RPG_CLIENT_NPCPEDESTRIANGPUASSETCONFIG_ASSET_PNJGKDFAACN_OFFSET UNITYSDK_OFFSET(0xD930040)

namespace RPG::Client
{
	inline static constexpr unsigned int NPCPedestrianGPUAssetConfig_Asset_TypeDefinitionIndex = 69239;

	class NPCPedestrianGPUAssetConfig_Asset : public ::System::Object
	{
	public:
		::System::String* Feature; // 0x10
		::System::String* AssetPath; // 0x18
		::RPG::Client::NPCPedestrianGPUAssetConfig_WalkBakedData* WalkBakedData; // 0x20
		::Il2CppArray<::RPG::Client::IPedestrianMemberExternalConfig*>* ExternalConfigs; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCPEDESTRIANGPUASSETCONFIG_ASSET_CTOR_OFFSET))(this);
		}

		::System::String* PNJGKDFAACN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCPEDESTRIANGPUASSETCONFIG_ASSET_PNJGKDFAACN_OFFSET))(this);
		}

	};
}
