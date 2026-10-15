#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PingPongLevelAddPointCmptConfig; }

#define RPG_GAMECORE_PINGPONGLEVELADDPOINTCMPTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D917F50)
#define RPG_GAMECORE_PINGPONGLEVELADDPOINTCMPTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D917F70)
#define RPG_GAMECORE_PINGPONGLEVELADDPOINTCMPTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D917EF0)

namespace RPG::GameCore
{
	class PingPongLevelAddPointCmptConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::UInt32 PointNun; // 0x10
		::System::Boolean AllowHP; // 0x14
		::System::Boolean AllowSP; // 0x15
		::System::Boolean AllowMP; // 0x16
		::System::Boolean AllowRacketSpeed; // 0x17
		::System::Boolean AllowRacketLength; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGLEVELADDPOINTCMPTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PingPongLevelAddPointCmptConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PingPongLevelAddPointCmptConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGLEVELADDPOINTCMPTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PingPongLevelAddPointCmptConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PingPongLevelAddPointCmptConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGLEVELADDPOINTCMPTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
