#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ComponentAssetLoader_AssetSyncResult.h"
#include "unitysdk/RPG/Client/ComponentAssetLoader_AssetType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ComponentAssetLoader; }
namespace RPG::Client { class ComponentAssetLoader_KPIMOEDONLE; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class Object; }

#define RPG_CLIENT_COMPONENTASSETLOADER_COMPONENTLOADITEM_ALJIOCDBMKO_OFFSET UNITYSDK_OFFSET(0xCBA85B0)
#define RPG_CLIENT_COMPONENTASSETLOADER_COMPONENTLOADITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xCBA9EA0)
#define RPG_CLIENT_COMPONENTASSETLOADER_COMPONENTLOADITEM_GET_LOADERPROXY_OFFSET UNITYSDK_OFFSET(0xCBA9B10)
#define RPG_CLIENT_COMPONENTASSETLOADER_COMPONENTLOADITEM_GOPNGALDLNN_OFFSET UNITYSDK_OFFSET(0xCBA9C00)
#define RPG_CLIENT_COMPONENTASSETLOADER_COMPONENTLOADITEM_JIOMLFAFMNJ_OFFSET UNITYSDK_OFFSET(0xCBA8B80)
#define RPG_CLIENT_COMPONENTASSETLOADER_COMPONENTLOADITEM_JOFPHEKKGAC_OFFSET UNITYSDK_OFFSET(0xCBA94D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ComponentAssetLoader_ComponentLoadItem_TypeDefinitionIndex = 68391;

	class ComponentAssetLoader_ComponentLoadItem : public ::System::Object
	{
	public:
		::UnityEngine::Component* Component; // 0x10
		::RPG::Client::ComponentAssetLoader_AssetType Type; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Object*>* AssetStates; // 0x20
		::Il2CppArray<::System::String*>* LoadedAssetPath; // 0x28
		::Il2CppArray<::UnityEngine::Object*>* LoadedAssets; // 0x30
		::Il2CppArray<::UnityEngine::Object*>* CachedInsts; // 0x38
		::Il2CppArray<::System::String*>* _TempSkinMappedParamArray; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_COMPONENTLOADITEM_CTOR_OFFSET))(this);
		}

		::RPG::Client::ComponentAssetLoader_KPIMOEDONLE* get_LoaderProxy()
		{
			return ((::RPG::Client::ComponentAssetLoader_KPIMOEDONLE*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_COMPONENTLOADITEM_GET_LOADERPROXY_OFFSET))(this);
		}

		::RPG::Client::ComponentAssetLoader_AssetSyncResult ALJIOCDBMKO(::RPG::Client::ComponentAssetLoader* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::ComponentAssetLoader_AssetSyncResult(*)(::PVOID, ::RPG::Client::ComponentAssetLoader*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_COMPONENTLOADITEM_ALJIOCDBMKO_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::String*>* GOPNGALDLNN(::RPG::Client::ComponentAssetLoader* a1, ::Il2CppArray<::System::String*>* a2)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::RPG::Client::ComponentAssetLoader*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_COMPONENTLOADITEM_GOPNGALDLNN_OFFSET))(this, a1, a2);
		}

		::System::UInt32 JOFPHEKKGAC(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_COMPONENTLOADITEM_JOFPHEKKGAC_OFFSET))(this, a1);
		}

		::System::Void JIOMLFAFMNJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_COMPONENTLOADITEM_JIOMLFAFMNJ_OFFSET))(this);
		}

	};
}
