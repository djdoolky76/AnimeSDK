#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class PetPartyInteractionDefinition; }
namespace System { class Object; }

#define GKCNCLIOFDA_FNKFIBKMGKG_CTOR_OFFSET UNITYSDK_OFFSET(0x15A8F070)
#define GKCNCLIOFDA_FNKFIBKMGKG_GET_DEFINITION_OFFSET UNITYSDK_OFFSET(0x15A90570)
#define GKCNCLIOFDA_FNKFIBKMGKG_GET_MEMBERGROUPS_OFFSET UNITYSDK_OFFSET(0x15A90580)

inline static constexpr unsigned int GKCNCLIOFDA_FNKFIBKMGKG_TypeDefinitionIndex = 53529;

	class GKCNCLIOFDA_FNKFIBKMGKG : public ::System::Object
	{
	public:
		::RPG::GameCore::PetPartyInteractionDefinition* _Definition_k__BackingField; // 0x10
		::RPG::PoolList_1<::System::Object*>* _MemberGroups_k__BackingField; // 0x18
		::System::Void _ctor(::RPG::GameCore::PetPartyInteractionDefinition* a1, ::RPG::PoolList_1<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PetPartyInteractionDefinition*, ::RPG::PoolList_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_FNKFIBKMGKG_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::PetPartyInteractionDefinition* get_Definition()
		{
			return ((::RPG::GameCore::PetPartyInteractionDefinition*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_FNKFIBKMGKG_GET_DEFINITION_OFFSET))(this);
		}

		::RPG::PoolList_1<::System::Object*>* get_MemberGroups()
		{
			return ((::RPG::PoolList_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_FNKFIBKMGKG_GET_MEMBERGROUPS_OFFSET))(this);
		}

	};
