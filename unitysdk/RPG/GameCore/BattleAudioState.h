#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleAudioState; }
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define RPG_GAMECORE_BATTLEAUDIOSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4527D0)
#define RPG_GAMECORE_BATTLEAUDIOSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4527E0)
#define RPG_GAMECORE_BATTLEAUDIOSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4527A0)

namespace RPG::GameCore
{
	class BattleAudioState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* GroupName; // 0x18
		::RPG::GameCore::DynamicString* StateName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEAUDIOSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleAudioState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleAudioState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEAUDIOSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleAudioState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleAudioState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEAUDIOSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
