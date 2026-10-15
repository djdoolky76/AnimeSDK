#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
namespace RPG::Client { class AssetsPathDict; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ASSETSPATHCONFIG_AGNEBLPOOJC_OFFSET UNITYSDK_OFFSET(0xC69F740)
#define RPG_CLIENT_ASSETSPATHCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xC69F8E0)
#define RPG_CLIENT_ASSETSPATHCONFIG_GKGBNLAOFLE_OFFSET UNITYSDK_OFFSET(0xC69F210)
#define RPG_CLIENT_ASSETSPATHCONFIG_HGCHKFHKFPA_OFFSET UNITYSDK_OFFSET(0xC69F800)
#define RPG_CLIENT_ASSETSPATHCONFIG_LKALFGAFKMM_OFFSET UNITYSDK_OFFSET(0xC69F660)

namespace RPG::Client
{
	class AssetsPathConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::AssetsPathDict*>* AssemNPCModelPath; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::AssetsPathDict*>* AssemNPCMaterialPath; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::AssetsPathDict*>* AssemNPCModelPathDicts; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::AssetsPathDict*>* AssemNPCMaterialPathDicts; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSPATHCONFIG_CTOR_OFFSET))(this);
		}

		::System::Void GKGBNLAOFLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSPATHCONFIG_GKGBNLAOFLE_OFFSET))(this);
		}

		::System::String* LKALFGAFKMM(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSPATHCONFIG_LKALFGAFKMM_OFFSET))(this, a1);
		}

		::RPG::Client::AssetsPathDict* AGNEBLPOOJC(::System::String* a1)
		{
			return ((::RPG::Client::AssetsPathDict*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSPATHCONFIG_AGNEBLPOOJC_OFFSET))(this, a1);
		}

		::System::String* HGCHKFHKFPA(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSPATHCONFIG_HGCHKFHKFPA_OFFSET))(this, a1);
		}

	};
}
