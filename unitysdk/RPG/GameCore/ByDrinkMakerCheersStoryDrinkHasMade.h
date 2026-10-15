#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByDrinkMakerCheersStoryDrinkHasMade; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYDRINKMAKERCHEERSSTORYDRINKHASMADE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4C2710)
#define RPG_GAMECORE_BYDRINKMAKERCHEERSSTORYDRINKHASMADE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4C28F0)
#define RPG_GAMECORE_BYDRINKMAKERCHEERSSTORYDRINKHASMADE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4C28C0)
#define RPG_GAMECORE_BYDRINKMAKERCHEERSSTORYDRINKHASMADE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4C2720)
#define RPG_GAMECORE_BYDRINKMAKERCHEERSSTORYDRINKHASMADE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4C26E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByDrinkMakerCheersStoryDrinkHasMade_TypeDefinitionIndex = 21717;

	class ByDrinkMakerCheersStoryDrinkHasMade : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean IsFirstDrinkInGroup; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDRINKMAKERCHEERSSTORYDRINKHASMADE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByDrinkMakerCheersStoryDrinkHasMade* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByDrinkMakerCheersStoryDrinkHasMade*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDRINKMAKERCHEERSSTORYDRINKHASMADE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByDrinkMakerCheersStoryDrinkHasMade* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByDrinkMakerCheersStoryDrinkHasMade*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDRINKMAKERCHEERSSTORYDRINKHASMADE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDrinkMakerCheersStoryDrinkHasMade* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDrinkMakerCheersStoryDrinkHasMade*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDRINKMAKERCHEERSSTORYDRINKHASMADE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDrinkMakerCheersStoryDrinkHasMade* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDrinkMakerCheersStoryDrinkHasMade*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDRINKMAKERCHEERSSTORYDRINKHASMADE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
