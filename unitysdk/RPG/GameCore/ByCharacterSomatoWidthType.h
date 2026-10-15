#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterSomatoWidthType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCharacterSomatoWidthType; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHARACTERSOMATOWIDTHTYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D48A1F0)
#define RPG_GAMECORE_BYCHARACTERSOMATOWIDTHTYPE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D48A400)
#define RPG_GAMECORE_BYCHARACTERSOMATOWIDTHTYPE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D48A3D0)
#define RPG_GAMECORE_BYCHARACTERSOMATOWIDTHTYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D48A200)
#define RPG_GAMECORE_BYCHARACTERSOMATOWIDTHTYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D48A1C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCharacterSomatoWidthType_TypeDefinitionIndex = 23705;

	class ByCharacterSomatoWidthType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::CharacterSomatoWidthType SomatoWidthType; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHARACTERSOMATOWIDTHTYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCharacterSomatoWidthType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCharacterSomatoWidthType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHARACTERSOMATOWIDTHTYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCharacterSomatoWidthType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCharacterSomatoWidthType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHARACTERSOMATOWIDTHTYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCharacterSomatoWidthType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCharacterSomatoWidthType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHARACTERSOMATOWIDTHTYPE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCharacterSomatoWidthType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCharacterSomatoWidthType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHARACTERSOMATOWIDTHTYPE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
