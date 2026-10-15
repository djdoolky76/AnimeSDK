#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGameSTTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client::LittleGameShare { class ST_Main_CakeRaceUseItemDecision; }

#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEUSEITEMDECISION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3279E0)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEUSEITEMDECISION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3279F0)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEUSEITEMDECISION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3278F0)

namespace RPG::Client::LittleGameShare
{
	class ST_Main_CakeRaceUseItemDecision : public ::RPG::Client::LittleGameShare::LittleGameSTTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEUSEITEMDECISION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceUseItemDecision* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceUseItemDecision*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEUSEITEMDECISION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceUseItemDecision* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceUseItemDecision*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEUSEITEMDECISION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
