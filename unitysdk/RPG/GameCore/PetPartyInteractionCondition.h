#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PetPartyInteractionCondition; }

#define RPG_GAMECORE_PETPARTYINTERACTIONCONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D909CB0)
#define RPG_GAMECORE_PETPARTYINTERACTIONCONDITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D909C50)
#define RPG_GAMECORE_PETPARTYINTERACTIONCONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D909870)

namespace RPG::GameCore
{
	class PetPartyInteractionCondition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYINTERACTIONCONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PetPartyInteractionCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PetPartyInteractionCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYINTERACTIONCONDITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PetPartyInteractionCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PetPartyInteractionCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYINTERACTIONCONDITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
