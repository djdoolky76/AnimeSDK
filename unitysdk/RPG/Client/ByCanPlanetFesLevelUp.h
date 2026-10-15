#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client { class ByCanPlanetFesLevelUp; }
namespace SimpleJSON { class JSONNode; }

#define RPG_CLIENT_BYCANPLANETFESLEVELUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D31CDD0)
#define RPG_CLIENT_BYCANPLANETFESLEVELUP_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D31CF50)
#define RPG_CLIENT_BYCANPLANETFESLEVELUP_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D31CF20)
#define RPG_CLIENT_BYCANPLANETFESLEVELUP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D31CDE0)
#define RPG_CLIENT_BYCANPLANETFESLEVELUP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D31CDA0)

namespace RPG::Client
{
	inline static constexpr unsigned int ByCanPlanetFesLevelUp_TypeDefinitionIndex = 10272;

	class ByCanPlanetFesLevelUp : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCANPLANETFESLEVELUP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::ByCanPlanetFesLevelUp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::ByCanPlanetFesLevelUp*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCANPLANETFESLEVELUP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::ByCanPlanetFesLevelUp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::ByCanPlanetFesLevelUp*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCANPLANETFESLEVELUP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByCanPlanetFesLevelUp* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByCanPlanetFesLevelUp*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCANPLANETFESLEVELUP_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByCanPlanetFesLevelUp* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByCanPlanetFesLevelUp*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCANPLANETFESLEVELUP_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
