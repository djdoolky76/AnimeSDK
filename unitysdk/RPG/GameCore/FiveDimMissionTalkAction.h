#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimMissionTalkAction; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace RPG::GameCore { class SimpleTalkListConfig; }

#define RPG_GAMECORE_FIVEDIMMISSIONTALKACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D69BCC0)
#define RPG_GAMECORE_FIVEDIMMISSIONTALKACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D69BCD0)
#define RPG_GAMECORE_FIVEDIMMISSIONTALKACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D69BC90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMissionTalkAction_TypeDefinitionIndex = 18759;

	class FiveDimMissionTalkAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::GameCore::SimpleTalkListConfig* TalkListConfig; // 0x10
		::RPG::GameCore::LittleGameEvent* TalkFinishEvent; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMISSIONTALKACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimMissionTalkAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimMissionTalkAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMISSIONTALKACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimMissionTalkAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimMissionTalkAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMISSIONTALKACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
