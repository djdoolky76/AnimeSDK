#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TurnBasedModifierEvent.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TargetMuteModifierEventSource; }

#define RPG_GAMECORE_TARGETMUTEMODIFIEREVENTSOURCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB6D180)
#define RPG_GAMECORE_TARGETMUTEMODIFIEREVENTSOURCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB6D190)
#define RPG_GAMECORE_TARGETMUTEMODIFIEREVENTSOURCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB6D150)

namespace RPG::GameCore
{
	class TargetMuteModifierEventSource : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::TurnBasedModifierEvent>* ModifierEvents; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMUTEMODIFIEREVENTSOURCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMuteModifierEventSource* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMuteModifierEventSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMUTEMODIFIEREVENTSOURCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMuteModifierEventSource* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMuteModifierEventSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMUTEMODIFIEREVENTSOURCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
