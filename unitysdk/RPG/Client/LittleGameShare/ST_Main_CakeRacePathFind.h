#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGameSTTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client::LittleGameShare { class ST_Main_CakeRacePathFind; }

#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEPATHFIND_CTOR_OFFSET UNITYSDK_OFFSET(0x1D326B10)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEPATHFIND_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D326B20)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEPATHFIND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D326AC0)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ST_Main_CakeRacePathFind_TypeDefinitionIndex = 10330;

	class ST_Main_CakeRacePathFind : public ::RPG::Client::LittleGameShare::LittleGameSTTaskConfig
	{
	public:
		::System::UInt32 MinDuration; // 0x18
		::System::UInt32 MaxDuration; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEPATHFIND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRacePathFind* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::LittleGameShare::ST_Main_CakeRacePathFind*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEPATHFIND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRacePathFind* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::LittleGameShare::ST_Main_CakeRacePathFind*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEPATHFIND_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
