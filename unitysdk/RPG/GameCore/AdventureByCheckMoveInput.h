#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureByCheckMoveInput; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVENTUREBYCHECKMOVEINPUT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B78B0)
#define RPG_GAMECORE_ADVENTUREBYCHECKMOVEINPUT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D3B7A30)
#define RPG_GAMECORE_ADVENTUREBYCHECKMOVEINPUT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D3B7A00)
#define RPG_GAMECORE_ADVENTUREBYCHECKMOVEINPUT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3B78C0)
#define RPG_GAMECORE_ADVENTUREBYCHECKMOVEINPUT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3B7880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByCheckMoveInput_TypeDefinitionIndex = 20241;

	class AdventureByCheckMoveInput : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYCHECKMOVEINPUT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureByCheckMoveInput* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureByCheckMoveInput*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYCHECKMOVEINPUT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureByCheckMoveInput* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureByCheckMoveInput*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYCHECKMOVEINPUT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByCheckMoveInput* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByCheckMoveInput*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYCHECKMOVEINPUT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByCheckMoveInput* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByCheckMoveInput*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYCHECKMOVEINPUT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
