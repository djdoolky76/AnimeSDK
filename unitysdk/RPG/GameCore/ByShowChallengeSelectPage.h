#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByShowChallengeSelectPage; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYSHOWCHALLENGESELECTPAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D508410)
#define RPG_GAMECORE_BYSHOWCHALLENGESELECTPAGE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D508590)
#define RPG_GAMECORE_BYSHOWCHALLENGESELECTPAGE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D508560)
#define RPG_GAMECORE_BYSHOWCHALLENGESELECTPAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D508420)
#define RPG_GAMECORE_BYSHOWCHALLENGESELECTPAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5083E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByShowChallengeSelectPage_TypeDefinitionIndex = 20474;

	class ByShowChallengeSelectPage : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSHOWCHALLENGESELECTPAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByShowChallengeSelectPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByShowChallengeSelectPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSHOWCHALLENGESELECTPAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByShowChallengeSelectPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByShowChallengeSelectPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSHOWCHALLENGESELECTPAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByShowChallengeSelectPage* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByShowChallengeSelectPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSHOWCHALLENGESELECTPAGE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByShowChallengeSelectPage* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByShowChallengeSelectPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSHOWCHALLENGESELECTPAGE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
