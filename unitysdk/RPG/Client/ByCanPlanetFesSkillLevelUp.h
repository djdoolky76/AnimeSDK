#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client { class ByCanPlanetFesSkillLevelUp; }
namespace SimpleJSON { class JSONNode; }

#define RPG_CLIENT_BYCANPLANETFESSKILLLEVELUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E52C4B0)
#define RPG_CLIENT_BYCANPLANETFESSKILLLEVELUP_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E52C630)
#define RPG_CLIENT_BYCANPLANETFESSKILLLEVELUP_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E52C600)
#define RPG_CLIENT_BYCANPLANETFESSKILLLEVELUP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E52C4C0)
#define RPG_CLIENT_BYCANPLANETFESSKILLLEVELUP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E52C480)

namespace RPG::Client
{
	inline static constexpr unsigned int ByCanPlanetFesSkillLevelUp_TypeDefinitionIndex = 10283;

	class ByCanPlanetFesSkillLevelUp : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCANPLANETFESSKILLLEVELUP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::ByCanPlanetFesSkillLevelUp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::ByCanPlanetFesSkillLevelUp*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCANPLANETFESSKILLLEVELUP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::ByCanPlanetFesSkillLevelUp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::ByCanPlanetFesSkillLevelUp*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCANPLANETFESSKILLLEVELUP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByCanPlanetFesSkillLevelUp* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByCanPlanetFesSkillLevelUp*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCANPLANETFESSKILLLEVELUP_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByCanPlanetFesSkillLevelUp* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByCanPlanetFesSkillLevelUp*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCANPLANETFESSKILLLEVELUP_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
