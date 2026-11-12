#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureAnimStateType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByAdvCharacterLogicState; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYADVCHARACTERLOGICSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E690280)
#define RPG_GAMECORE_BYADVCHARACTERLOGICSTATE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E690550)
#define RPG_GAMECORE_BYADVCHARACTERLOGICSTATE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E6904C0)
#define RPG_GAMECORE_BYADVCHARACTERLOGICSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E6902F0)
#define RPG_GAMECORE_BYADVCHARACTERLOGICSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E6901F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByAdvCharacterLogicState_TypeDefinitionIndex = 20527;

	class ByAdvCharacterLogicState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::AdventureAnimStateType Type; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYADVCHARACTERLOGICSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByAdvCharacterLogicState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByAdvCharacterLogicState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYADVCHARACTERLOGICSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByAdvCharacterLogicState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByAdvCharacterLogicState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYADVCHARACTERLOGICSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAdvCharacterLogicState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAdvCharacterLogicState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYADVCHARACTERLOGICSTATE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByAdvCharacterLogicState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByAdvCharacterLogicState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYADVCHARACTERLOGICSTATE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
