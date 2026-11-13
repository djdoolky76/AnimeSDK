#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ComponentAssetLoaderBase.h"
#include "unitysdk/RPG/Client/ComponentAssetLoader_LoadOption.h"
#include "unitysdk/RPG/Client/ComponentAssetSkinType.h"
namespace RPG::Client { class ComponentAssetSkinItem; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define RPG_CLIENT_COMPONENTASSETLOADER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1C98A0D0)
#define RPG_CLIENT_COMPONENTASSETLOADER_COLLECTALLREFASSETPATH_OFFSET UNITYSDK_OFFSET(0x1C98AE10)
#define RPG_CLIENT_COMPONENTASSETLOADER_CTOR_OFFSET UNITYSDK_OFFSET(0x1C98B1F0)
#define RPG_CLIENT_COMPONENTASSETLOADER_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x1C98A340)
#define RPG_CLIENT_COMPONENTASSETLOADER_GET_LOADSTATEINDEX_OFFSET UNITYSDK_OFFSET(0x1C98B150)
#define RPG_CLIENT_COMPONENTASSETLOADER_GET_LOADSTATE_OFFSET UNITYSDK_OFFSET(0x1C98B140)
#define RPG_CLIENT_COMPONENTASSETLOADER_GET_TOTALSTATECOUNT_OFFSET UNITYSDK_OFFSET(0x1C98B160)
#define RPG_CLIENT_COMPONENTASSETLOADER_JMHFHECFHBI_OFFSET UNITYSDK_OFFSET(0x1C98A8C0)
#define RPG_CLIENT_COMPONENTASSETLOADER_NACAGCKCIEO_OFFSET UNITYSDK_OFFSET(0x1C98A1A0)
#define RPG_CLIENT_COMPONENTASSETLOADER_NCMAFAJHDBD_OFFSET UNITYSDK_OFFSET(0x1C98A730)
#define RPG_CLIENT_COMPONENTASSETLOADER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1C98A6A0)
#define RPG_CLIENT_COMPONENTASSETLOADER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1C98A5E0)
#define RPG_CLIENT_COMPONENTASSETLOADER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C98A510)
#define RPG_CLIENT_COMPONENTASSETLOADER_SETLOADSTATEINDEX_OFFSET UNITYSDK_OFFSET(0x1C98A4B0)
#define RPG_CLIENT_COMPONENTASSETLOADER_SETLOADSTATE_OFFSET UNITYSDK_OFFSET(0x1C98A1F0)
#define RPG_CLIENT_COMPONENTASSETLOADER_SETSKINRESMAPPING_OFFSET UNITYSDK_OFFSET(0x1C98AAE0)
#define RPG_CLIENT_COMPONENTASSETLOADER_SETSKIN_OFFSET UNITYSDK_OFFSET(0x1C98A950)
#define RPG_CLIENT_COMPONENTASSETLOADER_SPAWNED_OFFSET UNITYSDK_OFFSET(0x1C98A270)

namespace RPG::Client
{
	inline static constexpr unsigned int ComponentAssetLoader_TypeDefinitionIndex = 70334;

	class ComponentAssetLoader : public ::RPG::Client::ComponentAssetLoaderBase
	{
	public:
		::RPG::Client::ComponentAssetLoader_LoadOption Option; // 0x18
		::System::Int32 DefaultStateIndex; // 0x1C
		::Il2CppArray<::System::Object*>* LoadItems; // 0x20
		::Il2CppArray<::RPG::Client::ComponentAssetSkinItem*>* SkinItems; // 0x28
		::System::Boolean FMNJGFHAPEA; // 0x30
		::System::Byte _padding0[0x3];
		::System::Int32 DHCEILDDGLA; // 0x34
		::System::Collections::Generic::List_1<::UnityEngine::Object*>* IGKKDEPNHIJ; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_AWAKE_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_DESPAWNED_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_ONDESTROY_OFFSET))(this);
		}

		::System::Void SetLoadStateIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_SETLOADSTATEINDEX_OFFSET))(this, a1);
		}

		::System::Void SetLoadState(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_SETLOADSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void SetSkin(::RPG::Client::ComponentAssetSkinType a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ComponentAssetSkinType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_SETSKIN_OFFSET))(this, a1, a2);
		}

		::System::Void SetSkinResMapping(::RPG::Client::ComponentAssetSkinType a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ComponentAssetSkinType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_SETSKINRESMAPPING_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerator_1<::System::String*>* CollectAllRefAssetPath()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_COLLECTALLREFASSETPATH_OFFSET))(this);
		}

		::System::Void NCMAFAJHDBD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_NCMAFAJHDBD_OFFSET))(this, a1);
		}

		::System::Void JMHFHECFHBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_JMHFHECFHBI_OFFSET))(this);
		}

		::System::Boolean NACAGCKCIEO(::RPG::Client::ComponentAssetLoader_LoadOption a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ComponentAssetLoader_LoadOption))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_NACAGCKCIEO_OFFSET))(this, a1);
		}

		::System::Boolean get_LoadState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_GET_LOADSTATE_OFFSET))(this);
		}

		::System::Int32 get_LoadStateIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_GET_LOADSTATEINDEX_OFFSET))(this);
		}

		::System::Int32 get_TotalStateCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETLOADER_GET_TOTALSTATECOUNT_OFFSET))(this);
		}

	};
}
