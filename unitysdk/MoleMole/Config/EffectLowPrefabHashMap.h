#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Config/EffectLowPrefabHashMapEntry.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_EFFECTLOWPREFABHASHMAP_ENSURELOOKUP_OFFSET UNITYSDK_OFFSET(0x1B8ADAB0)
#define MOLEMOLE_CONFIG_EFFECTLOWPREFABHASHMAP_GET_ENTRIES_OFFSET UNITYSDK_OFFSET(0x1B8AD770)
#define MOLEMOLE_CONFIG_EFFECTLOWPREFABHASHMAP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B8ADB30)
#define MOLEMOLE_CONFIG_EFFECTLOWPREFABHASHMAP_REBUILDLOOKUP_OFFSET UNITYSDK_OFFSET(0x1B8AD830)
#define MOLEMOLE_CONFIG_EFFECTLOWPREFABHASHMAP_REPLACEENTRIES_OFFSET UNITYSDK_OFFSET(0x1B8AD780)
#define MOLEMOLE_CONFIG_EFFECTLOWPREFABHASHMAP_TRYGETLOWPREFABHASH_OFFSET UNITYSDK_OFFSET(0x1B8AD9F0)
#define MOLEMOLE_CONFIG_EFFECTLOWPREFABHASHMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8ADB80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int EffectLowPrefabHashMap_TypeDefinitionIndex = 87843;

	class EffectLowPrefabHashMap : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::EffectLowPrefabHashMapEntry>* entries; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::UInt64>* _lookup; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTLOWPREFABHASHMAP__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::MoleMole::Config::EffectLowPrefabHashMapEntry>* get_Entries()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::MoleMole::Config::EffectLowPrefabHashMapEntry>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTLOWPREFABHASHMAP_GET_ENTRIES_OFFSET))(this);
		}

		::System::Void ReplaceEntries(::System::Collections::Generic::List_1<::MoleMole::Config::EffectLowPrefabHashMapEntry>* newEntries)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::EffectLowPrefabHashMapEntry>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTLOWPREFABHASHMAP_REPLACEENTRIES_OFFSET))(this, newEntries);
		}

		::System::Boolean TryGetLowPrefabHash(::System::UInt64 sourceHash, ::System::UInt64& lowPrefabHash)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::UInt64&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTLOWPREFABHASHMAP_TRYGETLOWPREFABHASH_OFFSET))(this, sourceHash, lowPrefabHash);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTLOWPREFABHASHMAP_ONENABLE_OFFSET))(this);
		}

		::System::Void EnsureLookup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTLOWPREFABHASHMAP_ENSURELOOKUP_OFFSET))(this);
		}

		::System::Void RebuildLookup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTLOWPREFABHASHMAP_REBUILDLOOKUP_OFFSET))(this);
		}
	};
}
