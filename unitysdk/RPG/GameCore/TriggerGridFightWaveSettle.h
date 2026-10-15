#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightTriggerSettleType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TriggerGridFightWaveSettle; }

#define RPG_GAMECORE_TRIGGERGRIDFIGHTWAVESETTLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC532E0)
#define RPG_GAMECORE_TRIGGERGRIDFIGHTWAVESETTLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC53350)
#define RPG_GAMECORE_TRIGGERGRIDFIGHTWAVESETTLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC53250)

namespace RPG::GameCore
{
	class TriggerGridFightWaveSettle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::GridFightTriggerSettleType TriggerType; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* ParamValue; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERGRIDFIGHTWAVESETTLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerGridFightWaveSettle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerGridFightWaveSettle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERGRIDFIGHTWAVESETTLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerGridFightWaveSettle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerGridFightWaveSettle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERGRIDFIGHTWAVESETTLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
