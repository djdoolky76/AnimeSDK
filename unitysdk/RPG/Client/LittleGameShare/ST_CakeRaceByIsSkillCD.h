#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGamePredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client::LittleGameShare { class ST_CakeRaceByIsSkillCD; }
namespace SimpleJSON { class JSONNode; }

#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYISSKILLCD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D325C90)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYISSKILLCD_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D325E30)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYISSKILLCD_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D325DE0)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYISSKILLCD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D325CA0)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYISSKILLCD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D325C40)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ST_CakeRaceByIsSkillCD_TypeDefinitionIndex = 10346;

	class ST_CakeRaceByIsSkillCD : public ::RPG::Client::LittleGameShare::LittleGamePredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYISSKILLCD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsSkillCD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsSkillCD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYISSKILLCD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsSkillCD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsSkillCD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYISSKILLCD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsSkillCD* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsSkillCD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYISSKILLCD_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsSkillCD* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsSkillCD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYISSKILLCD_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
