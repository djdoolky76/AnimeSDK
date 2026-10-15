#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PFACHJFCILN_PreloadType.h"
#include "unitysdk/System/Object.h"
namespace Collections::Pooled { template <typename T1, typename T2> class PooledDictionary_2; }
namespace RPG::Client { class BattleAssetPreload_CharacterPreloadGroupBase; }
namespace System { class Object; }
namespace System { class String; }

#define LDPPBELHLEI_BONCILIGGEE_CLEAR_OFFSET UNITYSDK_OFFSET(0xB648F10)
#define LDPPBELHLEI_BONCILIGGEE_CTOR_OFFSET UNITYSDK_OFFSET(0xB649020)
#define LDPPBELHLEI_BONCILIGGEE_MOFKAJNCKGN_OFFSET UNITYSDK_OFFSET(0xB6481A0)
#define LDPPBELHLEI_BONCILIGGEE_NGCABGCHICG_OFFSET UNITYSDK_OFFSET(0xB6487B0)

	class LDPPBELHLEI_BONCILIGGEE : public ::System::Object
	{
	public:
		::Collections::Pooled::PooledDictionary_2<::System::String*, ::System::Object*>* GLIKDELPEGH; // 0x10
		::Collections::Pooled::PooledDictionary_2<::System::String*, ::System::Object*>* JAOJGPCKENL; // 0x18
		::RPG::Client::BattleAssetPreload_CharacterPreloadGroupBase* DBALOLNOLGL; // 0x20
		::System::Boolean KNEJHCOHLNN; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPPBELHLEI_BONCILIGGEE_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPPBELHLEI_BONCILIGGEE_CLEAR_OFFSET))(this);
		}

		::System::Void MOFKAJNCKGN(::System::String* a1, ::PFACHJFCILN_PreloadType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::PFACHJFCILN_PreloadType))((::PBYTE)hIl2Cpp + LDPPBELHLEI_BONCILIGGEE_MOFKAJNCKGN_OFFSET))(this, a1, a2);
		}

		::System::Void NGCABGCHICG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDPPBELHLEI_BONCILIGGEE_NGCABGCHICG_OFFSET))(this);
		}

	};
