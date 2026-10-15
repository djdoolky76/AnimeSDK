#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TimeRelayFlameSetSpecialFinalLevel; }

#define RPG_GAMECORE_TIMERELAYFLAMESETSPECIALFINALLEVEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB586B0)
#define RPG_GAMECORE_TIMERELAYFLAMESETSPECIALFINALLEVEL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB58750)
#define RPG_GAMECORE_TIMERELAYFLAMESETSPECIALFINALLEVEL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB585F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRelayFlameSetSpecialFinalLevel_TypeDefinitionIndex = 22040;

	class TimeRelayFlameSetSpecialFinalLevel : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ItemID; // 0x18
		::RPG::GameCore::DynamicFloat* ItemNumPerStep; // 0x20
		::RPG::GameCore::DynamicFloat* MaxStep; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMERELAYFLAMESETSPECIALFINALLEVEL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TimeRelayFlameSetSpecialFinalLevel* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TimeRelayFlameSetSpecialFinalLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMERELAYFLAMESETSPECIALFINALLEVEL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TimeRelayFlameSetSpecialFinalLevel* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TimeRelayFlameSetSpecialFinalLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMERELAYFLAMESETSPECIALFINALLEVEL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
