#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PetPartyInteractionCondition.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PetPartyPlayerNotMovingCondition; }

#define RPG_GAMECORE_PETPARTYPLAYERNOTMOVINGCONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8DC1B0)
#define RPG_GAMECORE_PETPARTYPLAYERNOTMOVINGCONDITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8DC1C0)
#define RPG_GAMECORE_PETPARTYPLAYERNOTMOVINGCONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8DD340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PetPartyPlayerNotMovingCondition_TypeDefinitionIndex = 17545;

	class PetPartyPlayerNotMovingCondition : public ::RPG::GameCore::PetPartyInteractionCondition
	{
	public:
		::System::Single MinDurationSeconds; // 0x10
		::System::Single MaxDurationSeconds; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYPLAYERNOTMOVINGCONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PetPartyPlayerNotMovingCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PetPartyPlayerNotMovingCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYPLAYERNOTMOVINGCONDITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PetPartyPlayerNotMovingCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PetPartyPlayerNotMovingCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYPLAYERNOTMOVINGCONDITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
