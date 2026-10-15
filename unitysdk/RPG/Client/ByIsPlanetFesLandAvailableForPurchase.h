#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client { class ByIsPlanetFesLandAvailableForPurchase; }
namespace SimpleJSON { class JSONNode; }

#define RPG_CLIENT_BYISPLANETFESLANDAVAILABLEFORPURCHASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2F0EA0)
#define RPG_CLIENT_BYISPLANETFESLANDAVAILABLEFORPURCHASE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D2F1020)
#define RPG_CLIENT_BYISPLANETFESLANDAVAILABLEFORPURCHASE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D2F0FF0)
#define RPG_CLIENT_BYISPLANETFESLANDAVAILABLEFORPURCHASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2F0EB0)
#define RPG_CLIENT_BYISPLANETFESLANDAVAILABLEFORPURCHASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2F0E70)

namespace RPG::Client
{
	inline static constexpr unsigned int ByIsPlanetFesLandAvailableForPurchase_TypeDefinitionIndex = 10271;

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
