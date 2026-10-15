#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EPedestrianAssetType.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
class LJDKBAIOLIP;
namespace RPG::Client { class ArtNPCPedestrianEntityConfig; }
namespace RPG::Client { class ArtNPCPedestrianEntityConfig_EntityInfo; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xC699640)
#define RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC6995E0)
#define RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG_EPOAFCOAJOM_OFFSET UNITYSDK_OFFSET(0xC698F50)
#define RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG_GET_MAXSPAWNCOUNT_OFFSET UNITYSDK_OFFSET(0xC6990F0)
#define RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG_GGGHEAJCOFH_OFFSET UNITYSDK_OFFSET(0xC698FB0)
#define RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG_GKGBNLAOFLE_OFFSET UNITYSDK_OFFSET(0xC699100)
#define RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG_GLEAEMCOLAI_OFFSET UNITYSDK_OFFSET(0xC698DC0)
#define RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG_LLFPEANIJIC_OFFSET UNITYSDK_OFFSET(0xC698D70)
#define RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG_PAABEMLAHOL_OFFSET UNITYSDK_OFFSET(0xC698E70)

namespace RPG::Client
{
	class ArtNPCPedestrianAssetConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::Il2CppArray<::System::Object*>* IdentityDatas; // 0x18
		::System::UInt32 MaxSpawnMemberCount; // 0x20
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* _IdentityMap; // 0x28
		::RPG::Client::ArtNPCPedestrianEntityConfig* _EntityConfig; // 0x30
		// static const ::System::String* _ENTITY_CONFIG_PATH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG_CTOR_OFFSET))(this);
		}

		::RPG::Client::EPedestrianAssetType LLFPEANIJIC()
		{
			return ((::RPG::Client::EPedestrianAssetType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG_LLFPEANIJIC_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::String*>* GLEAEMCOLAI()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG_GLEAEMCOLAI_OFFSET))(this);
		}

		::LJDKBAIOLIP* PAABEMLAHOL(::System::String* a1)
		{
			return ((::LJDKBAIOLIP*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG_PAABEMLAHOL_OFFSET))(this, a1);
		}

		::System::String* EPOAFCOAJOM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG_EPOAFCOAJOM_OFFSET))(this);
		}

		::RPG::Client::ArtNPCPedestrianEntityConfig_EntityInfo* GGGHEAJCOFH(::System::String* a1)
		{
			return ((::RPG::Client::ArtNPCPedestrianEntityConfig_EntityInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG_GGGHEAJCOFH_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxSpawnCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG_GET_MAXSPAWNCOUNT_OFFSET))(this);
		}

		::System::Void GKGBNLAOFLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG_GKGBNLAOFLE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG_DISPOSE_OFFSET))(this);
		}

	};
}
