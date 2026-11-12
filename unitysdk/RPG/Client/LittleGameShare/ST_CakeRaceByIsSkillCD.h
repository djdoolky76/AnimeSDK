#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGamePredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client::LittleGameShare { class ST_CakeRaceByIsSkillCD; }
namespace SimpleJSON { class JSONNode; }

#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYISSKILLCD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E530DF0)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYISSKILLCD_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E536AE0)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYISSKILLCD_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E531D60)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYISSKILLCD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E530E00)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYISSKILLCD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E536A90)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ST_CakeRaceByIsSkillCD_TypeDefinitionIndex = 10356;

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
