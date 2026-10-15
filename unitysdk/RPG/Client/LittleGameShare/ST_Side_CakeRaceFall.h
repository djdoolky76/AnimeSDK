#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGameSTTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client::LittleGameShare { class ST_Side_CakeRaceFall; }

#define RPG_CLIENT_LITTLEGAMESHARE_ST_SIDE_CAKERACEFALL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3281D0)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_SIDE_CAKERACEFALL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3281E0)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_SIDE_CAKERACEFALL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D328180)

namespace RPG::Client::LittleGameShare
{
	class ST_Side_CakeRaceFall : public ::RPG::Client::LittleGameShare::LittleGameSTTaskConfig
	{
	public:
		::System::UInt32 Duration; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_SIDE_CAKERACEFALL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::LittleGameShare::ST_Side_CakeRaceFall* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::LittleGameShare::ST_Side_CakeRaceFall*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_SIDE_CAKERACEFALL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::LittleGameShare::ST_Side_CakeRaceFall* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::LittleGameShare::ST_Side_CakeRaceFall*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_SIDE_CAKERACEFALL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
