#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimTriggerSelfEventAction; }
namespace RPG::GameCore { class LittleGameEvent; }

#define RPG_GAMECORE_FIVEDIMTRIGGERSELFEVENTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E2120)
#define RPG_GAMECORE_FIVEDIMTRIGGERSELFEVENTACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6E2130)
#define RPG_GAMECORE_FIVEDIMTRIGGERSELFEVENTACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6E2080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimTriggerSelfEventAction_TypeDefinitionIndex = 18651;

	class FiveDimTriggerSelfEventAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::GameCore::LittleGameEvent* EventName; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGERSELFEVENTACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimTriggerSelfEventAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimTriggerSelfEventAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGERSELFEVENTACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimTriggerSelfEventAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimTriggerSelfEventAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGERSELFEVENTACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
