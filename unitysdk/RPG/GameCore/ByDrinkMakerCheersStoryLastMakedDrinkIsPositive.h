#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByDrinkMakerCheersStoryLastMakedDrinkIsPositive; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYDRINKMAKERCHEERSSTORYLASTMAKEDDRINKISPOSITIVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4C2DA0)
#define RPG_GAMECORE_BYDRINKMAKERCHEERSSTORYLASTMAKEDDRINKISPOSITIVE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4C2F20)
#define RPG_GAMECORE_BYDRINKMAKERCHEERSSTORYLASTMAKEDDRINKISPOSITIVE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4C2EF0)
#define RPG_GAMECORE_BYDRINKMAKERCHEERSSTORYLASTMAKEDDRINKISPOSITIVE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4C2DB0)
#define RPG_GAMECORE_BYDRINKMAKERCHEERSSTORYLASTMAKEDDRINKISPOSITIVE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4C2D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByDrinkMakerCheersStoryLastMakedDrinkIsPositive_TypeDefinitionIndex = 21716;

	class ByDrinkMakerCheersStoryLastMakedDrinkIsPositive : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDRINKMAKERCHEERSSTORYLASTMAKEDDRINKISPOSITIVE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByDrinkMakerCheersStoryLastMakedDrinkIsPositive* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByDrinkMakerCheersStoryLastMakedDrinkIsPositive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDRINKMAKERCHEERSSTORYLASTMAKEDDRINKISPOSITIVE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByDrinkMakerCheersStoryLastMakedDrinkIsPositive* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByDrinkMakerCheersStoryLastMakedDrinkIsPositive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDRINKMAKERCHEERSSTORYLASTMAKEDDRINKISPOSITIVE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDrinkMakerCheersStoryLastMakedDrinkIsPositive* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDrinkMakerCheersStoryLastMakedDrinkIsPositive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDRINKMAKERCHEERSSTORYLASTMAKEDDRINKISPOSITIVE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDrinkMakerCheersStoryLastMakedDrinkIsPositive* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDrinkMakerCheersStoryLastMakedDrinkIsPositive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDRINKMAKERCHEERSSTORYLASTMAKEDDRINKISPOSITIVE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
