#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimTriggerEventNextBeatAction; }
namespace RPG::GameCore { class LittleGameEvent; }

#define RPG_GAMECORE_FIVEDIMTRIGGEREVENTNEXTBEATACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B43C0)
#define RPG_GAMECORE_FIVEDIMTRIGGEREVENTNEXTBEATACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6B43D0)
#define RPG_GAMECORE_FIVEDIMTRIGGEREVENTNEXTBEATACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6B4380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimTriggerEventNextBeatAction_TypeDefinitionIndex = 18711;

	class FiveDimTriggerEventNextBeatAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Single BPM; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::LittleGameEvent* Event; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGEREVENTNEXTBEATACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimTriggerEventNextBeatAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimTriggerEventNextBeatAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGEREVENTNEXTBEATACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimTriggerEventNextBeatAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimTriggerEventNextBeatAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGEREVENTNEXTBEATACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
