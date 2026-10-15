#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGameSTTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client::LittleGameShare { class ST_Main_CakeRaceSelectSkillDecision; }

#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACESELECTSKILLDECISION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D327290)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACESELECTSKILLDECISION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3272A0)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACESELECTSKILLDECISION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3271A0)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ST_Main_CakeRaceSelectSkillDecision_TypeDefinitionIndex = 10341;

	class ST_Main_CakeRaceSelectSkillDecision : public ::RPG::Client::LittleGameShare::LittleGameSTTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACESELECTSKILLDECISION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceSelectSkillDecision* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceSelectSkillDecision*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACESELECTSKILLDECISION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceSelectSkillDecision* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceSelectSkillDecision*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACESELECTSKILLDECISION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
