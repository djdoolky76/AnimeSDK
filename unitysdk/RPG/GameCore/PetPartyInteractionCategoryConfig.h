#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PetPartyInteractionCategory.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PetPartyInteractionCategoryConfig; }
namespace RPG::GameCore { class PetPartyInteractionDefinition; }
namespace RPG::GameCore { class PetPartySingleCombinationConfig; }
namespace RPG::GameCore { class PetPartySingleDoubleCombinationConfig; }

#define RPG_GAMECORE_PETPARTYINTERACTIONCATEGORYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9095C0)
#define RPG_GAMECORE_PETPARTYINTERACTIONCATEGORYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9093E0)

namespace RPG::GameCore
{
	class PetPartyInteractionCategoryConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PetPartyInteractionCategory Category; // 0x10
		::System::UInt32 Weight; // 0x14
		::Il2CppArray<::RPG::GameCore::PetPartyInteractionDefinition*>* Interactions; // 0x18
		::RPG::GameCore::PetPartySingleCombinationConfig* SingleCombination; // 0x20
		::RPG::GameCore::PetPartySingleDoubleCombinationConfig* SingleDoubleCombination; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYINTERACTIONCATEGORYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PetPartyInteractionCategoryConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PetPartyInteractionCategoryConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYINTERACTIONCATEGORYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
