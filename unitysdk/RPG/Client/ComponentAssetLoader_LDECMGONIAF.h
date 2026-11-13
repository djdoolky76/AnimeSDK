#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ComponentAssetLoader_AssetSyncResult.h"
#include "unitysdk/RPG/Client/ComponentAssetLoader_KPIMOEDONLE.h"
namespace RPG::Client { class ComponentAssetLoader_ComponentLoadItem; }
namespace System { class String; }
namespace UnityEngine { class Component; }

#define RPG_CLIENT_COMPONENTASSETLOADER_LDECMGONIAF_ALJIOCDBMKO_OFFSET UNITYSDK_OFFSET(0x1C98D100)
#define RPG_CLIENT_COMPONENTASSETLOADER_LDECMGONIAF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C98D0E0)
#define RPG_CLIENT_COMPONENTASSETLOADER_LDECMGONIAF_NIGEFHNEKCN_OFFSET UNITYSDK_OFFSET(0x1C98D280)

namespace RPG::Client
{
	inline static constexpr unsigned int ComponentAssetLoader_LDECMGONIAF_TypeDefinitionIndex = 70344;

	class ComponentAssetLoader_LDECMGONIAF : public ::RPG::Client::ComponentAssetLoader_KPIMOEDONLE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_LDECMGONIAF_CTOR_OFFSET))(this);
		}

		::RPG::Client::ComponentAssetLoader_AssetSyncResult ALJIOCDBMKO(::RPG::Client::ComponentAssetLoader_ComponentLoadItem* a1, ::Il2CppArray<::System::String*>* a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::ComponentAssetLoader_AssetSyncResult(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_LDECMGONIAF_ALJIOCDBMKO_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Component* NIGEFHNEKCN(::RPG::Client::ComponentAssetLoader_ComponentLoadItem* a1)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_LDECMGONIAF_NIGEFHNEKCN_OFFSET))(this, a1);
		}

	};
}
