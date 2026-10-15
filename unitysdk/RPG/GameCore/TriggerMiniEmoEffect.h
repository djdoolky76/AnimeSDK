#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MiniEmoEffectOverride; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TriggerMiniEmoEffect; }
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERMINIEMOEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC55240)
#define RPG_GAMECORE_TRIGGERMINIEMOEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC55280)
#define RPG_GAMECORE_TRIGGERMINIEMOEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC551E0)

namespace RPG::GameCore
{
	class TriggerMiniEmoEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* EffectPath; // 0x20
		::System::String* UniqueEffectName; // 0x28
		::RPG::GameCore::MiniEmoEffectOverride* OverrideData; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMINIEMOEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerMiniEmoEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerMiniEmoEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMINIEMOEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerMiniEmoEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerMiniEmoEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMINIEMOEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
