#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class PetPartyInteractionCategoryConfig; }
namespace RPG::GameCore { class PetPartySingleDoubleCombinationConfig; }
namespace RPG::GameCore { class PetPartySingleDoubleStartPattern; }
namespace System { class Object; }
namespace System { class String; }

#define GKCNCLIOFDA_GMLOCPCHHNI_CTOR_OFFSET UNITYSDK_OFFSET(0x15A8F080)
#define GKCNCLIOFDA_GMLOCPCHHNI_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x15A90650)
#define GKCNCLIOFDA_GMLOCPCHHNI_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x15A90660)
#define GKCNCLIOFDA_GMLOCPCHHNI_GET_DOUBLESELECTIONS_OFFSET UNITYSDK_OFFSET(0x15A90690)
#define GKCNCLIOFDA_GMLOCPCHHNI_GET_SELECTIONKEY_OFFSET UNITYSDK_OFFSET(0x15A90670)
#define GKCNCLIOFDA_GMLOCPCHHNI_GET_STARTPATTERNS_OFFSET UNITYSDK_OFFSET(0x15A90680)

inline static constexpr unsigned int GKCNCLIOFDA_GMLOCPCHHNI_TypeDefinitionIndex = 53530;

	class GKCNCLIOFDA_GMLOCPCHHNI : public ::System::Object
	{
	public:
		::System::String* _SelectionKey_k__BackingField; // 0x10
		::RPG::GameCore::PetPartyInteractionCategoryConfig* _Category_k__BackingField; // 0x18
		::RPG::PoolList_1<::System::Object*>* _DoubleSelections_k__BackingField; // 0x20
		::RPG::PoolList_1<::RPG::GameCore::PetPartySingleDoubleStartPattern*>* _StartPatterns_k__BackingField; // 0x28
		::RPG::GameCore::PetPartySingleDoubleCombinationConfig* _Config_k__BackingField; // 0x30
		::System::Void _ctor(::RPG::GameCore::PetPartyInteractionCategoryConfig* a1, ::RPG::GameCore::PetPartySingleDoubleCombinationConfig* a2, ::System::String* a3, ::RPG::PoolList_1<::RPG::GameCore::PetPartySingleDoubleStartPattern*>* a4, ::RPG::PoolList_1<::System::Object*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PetPartyInteractionCategoryConfig*, ::RPG::GameCore::PetPartySingleDoubleCombinationConfig*, ::System::String*, ::RPG::PoolList_1<::RPG::GameCore::PetPartySingleDoubleStartPattern*>*, ::RPG::PoolList_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_GMLOCPCHHNI_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::GameCore::PetPartyInteractionCategoryConfig* get_Category()
		{
			return ((::RPG::GameCore::PetPartyInteractionCategoryConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_GMLOCPCHHNI_GET_CATEGORY_OFFSET))(this);
		}

		::RPG::GameCore::PetPartySingleDoubleCombinationConfig* get_Config()
		{
			return ((::RPG::GameCore::PetPartySingleDoubleCombinationConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_GMLOCPCHHNI_GET_CONFIG_OFFSET))(this);
		}

		::System::String* get_SelectionKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_GMLOCPCHHNI_GET_SELECTIONKEY_OFFSET))(this);
		}

		::RPG::PoolList_1<::RPG::GameCore::PetPartySingleDoubleStartPattern*>* get_StartPatterns()
		{
			return ((::RPG::PoolList_1<::RPG::GameCore::PetPartySingleDoubleStartPattern*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_GMLOCPCHHNI_GET_STARTPATTERNS_OFFSET))(this);
		}

		::RPG::PoolList_1<::System::Object*>* get_DoubleSelections()
		{
			return ((::RPG::PoolList_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_GMLOCPCHHNI_GET_DOUBLESELECTIONS_OFFSET))(this);
		}

	};
