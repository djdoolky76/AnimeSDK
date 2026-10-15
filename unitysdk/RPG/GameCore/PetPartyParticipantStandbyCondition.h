#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PetPartyInteractionCondition.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PetPartyParticipantStandbyCondition; }
namespace System { class String; }

#define RPG_GAMECORE_PETPARTYPARTICIPANTSTANDBYCONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D909A00)
#define RPG_GAMECORE_PETPARTYPARTICIPANTSTANDBYCONDITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D909A10)
#define RPG_GAMECORE_PETPARTYPARTICIPANTSTANDBYCONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D90AC90)

namespace RPG::GameCore
{
	class PetPartyParticipantStandbyCondition : public ::RPG::GameCore::PetPartyInteractionCondition
	{
	public:
		::System::String* RoleName; // 0x10
		::System::Single MinDurationSeconds; // 0x18
		::System::Single MaxDurationSeconds; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYPARTICIPANTSTANDBYCONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PetPartyParticipantStandbyCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PetPartyParticipantStandbyCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYPARTICIPANTSTANDBYCONDITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PetPartyParticipantStandbyCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PetPartyParticipantStandbyCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYPARTICIPANTSTANDBYCONDITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
