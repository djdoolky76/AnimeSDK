#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ComponentAssetLoader_AssetType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ComponentAssetLoader_KPIMOEDONLE; }
namespace System { class Object; }
namespace System { class Type; }

#define RPG_CLIENT_COMPONENTASSETLOADER_LCFEAHNHELC_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xCBB1E80)
#define RPG_CLIENT_COMPONENTASSETLOADER_LCFEAHNHELC_CCTOR_OFFSET UNITYSDK_OFFSET(0xCBB2840)
#define RPG_CLIENT_COMPONENTASSETLOADER_LCFEAHNHELC_IGFIKKDJKNI_OFFSET UNITYSDK_OFFSET(0xCBB2780)

namespace RPG::Client
{
	class ComponentAssetLoader_LCFEAHNHELC : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Object*>** StaticGet_KKHALCLJGNJ()
		{
			return (::Il2CppArray<::System::Object*>**)UnitySDK::FromName("RPG.Client", "LCFEAHNHELC")->GetStaticField(0x1B300);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_LCFEAHNHELC_CCTOR_OFFSET))();
		}

		static ::System::Type* IGFIKKDJKNI(::RPG::Client::ComponentAssetLoader_AssetType a1)
		{
			return ((::System::Type*(*)(::RPG::Client::ComponentAssetLoader_AssetType))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_LCFEAHNHELC_IGFIKKDJKNI_OFFSET))(a1);
		}

		static ::RPG::Client::ComponentAssetLoader_KPIMOEDONLE* ACMKLFOMPFC(::RPG::Client::ComponentAssetLoader_AssetType a1)
		{
			return ((::RPG::Client::ComponentAssetLoader_KPIMOEDONLE*(*)(::RPG::Client::ComponentAssetLoader_AssetType))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_LCFEAHNHELC_ACMKLFOMPFC_OFFSET))(a1);
		}

	};
}
