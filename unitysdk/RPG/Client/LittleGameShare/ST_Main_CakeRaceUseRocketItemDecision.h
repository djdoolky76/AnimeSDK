#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGameSTTaskConfig.h"
#include "unitysdk/RPG/Client/LittleGameShare/ST_TargetCatType.h"
class FCOEMCEDLNL;
namespace RPG::Client::LittleGameShare { class ST_Main_CakeRaceUseRocketItemDecision; }

#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEUSEROCKETITEMDECISION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2FA030)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEUSEROCKETITEMDECISION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2FA040)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEUSEROCKETITEMDECISION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2F9FE0)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ST_Main_CakeRaceUseRocketItemDecision_TypeDefinitionIndex = 10345;

	class ST_Main_CakeRaceUseRocketItemDecision : public ::RPG::Client::LittleGameShare::LittleGameSTTaskConfig
	{
	public:
		::RPG::Client::LittleGameShare::ST_TargetCatType TargetType; // 0x18
		::System::Int32 TargetParam; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEUSEROCKETITEMDECISION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceUseRocketItemDecision* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceUseRocketItemDecision*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEUSEROCKETITEMDECISION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceUseRocketItemDecision* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceUseRocketItemDecision*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEUSEROCKETITEMDECISION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
