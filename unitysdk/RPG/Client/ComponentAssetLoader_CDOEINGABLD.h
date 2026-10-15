#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ComponentAssetLoader_AssetSyncResult.h"
#include "unitysdk/RPG/Client/ComponentAssetLoader_KPIMOEDONLE.h"
namespace RPG::Client { class ComponentAssetLoader_ComponentLoadItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_COMPONENTASSETLOADER_CDOEINGABLD_ALJIOCDBMKO_OFFSET UNITYSDK_OFFSET(0xCBB1130)
#define RPG_CLIENT_COMPONENTASSETLOADER_CDOEINGABLD_CTOR_OFFSET UNITYSDK_OFFSET(0xCBB1CE0)
#define RPG_CLIENT_COMPONENTASSETLOADER_CDOEINGABLD_DAEGBOOKFJA_OFFSET UNITYSDK_OFFSET(0xCBB1C30)
#define RPG_CLIENT_COMPONENTASSETLOADER_CDOEINGABLD_DILJBNBFKGD_OFFSET UNITYSDK_OFFSET(0xCBB1CD0)
#define RPG_CLIENT_COMPONENTASSETLOADER_CDOEINGABLD_NIGEFHNEKCN_OFFSET UNITYSDK_OFFSET(0xCBB19D0)
#define RPG_CLIENT_COMPONENTASSETLOADER_CDOEINGABLD_NKJNLBIJDLF_OFFSET UNITYSDK_OFFSET(0xCBB1AD0)

namespace RPG::Client
{
	class ComponentAssetLoader_CDOEINGABLD : public ::RPG::Client::ComponentAssetLoader_KPIMOEDONLE
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_FFFELJKHHFE()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)UnitySDK::FromName("RPG.Client", "CDOEINGABLD")->GetStaticField(0x1AFF0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CDOEINGABLD_CTOR_OFFSET))(this);
		}

		::RPG::Client::ComponentAssetLoader_AssetSyncResult ALJIOCDBMKO(::RPG::Client::ComponentAssetLoader_ComponentLoadItem* a1, ::Il2CppArray<::System::String*>* a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::ComponentAssetLoader_AssetSyncResult(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CDOEINGABLD_ALJIOCDBMKO_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Component* NIGEFHNEKCN(::RPG::Client::ComponentAssetLoader_ComponentLoadItem* a1)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CDOEINGABLD_NIGEFHNEKCN_OFFSET))(this, a1);
		}

		::System::Int32 DAEGBOOKFJA(::RPG::Client::ComponentAssetLoader_ComponentLoadItem* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_ComponentLoadItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CDOEINGABLD_DAEGBOOKFJA_OFFSET))(this, a1);
		}

		static ::System::Void NKJNLBIJDLF(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CDOEINGABLD_NKJNLBIJDLF_OFFSET))(a1);
		}

		::System::Boolean DILJBNBFKGD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CDOEINGABLD_DILJBNBFKGD_OFFSET))(this);
		}

	};
}
