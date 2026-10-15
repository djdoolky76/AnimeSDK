#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class PetPartyInteractionCategoryConfig; }
namespace RPG::GameCore { class PetPartyInteractionDefinition; }
namespace System { class Object; }

#define GKCNCLIOFDA_DNAMIBFFFNA_CTOR_OFFSET UNITYSDK_OFFSET(0x15A8D170)
#define GKCNCLIOFDA_DNAMIBFFFNA_GET_BINDINGS_OFFSET UNITYSDK_OFFSET(0x15A904E0)
#define GKCNCLIOFDA_DNAMIBFFFNA_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x15A904C0)
#define GKCNCLIOFDA_DNAMIBFFFNA_GET_DEFINITION_OFFSET UNITYSDK_OFFSET(0x15A904D0)

inline static constexpr unsigned int GKCNCLIOFDA_DNAMIBFFFNA_TypeDefinitionIndex = 53523;

	class GKCNCLIOFDA_DNAMIBFFFNA : public ::System::Object
	{
	public:
		::RPG::GameCore::PetPartyInteractionDefinition* _Definition_k__BackingField; // 0x10
		::RPG::PoolList_1<::Il2CppArray<::System::Object*>*>* _Bindings_k__BackingField; // 0x18
		::RPG::GameCore::PetPartyInteractionCategoryConfig* _Category_k__BackingField; // 0x20
		::System::Void _ctor(::RPG::GameCore::PetPartyInteractionCategoryConfig* a1, ::RPG::GameCore::PetPartyInteractionDefinition* a2, ::RPG::PoolList_1<::Il2CppArray<::System::Object*>*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PetPartyInteractionCategoryConfig*, ::RPG::GameCore::PetPartyInteractionDefinition*, ::RPG::PoolList_1<::Il2CppArray<::System::Object*>*>*))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_DNAMIBFFFNA_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::PetPartyInteractionCategoryConfig* get_Category()
		{
			return ((::RPG::GameCore::PetPartyInteractionCategoryConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_DNAMIBFFFNA_GET_CATEGORY_OFFSET))(this);
		}

		::RPG::GameCore::PetPartyInteractionDefinition* get_Definition()
		{
			return ((::RPG::GameCore::PetPartyInteractionDefinition*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_DNAMIBFFFNA_GET_DEFINITION_OFFSET))(this);
		}

		::RPG::PoolList_1<::Il2CppArray<::System::Object*>*>* get_Bindings()
		{
			return ((::RPG::PoolList_1<::Il2CppArray<::System::Object*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_DNAMIBFFFNA_GET_BINDINGS_OFFSET))(this);
		}

	};
