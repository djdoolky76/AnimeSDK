#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PetPartyInteractionCondition; }
namespace RPG::GameCore { class PetPartyInteractionDefinition; }
namespace RPG::GameCore { class PetPartyParticipantSlot; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_PETPARTYINTERACTIONDEFINITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D90A230)
#define RPG_GAMECORE_PETPARTYINTERACTIONDEFINITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D909ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PetPartyInteractionDefinition_TypeDefinitionIndex = 17552;

	class PetPartyInteractionDefinition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* UniqueName; // 0x10
		::System::UInt32 Weight; // 0x18
		::System::Int32 Priority; // 0x1C
		::System::Boolean AllowOnMovingPlatform; // 0x20
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::GameCore::PetPartyParticipantSlot*>* Participants; // 0x28
		::Il2CppArray<::RPG::GameCore::PetPartyInteractionCondition*>* Conditions; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* PlayTaskSequence; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* InterruptTaskSequence; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYINTERACTIONDEFINITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PetPartyInteractionDefinition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PetPartyInteractionDefinition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYINTERACTIONDEFINITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
