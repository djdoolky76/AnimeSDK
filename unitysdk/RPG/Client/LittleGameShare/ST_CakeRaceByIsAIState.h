#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGamePredicateConfig.h"
#include "unitysdk/RPG/GameCore/CakeRaceAIState.h"
class FCOEMCEDLNL;
namespace RPG::Client::LittleGameShare { class ST_CakeRaceByIsAIState; }
namespace SimpleJSON { class JSONNode; }

#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYISAISTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D325620)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYISAISTATE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D325830)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYISAISTATE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D3257E0)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYISAISTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D325630)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYISAISTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3255D0)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ST_CakeRaceByIsAIState_TypeDefinitionIndex = 10337;

	class ST_CakeRaceByIsAIState : public ::RPG::Client::LittleGameShare::LittleGamePredicateConfig
	{
	public:
		::RPG::GameCore::CakeRaceAIState State; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYISAISTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsAIState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsAIState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYISAISTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsAIState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsAIState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYISAISTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsAIState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsAIState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYISAISTATE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsAIState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsAIState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYISAISTATE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
