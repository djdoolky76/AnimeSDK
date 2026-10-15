#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class PetPartyInteractionDefinition; }
namespace System { class Object; }

#define GKCNCLIOFDA_GGAIDJKMAKP_CTOR_OFFSET UNITYSDK_OFFSET(0xB310)
#define GKCNCLIOFDA_GGAIDJKMAKP_GET_CONDITIONS_OFFSET UNITYSDK_OFFSET(0x94D0)
#define GKCNCLIOFDA_GGAIDJKMAKP_GET_DEFINITION_OFFSET UNITYSDK_OFFSET(0x1D30)
#define GKCNCLIOFDA_GGAIDJKMAKP_GET_PARTICIPANTS_OFFSET UNITYSDK_OFFSET(0x1D40)

	struct alignas(8) GKCNCLIOFDA_GGAIDJKMAKP
	{
		::RPG::GameCore::PetPartyInteractionDefinition* _Definition_k__BackingField; // 0x10
		::Il2CppArray<::System::Object*>* _Participants_k__BackingField; // 0x18
		::RPG::PoolList_1<::System::Object*>* _Conditions_k__BackingField; // 0x20
		::System::Void _ctor(::RPG::GameCore::PetPartyInteractionDefinition* a1, ::Il2CppArray<::System::Object*>* a2, ::RPG::PoolList_1<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PetPartyInteractionDefinition*, ::Il2CppArray<::System::Object*>*, ::RPG::PoolList_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_GGAIDJKMAKP_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::PetPartyInteractionDefinition* get_Definition()
		{
			return ((::RPG::GameCore::PetPartyInteractionDefinition*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_GGAIDJKMAKP_GET_DEFINITION_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* get_Participants()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_GGAIDJKMAKP_GET_PARTICIPANTS_OFFSET))(this);
		}

		::RPG::PoolList_1<::System::Object*>* get_Conditions()
		{
			return ((::RPG::PoolList_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_GGAIDJKMAKP_GET_CONDITIONS_OFFSET))(this);
		}

	};
