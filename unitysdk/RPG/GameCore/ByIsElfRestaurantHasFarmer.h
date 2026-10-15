#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsElfRestaurantHasFarmer; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISELFRESTAURANTHASFARMER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D510B90)
#define RPG_GAMECORE_BYISELFRESTAURANTHASFARMER_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D510D40)
#define RPG_GAMECORE_BYISELFRESTAURANTHASFARMER_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D510D10)
#define RPG_GAMECORE_BYISELFRESTAURANTHASFARMER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D510BA0)
#define RPG_GAMECORE_BYISELFRESTAURANTHASFARMER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D510B60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsElfRestaurantHasFarmer_TypeDefinitionIndex = 24370;

	class ByIsElfRestaurantHasFarmer : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 FarmID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISELFRESTAURANTHASFARMER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsElfRestaurantHasFarmer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsElfRestaurantHasFarmer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISELFRESTAURANTHASFARMER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsElfRestaurantHasFarmer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsElfRestaurantHasFarmer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISELFRESTAURANTHASFARMER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsElfRestaurantHasFarmer* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsElfRestaurantHasFarmer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISELFRESTAURANTHASFARMER_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsElfRestaurantHasFarmer* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsElfRestaurantHasFarmer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISELFRESTAURANTHASFARMER_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
