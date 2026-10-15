#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGameSTTaskConfig.h"
#include "unitysdk/RPG/GameCore/CakeRaceAIState.h"
class FCOEMCEDLNL;
namespace RPG::Client::LittleGameShare { class ST_Side_CakeRaceSetAIState; }

#define RPG_CLIENT_LITTLEGAMESHARE_ST_SIDE_CAKERACESETAISTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D328330)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_SIDE_CAKERACESETAISTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D328340)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_SIDE_CAKERACESETAISTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3282E0)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ST_Side_CakeRaceSetAIState_TypeDefinitionIndex = 10334;

	class ST_Side_CakeRaceSetAIState : public ::RPG::Client::LittleGameShare::LittleGameSTTaskConfig
	{
	public:
		::RPG::GameCore::CakeRaceAIState State; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_SIDE_CAKERACESETAISTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::LittleGameShare::ST_Side_CakeRaceSetAIState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::LittleGameShare::ST_Side_CakeRaceSetAIState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_SIDE_CAKERACESETAISTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::LittleGameShare::ST_Side_CakeRaceSetAIState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::LittleGameShare::ST_Side_CakeRaceSetAIState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_SIDE_CAKERACESETAISTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
