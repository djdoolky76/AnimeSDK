#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TurnBasedModifierEvent.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TargetUnMuteModifierEventSource; }

#define RPG_GAMECORE_TARGETUNMUTEMODIFIEREVENTSOURCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB74A20)
#define RPG_GAMECORE_TARGETUNMUTEMODIFIEREVENTSOURCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB74A30)
#define RPG_GAMECORE_TARGETUNMUTEMODIFIEREVENTSOURCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB749F0)

namespace RPG::GameCore
{
	class TargetUnMuteModifierEventSource : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::TurnBasedModifierEvent>* ModifierEvents; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETUNMUTEMODIFIEREVENTSOURCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetUnMuteModifierEventSource* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetUnMuteModifierEventSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETUNMUTEMODIFIEREVENTSOURCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetUnMuteModifierEventSource* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetUnMuteModifierEventSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETUNMUTEMODIFIEREVENTSOURCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
