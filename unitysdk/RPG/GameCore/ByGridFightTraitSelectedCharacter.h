#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByGridFightTraitSelectedCharacter; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYGRIDFIGHTTRAITSELECTEDCHARACTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4F6550)
#define RPG_GAMECORE_BYGRIDFIGHTTRAITSELECTEDCHARACTER_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4F6760)
#define RPG_GAMECORE_BYGRIDFIGHTTRAITSELECTEDCHARACTER_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4F6730)
#define RPG_GAMECORE_BYGRIDFIGHTTRAITSELECTEDCHARACTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4F6560)
#define RPG_GAMECORE_BYGRIDFIGHTTRAITSELECTEDCHARACTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4F6520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByGridFightTraitSelectedCharacter_TypeDefinitionIndex = 22521;

	class ByGridFightTraitSelectedCharacter : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* CharacterID; // 0x20
		::RPG::GameCore::DynamicString* TeamTrait; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTTRAITSELECTEDCHARACTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByGridFightTraitSelectedCharacter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByGridFightTraitSelectedCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTTRAITSELECTEDCHARACTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByGridFightTraitSelectedCharacter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByGridFightTraitSelectedCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTTRAITSELECTEDCHARACTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGridFightTraitSelectedCharacter* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGridFightTraitSelectedCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTTRAITSELECTEDCHARACTER_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGridFightTraitSelectedCharacter* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGridFightTraitSelectedCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTTRAITSELECTEDCHARACTER_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
