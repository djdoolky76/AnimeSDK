#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureSkillType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureByPlayerCurrentSkillType; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVENTUREBYPLAYERCURRENTSKILLTYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D393C40)
#define RPG_GAMECORE_ADVENTUREBYPLAYERCURRENTSKILLTYPE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D393E00)
#define RPG_GAMECORE_ADVENTUREBYPLAYERCURRENTSKILLTYPE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D393DD0)
#define RPG_GAMECORE_ADVENTUREBYPLAYERCURRENTSKILLTYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D393C50)
#define RPG_GAMECORE_ADVENTUREBYPLAYERCURRENTSKILLTYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D393C10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByPlayerCurrentSkillType_TypeDefinitionIndex = 21765;

	class AdventureByPlayerCurrentSkillType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::AdventureSkillType SkillType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYPLAYERCURRENTSKILLTYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureByPlayerCurrentSkillType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureByPlayerCurrentSkillType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYPLAYERCURRENTSKILLTYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureByPlayerCurrentSkillType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureByPlayerCurrentSkillType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYPLAYERCURRENTSKILLTYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByPlayerCurrentSkillType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByPlayerCurrentSkillType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYPLAYERCURRENTSKILLTYPE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByPlayerCurrentSkillType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByPlayerCurrentSkillType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYPLAYERCURRENTSKILLTYPE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
