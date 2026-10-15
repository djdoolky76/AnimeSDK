#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyGridMove; }

#define RPG_GAMECORE_TRAINPARTYGRIDMOVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC31790)
#define RPG_GAMECORE_TRAINPARTYGRIDMOVE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC317A0)
#define RPG_GAMECORE_TRAINPARTYGRIDMOVE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC316D0)

namespace RPG::GameCore
{
	class TrainPartyGridMove : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYGRIDMOVE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyGridMove* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyGridMove*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYGRIDMOVE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyGridMove* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyGridMove*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYGRIDMOVE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
