#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ComponentAssetLoader_AssetSyncResult.h"
#include "unitysdk/RPG/Client/ComponentAssetLoader_KPIMOEDONLE.h"
namespace RPG::Client { class ComponentAssetLoader_ComponentLoadItem; }
namespace System { class String; }
namespace UnityEngine { class Component; }

#define RPG_CLIENT_COMPONENTASSETLOADER_PJKKJHGPOHF_ALJIOCDBMKO_OFFSET UNITYSDK_OFFSET(0xCBB2C50)
#define RPG_CLIENT_COMPONENTASSETLOADER_PJKKJHGPOHF_CTOR_OFFSET UNITYSDK_OFFSET(0xCBB2A60)
#define RPG_CLIENT_COMPONENTASSETLOADER_PJKKJHGPOHF_GACBAPMHMLO_OFFSET UNITYSDK_OFFSET(0xCBB2E00)
#define RPG_CLIENT_COMPONENTASSETLOADER_PJKKJHGPOHF_NIGEFHNEKCN_OFFSET UNITYSDK_OFFSET(0xCBB2DA0)
#define RPG_CLIENT_COMPONENTASSETLOADER_PJKKJHGPOHF_PCDEPEMKIEP_OFFSET UNITYSDK_OFFSET(0xCBB2ED0)

namespace RPG::Client
{
	class ComponentAssetLoader_PJKKJHGPOHF : public ::RPG::Client::ComponentAssetLoader_KPIMOEDONLE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_PJKKJHGPOHF_CTOR_OFFSET))(this);
		}

		::RPG::Client::ComponentAssetLoader_AssetSyncResult ALJIOCDBMKO(::RPG::Client::ComponentAssetLoader_ComponentLoadItem* a1, ::Il2CppArray<::System::String*>* a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::ComponentAssetLoader_AssetSyncResult(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_PJKKJHGPOHF_ALJIOCDBMKO_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Component* NIGEFHNEKCN(::RPG::Client::ComponentAssetLoader_ComponentLoadItem* a1)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_PJKKJHGPOHF_NIGEFHNEKCN_OFFSET))(this, a1);
		}

		static ::System::Void GACBAPMHMLO(::UnityEngine::Component* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::Component*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_PJKKJHGPOHF_GACBAPMHMLO_OFFSET))(a1, a2);
		}

		static ::System::Boolean PCDEPEMKIEP(::UnityEngine::Component* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Component*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_PJKKJHGPOHF_PCDEPEMKIEP_OFFSET))(a1);
		}

	};
}
