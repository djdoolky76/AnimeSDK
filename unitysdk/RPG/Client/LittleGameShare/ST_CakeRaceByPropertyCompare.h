#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGamePredicateConfig.h"
#include "unitysdk/RPG/GameCore/CakeRaceProperty.h"
#include "unitysdk/RPG/GameCore/CakeRacePropertyCompare.h"
class FCOEMCEDLNL;
namespace RPG::Client::LittleGameShare { class ST_CakeRaceByPropertyCompare; }
namespace SimpleJSON { class JSONNode; }

#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYPROPERTYCOMPARE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D326190)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYPROPERTYCOMPARE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D326450)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYPROPERTYCOMPARE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D326400)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYPROPERTYCOMPARE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3261A0)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYPROPERTYCOMPARE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D326140)

namespace RPG::Client::LittleGameShare
{
	class ST_CakeRaceByPropertyCompare : public ::RPG::Client::LittleGameShare::LittleGamePredicateConfig
	{
	public:
		::RPG::GameCore::CakeRaceProperty Property; // 0x20
		::RPG::GameCore::CakeRacePropertyCompare Compare; // 0x24
		::System::Int32 Value; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYPROPERTYCOMPARE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByPropertyCompare* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::LittleGameShare::ST_CakeRaceByPropertyCompare*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYPROPERTYCOMPARE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByPropertyCompare* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::LittleGameShare::ST_CakeRaceByPropertyCompare*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYPROPERTYCOMPARE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByPropertyCompare* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByPropertyCompare*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYPROPERTYCOMPARE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByPropertyCompare* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::LittleGameShare::ST_CakeRaceByPropertyCompare*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYPROPERTYCOMPARE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
