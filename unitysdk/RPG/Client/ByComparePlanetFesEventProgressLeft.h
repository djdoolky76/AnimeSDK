#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client { class ByComparePlanetFesEventProgressLeft; }
namespace SimpleJSON { class JSONNode; }

#define RPG_CLIENT_BYCOMPAREPLANETFESEVENTPROGRESSLEFT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D31DEC0)
#define RPG_CLIENT_BYCOMPAREPLANETFESEVENTPROGRESSLEFT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D31E070)
#define RPG_CLIENT_BYCOMPAREPLANETFESEVENTPROGRESSLEFT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D31E040)
#define RPG_CLIENT_BYCOMPAREPLANETFESEVENTPROGRESSLEFT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D31DED0)
#define RPG_CLIENT_BYCOMPAREPLANETFESEVENTPROGRESSLEFT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D31DE90)

namespace RPG::Client
{
	class ByComparePlanetFesEventProgressLeft : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 LeftProgress; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCOMPAREPLANETFESEVENTPROGRESSLEFT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::ByComparePlanetFesEventProgressLeft* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::ByComparePlanetFesEventProgressLeft*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCOMPAREPLANETFESEVENTPROGRESSLEFT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::ByComparePlanetFesEventProgressLeft* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::ByComparePlanetFesEventProgressLeft*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCOMPAREPLANETFESEVENTPROGRESSLEFT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByComparePlanetFesEventProgressLeft* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByComparePlanetFesEventProgressLeft*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCOMPAREPLANETFESEVENTPROGRESSLEFT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByComparePlanetFesEventProgressLeft* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByComparePlanetFesEventProgressLeft*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYCOMPAREPLANETFESEVENTPROGRESSLEFT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
