#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client { class ByIsPlanetFesBusinessDayFinished; }
namespace SimpleJSON { class JSONNode; }

#define RPG_CLIENT_BYISPLANETFESBUSINESSDAYFINISHED_CTOR_OFFSET UNITYSDK_OFFSET(0x1D31E4B0)
#define RPG_CLIENT_BYISPLANETFESBUSINESSDAYFINISHED_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D31E630)
#define RPG_CLIENT_BYISPLANETFESBUSINESSDAYFINISHED_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D31E600)
#define RPG_CLIENT_BYISPLANETFESBUSINESSDAYFINISHED_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D31E4C0)
#define RPG_CLIENT_BYISPLANETFESBUSINESSDAYFINISHED_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D31E480)

namespace RPG::Client
{
	inline static constexpr unsigned int ByIsPlanetFesBusinessDayFinished_TypeDefinitionIndex = 10275;

	class ByIsPlanetFesBusinessDayFinished : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYISPLANETFESBUSINESSDAYFINISHED_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::ByIsPlanetFesBusinessDayFinished* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::ByIsPlanetFesBusinessDayFinished*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYISPLANETFESBUSINESSDAYFINISHED_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::ByIsPlanetFesBusinessDayFinished* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::ByIsPlanetFesBusinessDayFinished*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYISPLANETFESBUSINESSDAYFINISHED_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByIsPlanetFesBusinessDayFinished* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByIsPlanetFesBusinessDayFinished*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYISPLANETFESBUSINESSDAYFINISHED_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByIsPlanetFesBusinessDayFinished* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByIsPlanetFesBusinessDayFinished*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYISPLANETFESBUSINESSDAYFINISHED_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
