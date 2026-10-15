#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsElfRestaurantRecipeCooked; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISELFRESTAURANTRECIPECOOKED_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4E3710)
#define RPG_GAMECORE_BYISELFRESTAURANTRECIPECOOKED_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4E38C0)
#define RPG_GAMECORE_BYISELFRESTAURANTRECIPECOOKED_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4E3890)
#define RPG_GAMECORE_BYISELFRESTAURANTRECIPECOOKED_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4E3720)
#define RPG_GAMECORE_BYISELFRESTAURANTRECIPECOOKED_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4E36E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsElfRestaurantRecipeCooked_TypeDefinitionIndex = 24369;

	class ByIsElfRestaurantRecipeCooked : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 RecipeID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISELFRESTAURANTRECIPECOOKED_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsElfRestaurantRecipeCooked* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsElfRestaurantRecipeCooked*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISELFRESTAURANTRECIPECOOKED_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsElfRestaurantRecipeCooked* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsElfRestaurantRecipeCooked*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISELFRESTAURANTRECIPECOOKED_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsElfRestaurantRecipeCooked* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsElfRestaurantRecipeCooked*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISELFRESTAURANTRECIPECOOKED_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsElfRestaurantRecipeCooked* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsElfRestaurantRecipeCooked*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISELFRESTAURANTRECIPECOOKED_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
