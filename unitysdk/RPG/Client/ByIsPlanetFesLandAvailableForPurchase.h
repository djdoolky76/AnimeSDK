#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client { class ByIsPlanetFesLandAvailableForPurchase; }
namespace SimpleJSON { class JSONNode; }

#define RPG_CLIENT_BYISPLANETFESLANDAVAILABLEFORPURCHASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D31E970)
#define RPG_CLIENT_BYISPLANETFESLANDAVAILABLEFORPURCHASE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D31EAF0)
#define RPG_CLIENT_BYISPLANETFESLANDAVAILABLEFORPURCHASE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D31EAC0)
#define RPG_CLIENT_BYISPLANETFESLANDAVAILABLEFORPURCHASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D31E980)
#define RPG_CLIENT_BYISPLANETFESLANDAVAILABLEFORPURCHASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D31E940)

namespace RPG::Client
{
	class ByIsPlanetFesLandAvailableForPurchase : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYISPLANETFESLANDAVAILABLEFORPURCHASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::ByIsPlanetFesLandAvailableForPurchase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::ByIsPlanetFesLandAvailableForPurchase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYISPLANETFESLANDAVAILABLEFORPURCHASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::ByIsPlanetFesLandAvailableForPurchase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::ByIsPlanetFesLandAvailableForPurchase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYISPLANETFESLANDAVAILABLEFORPURCHASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByIsPlanetFesLandAvailableForPurchase* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByIsPlanetFesLandAvailableForPurchase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYISPLANETFESLANDAVAILABLEFORPURCHASE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::Client::ByIsPlanetFesLandAvailableForPurchase* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ByIsPlanetFesLandAvailableForPurchase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BYISPLANETFESLANDAVAILABLEFORPURCHASE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
