#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class PetPartyInteractionCategoryConfig; }
namespace RPG::GameCore { class PetPartySingleCombinationConfig; }
namespace RPG::GameCore { class PetPartySingleCombinationStartPattern; }
namespace System { class Object; }
namespace System { class String; }

#define GKCNCLIOFDA_GBAFFFJMOHK_CTOR_OFFSET UNITYSDK_OFFSET(0x15A830A0)
#define GKCNCLIOFDA_GBAFFFJMOHK_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x15A84A90)
#define GKCNCLIOFDA_GBAFFFJMOHK_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x15A84AA0)
#define GKCNCLIOFDA_GBAFFFJMOHK_GET_MEMBERGROUPS_OFFSET UNITYSDK_OFFSET(0x15A84AD0)
#define GKCNCLIOFDA_GBAFFFJMOHK_GET_SELECTIONKEY_OFFSET UNITYSDK_OFFSET(0x15A84AB0)
#define GKCNCLIOFDA_GBAFFFJMOHK_GET_STARTPATTERNS_OFFSET UNITYSDK_OFFSET(0x15A84AC0)

inline static constexpr unsigned int GKCNCLIOFDA_GBAFFFJMOHK_TypeDefinitionIndex = 53527;

	class GKCNCLIOFDA_GBAFFFJMOHK : public ::System::Object
	{
	public:
		::RPG::PoolList_1<::RPG::GameCore::PetPartySingleCombinationStartPattern*>* _StartPatterns_k__BackingField; // 0x10
		::RPG::GameCore::PetPartyInteractionCategoryConfig* _Category_k__BackingField; // 0x18
		::RPG::PoolList_1<::System::Object*>* _MemberGroups_k__BackingField; // 0x20
		::System::String* _SelectionKey_k__BackingField; // 0x28
		::RPG::GameCore::PetPartySingleCombinationConfig* _Config_k__BackingField; // 0x30
		::System::Void _ctor(::RPG::GameCore::PetPartyInteractionCategoryConfig* a1, ::RPG::GameCore::PetPartySingleCombinationConfig* a2, ::System::String* a3, ::RPG::PoolList_1<::RPG::GameCore::PetPartySingleCombinationStartPattern*>* a4, ::RPG::PoolList_1<::System::Object*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PetPartyInteractionCategoryConfig*, ::RPG::GameCore::PetPartySingleCombinationConfig*, ::System::String*, ::RPG::PoolList_1<::RPG::GameCore::PetPartySingleCombinationStartPattern*>*, ::RPG::PoolList_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_GBAFFFJMOHK_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::GameCore::PetPartyInteractionCategoryConfig* get_Category()
		{
			return ((::RPG::GameCore::PetPartyInteractionCategoryConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_GBAFFFJMOHK_GET_CATEGORY_OFFSET))(this);
		}

		::RPG::GameCore::PetPartySingleCombinationConfig* get_Config()
		{
			return ((::RPG::GameCore::PetPartySingleCombinationConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_GBAFFFJMOHK_GET_CONFIG_OFFSET))(this);
		}

		::System::String* get_SelectionKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_GBAFFFJMOHK_GET_SELECTIONKEY_OFFSET))(this);
		}

		::RPG::PoolList_1<::RPG::GameCore::PetPartySingleCombinationStartPattern*>* get_StartPatterns()
		{
			return ((::RPG::PoolList_1<::RPG::GameCore::PetPartySingleCombinationStartPattern*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_GBAFFFJMOHK_GET_STARTPATTERNS_OFFSET))(this);
		}

		::RPG::PoolList_1<::System::Object*>* get_MemberGroups()
		{
			return ((::RPG::PoolList_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_GBAFFFJMOHK_GET_MEMBERGROUPS_OFFSET))(this);
		}

	};
