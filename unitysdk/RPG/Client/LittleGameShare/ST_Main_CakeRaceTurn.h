#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGameSTTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client::LittleGameShare { class ST_Main_CakeRaceTurn; }

#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACETURN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D327550)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACETURN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D327560)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACETURN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D327500)

namespace RPG::Client::LittleGameShare
{
	class ST_Main_CakeRaceTurn : public ::RPG::Client::LittleGameShare::LittleGameSTTaskConfig
	{
	public:
		::System::UInt32 Duration; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACETURN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceTurn* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceTurn*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACETURN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceTurn* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceTurn*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACETURN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
