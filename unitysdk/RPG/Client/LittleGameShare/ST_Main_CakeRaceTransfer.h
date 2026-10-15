#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGameSTTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client::LittleGameShare { class ST_Main_CakeRaceTransfer; }

#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACETRANSFER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3273B0)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACETRANSFER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3273C0)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACETRANSFER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D327360)

namespace RPG::Client::LittleGameShare
{
	class ST_Main_CakeRaceTransfer : public ::RPG::Client::LittleGameShare::LittleGameSTTaskConfig
	{
	public:
		::System::UInt32 Duration; // 0x18
		::System::UInt32 FallGridY; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACETRANSFER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceTransfer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceTransfer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACETRANSFER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceTransfer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceTransfer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACETRANSFER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
