#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByContainsCharacterState; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYCONTAINSCHARACTERSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4E8320)
#define RPG_GAMECORE_BYCONTAINSCHARACTERSTATE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4E85A0)
#define RPG_GAMECORE_BYCONTAINSCHARACTERSTATE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4E8530)
#define RPG_GAMECORE_BYCONTAINSCHARACTERSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4E8370)
#define RPG_GAMECORE_BYCONTAINSCHARACTERSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4E82B0)

namespace RPG::GameCore
{
	class ByContainsCharacterState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::String* SaveKey; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINSCHARACTERSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByContainsCharacterState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByContainsCharacterState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINSCHARACTERSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByContainsCharacterState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByContainsCharacterState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINSCHARACTERSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainsCharacterState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainsCharacterState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINSCHARACTERSTATE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainsCharacterState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainsCharacterState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINSCHARACTERSTATE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
