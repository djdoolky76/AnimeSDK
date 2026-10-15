#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGameSTTaskConfig.h"
#include "unitysdk/RPG/Client/LittleGameShare/ST_TargetCatType.h"
class FCOEMCEDLNL;
namespace RPG::Client::LittleGameShare { class ST_Main_CakeRaceUseFoodItemDecision; }

#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEUSEFOODITEMDECISION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3276B0)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEUSEFOODITEMDECISION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3276C0)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEUSEFOODITEMDECISION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D327660)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ST_Main_CakeRaceUseFoodItemDecision_TypeDefinitionIndex = 10344;

	class ST_Main_CakeRaceUseFoodItemDecision : public ::RPG::Client::LittleGameShare::LittleGameSTTaskConfig
	{
	public:
		::RPG::Client::LittleGameShare::ST_TargetCatType TargetType; // 0x18
		::System::Int32 TargetParam; // 0x1C
		::System::UInt32 ForwardRange; // 0x20
		::System::UInt32 SideRange; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEUSEFOODITEMDECISION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceUseFoodItemDecision* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceUseFoodItemDecision*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEUSEFOODITEMDECISION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceUseFoodItemDecision* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceUseFoodItemDecision*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEUSEFOODITEMDECISION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
