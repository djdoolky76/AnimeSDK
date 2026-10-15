#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ComponentAssetLoader_AssetSyncResult.h"
#include "unitysdk/RPG/Client/ComponentAssetLoader_KPIMOEDONLE.h"
namespace RPG::Client { class ComponentAssetLoader_ComponentLoadItem; }
namespace System { class String; }
namespace UnityEngine { class Component; }

#define RPG_CLIENT_COMPONENTASSETLOADER_ECCHPNHEFIG_ALJIOCDBMKO_OFFSET UNITYSDK_OFFSET(0xCBB21E0)
#define RPG_CLIENT_COMPONENTASSETLOADER_ECCHPNHEFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xCBB2550)
#define RPG_CLIENT_COMPONENTASSETLOADER_ECCHPNHEFIG_DILJBNBFKGD_OFFSET UNITYSDK_OFFSET(0xCBB2540)
#define RPG_CLIENT_COMPONENTASSETLOADER_ECCHPNHEFIG_NIGEFHNEKCN_OFFSET UNITYSDK_OFFSET(0xCBB2430)

namespace RPG::Client
{
	class ComponentAssetLoader_ECCHPNHEFIG : public ::RPG::Client::ComponentAssetLoader_KPIMOEDONLE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_ECCHPNHEFIG_CTOR_OFFSET))(this);
		}

		::RPG::Client::ComponentAssetLoader_AssetSyncResult ALJIOCDBMKO(::RPG::Client::ComponentAssetLoader_ComponentLoadItem* a1, ::Il2CppArray<::System::String*>* a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::ComponentAssetLoader_AssetSyncResult(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_ECCHPNHEFIG_ALJIOCDBMKO_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Component* NIGEFHNEKCN(::RPG::Client::ComponentAssetLoader_ComponentLoadItem* a1)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_ECCHPNHEFIG_NIGEFHNEKCN_OFFSET))(this, a1);
		}

		::System::Boolean DILJBNBFKGD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_ECCHPNHEFIG_DILJBNBFKGD_OFFSET))(this);
		}

	};
}
