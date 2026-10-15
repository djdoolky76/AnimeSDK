#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCheckTrialCharacterDie; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKTRIALCHARACTERDIE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D497710)
#define RPG_GAMECORE_BYCHECKTRIALCHARACTERDIE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4978C0)
#define RPG_GAMECORE_BYCHECKTRIALCHARACTERDIE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D497890)
#define RPG_GAMECORE_BYCHECKTRIALCHARACTERDIE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D497720)
#define RPG_GAMECORE_BYCHECKTRIALCHARACTERDIE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4976E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckTrialCharacterDie_TypeDefinitionIndex = 23440;

	class ByCheckTrialCharacterDie : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 CharacterID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTRIALCHARACTERDIE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckTrialCharacterDie* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckTrialCharacterDie*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTRIALCHARACTERDIE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckTrialCharacterDie* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckTrialCharacterDie*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTRIALCHARACTERDIE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckTrialCharacterDie* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckTrialCharacterDie*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTRIALCHARACTERDIE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckTrialCharacterDie* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckTrialCharacterDie*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTRIALCHARACTERDIE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
