#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleAudioSwitch; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_BATTLEAUDIOSWITCH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D452950)
#define RPG_GAMECORE_BATTLEAUDIOSWITCH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D452960)
#define RPG_GAMECORE_BATTLEAUDIOSWITCH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D452920)

namespace RPG::GameCore
{
	class BattleAudioSwitch : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* GroupName; // 0x18
		::RPG::GameCore::DynamicString* SwitchName; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEAUDIOSWITCH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleAudioSwitch* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleAudioSwitch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEAUDIOSWITCH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleAudioSwitch* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleAudioSwitch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEAUDIOSWITCH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
