#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsFirstChallengeBattle; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISFIRSTCHALLENGEBATTLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7255D0)
#define RPG_GAMECORE_BYISFIRSTCHALLENGEBATTLE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E725750)
#define RPG_GAMECORE_BYISFIRSTCHALLENGEBATTLE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E725720)
#define RPG_GAMECORE_BYISFIRSTCHALLENGEBATTLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E7255E0)
#define RPG_GAMECORE_BYISFIRSTCHALLENGEBATTLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E7255A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsFirstChallengeBattle_TypeDefinitionIndex = 22990;

	class ByIsFirstChallengeBattle : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFIRSTCHALLENGEBATTLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsFirstChallengeBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsFirstChallengeBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFIRSTCHALLENGEBATTLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsFirstChallengeBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsFirstChallengeBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFIRSTCHALLENGEBATTLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsFirstChallengeBattle* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsFirstChallengeBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFIRSTCHALLENGEBATTLE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsFirstChallengeBattle* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsFirstChallengeBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFIRSTCHALLENGEBATTLE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
