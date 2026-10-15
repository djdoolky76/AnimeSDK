#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenGameEnergyType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareHipplenEnergy; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREHIPPLENENERGY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D488B40)
#define RPG_GAMECORE_BYCOMPAREHIPPLENENERGY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D488D30)
#define RPG_GAMECORE_BYCOMPAREHIPPLENENERGY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D488D00)
#define RPG_GAMECORE_BYCOMPAREHIPPLENENERGY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D488B50)
#define RPG_GAMECORE_BYCOMPAREHIPPLENENERGY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D488B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareHipplenEnergy_TypeDefinitionIndex = 21324;

	class ByCompareHipplenEnergy : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::HipplenGameEnergyType ExpectedType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHIPPLENENERGY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareHipplenEnergy* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareHipplenEnergy*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHIPPLENENERGY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareHipplenEnergy* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareHipplenEnergy*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHIPPLENENERGY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareHipplenEnergy* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareHipplenEnergy*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHIPPLENENERGY_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareHipplenEnergy* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareHipplenEnergy*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHIPPLENENERGY_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
