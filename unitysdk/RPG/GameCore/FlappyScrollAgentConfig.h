#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FlappyScrollAgentConfig; }

#define RPG_GAMECORE_FLAPPYSCROLLAGENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E3A60)
#define RPG_GAMECORE_FLAPPYSCROLLAGENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6E3A70)
#define RPG_GAMECORE_FLAPPYSCROLLAGENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6E3A30)

namespace RPG::GameCore
{
	class FlappyScrollAgentConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Single AutoScrollSpeedInit; // 0x10
		::System::Single MaxScrollSpeed; // 0x14
		::System::Single FallGravity; // 0x18
		::System::Single JumpSpeed; // 0x1C
		::System::Single SpeedUp; // 0x20
		::System::Single JumpTargetScrollValue; // 0x24
		::System::Single JumpTriggerScrollValue; // 0x28
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Single>* LevelUpTimes; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLAPPYSCROLLAGENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FlappyScrollAgentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FlappyScrollAgentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLAPPYSCROLLAGENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FlappyScrollAgentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FlappyScrollAgentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLAPPYSCROLLAGENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
