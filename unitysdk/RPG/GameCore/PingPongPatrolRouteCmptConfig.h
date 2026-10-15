#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PingPongGridIndex; }
namespace RPG::GameCore { class PingPongPatrolRouteCmptConfig; }

#define RPG_GAMECORE_PINGPONGPATROLROUTECMPTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D918390)
#define RPG_GAMECORE_PINGPONGPATROLROUTECMPTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9183A0)
#define RPG_GAMECORE_PINGPONGPATROLROUTECMPTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D918340)

namespace RPG::GameCore
{
	class PingPongPatrolRouteCmptConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PingPongGridIndex*>* PatrolPointList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGPATROLROUTECMPTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PingPongPatrolRouteCmptConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PingPongPatrolRouteCmptConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGPATROLROUTECMPTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PingPongPatrolRouteCmptConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PingPongPatrolRouteCmptConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGPATROLROUTECMPTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
