#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByBattleMissionTalkFinish; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYBATTLEMISSIONTALKFINISH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D45A150)
#define RPG_GAMECORE_BYBATTLEMISSIONTALKFINISH_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D45A2D0)
#define RPG_GAMECORE_BYBATTLEMISSIONTALKFINISH_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D45A2A0)
#define RPG_GAMECORE_BYBATTLEMISSIONTALKFINISH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D45A160)
#define RPG_GAMECORE_BYBATTLEMISSIONTALKFINISH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D45A120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByBattleMissionTalkFinish_TypeDefinitionIndex = 23811;

	class ByBattleMissionTalkFinish : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYBATTLEMISSIONTALKFINISH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByBattleMissionTalkFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByBattleMissionTalkFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYBATTLEMISSIONTALKFINISH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByBattleMissionTalkFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByBattleMissionTalkFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYBATTLEMISSIONTALKFINISH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByBattleMissionTalkFinish* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByBattleMissionTalkFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYBATTLEMISSIONTALKFINISH_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByBattleMissionTalkFinish* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByBattleMissionTalkFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYBATTLEMISSIONTALKFINISH_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
