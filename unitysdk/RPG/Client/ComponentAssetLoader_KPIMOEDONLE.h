#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ComponentAssetLoader_AssetSyncResult.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ComponentAssetLoader; }
namespace RPG::Client { class ComponentAssetLoader_ComponentLoadItem; }
namespace System { class String; }
namespace UnityEngine { class Component; }

#define RPG_CLIENT_COMPONENTASSETLOADER_KPIMOEDONLE_ALJIOCDBMKO_OFFSET UNITYSDK_OFFSET(0xCBB2560)
#define RPG_CLIENT_COMPONENTASSETLOADER_KPIMOEDONLE_BNJPHBNNJJH_OFFSET UNITYSDK_OFFSET(0xCBB25C0)
#define RPG_CLIENT_COMPONENTASSETLOADER_KPIMOEDONLE_CTOR_OFFSET UNITYSDK_OFFSET(0xCBB1120)
#define RPG_CLIENT_COMPONENTASSETLOADER_KPIMOEDONLE_DAEGBOOKFJA_OFFSET UNITYSDK_OFFSET(0xCBB26C0)
#define RPG_CLIENT_COMPONENTASSETLOADER_KPIMOEDONLE_DILJBNBFKGD_OFFSET UNITYSDK_OFFSET(0xCBB2770)
#define RPG_CLIENT_COMPONENTASSETLOADER_KPIMOEDONLE_FFHNOMIDEDE_OFFSET UNITYSDK_OFFSET(0xCBB2670)
#define RPG_CLIENT_COMPONENTASSETLOADER_KPIMOEDONLE_NIGEFHNEKCN_OFFSET UNITYSDK_OFFSET(0xCBB2710)
#define RPG_CLIENT_COMPONENTASSETLOADER_KPIMOEDONLE_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xCBB2620)

namespace RPG::Client
{
	inline static constexpr unsigned int ComponentAssetLoader_KPIMOEDONLE_TypeDefinitionIndex = 68392;

	class ComponentAssetLoader_KPIMOEDONLE : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_KPIMOEDONLE_CTOR_OFFSET))(this);
		}

		::RPG::Client::ComponentAssetLoader_AssetSyncResult ALJIOCDBMKO(::RPG::Client::ComponentAssetLoader_ComponentLoadItem* a1, ::Il2CppArray<::System::String*>* a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::ComponentAssetLoader_AssetSyncResult(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_KPIMOEDONLE_ALJIOCDBMKO_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::ComponentAssetLoader_AssetSyncResult BNJPHBNNJJH(::RPG::Client::ComponentAssetLoader* a1, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem* a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::ComponentAssetLoader_AssetSyncResult(*)(::PVOID, ::RPG::Client::ComponentAssetLoader*, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_KPIMOEDONLE_BNJPHBNNJJH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PKADDEPKJFN(::RPG::Client::ComponentAssetLoader_ComponentLoadItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_KPIMOEDONLE_PKADDEPKJFN_OFFSET))(this, a1);
		}

		::System::Void FFHNOMIDEDE(::RPG::Client::ComponentAssetLoader_ComponentLoadItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_KPIMOEDONLE_FFHNOMIDEDE_OFFSET))(this, a1);
		}

		::System::Int32 DAEGBOOKFJA(::RPG::Client::ComponentAssetLoader_ComponentLoadItem* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_KPIMOEDONLE_DAEGBOOKFJA_OFFSET))(this, a1);
		}

		::UnityEngine::Component* NIGEFHNEKCN(::RPG::Client::ComponentAssetLoader_ComponentLoadItem* a1)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_KPIMOEDONLE_NIGEFHNEKCN_OFFSET))(this, a1);
		}

		::System::Boolean DILJBNBFKGD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_KPIMOEDONLE_DILJBNBFKGD_OFFSET))(this);
		}

	};
}
