#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCheckRogueExploreWin; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKROGUEEXPLOREWIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D495AE0)
#define RPG_GAMECORE_BYCHECKROGUEEXPLOREWIN_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D495C60)
#define RPG_GAMECORE_BYCHECKROGUEEXPLOREWIN_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D495C30)
#define RPG_GAMECORE_BYCHECKROGUEEXPLOREWIN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D495AF0)
#define RPG_GAMECORE_BYCHECKROGUEEXPLOREWIN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D495AB0)

namespace RPG::GameCore
{
	class ByCheckRogueExploreWin : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKROGUEEXPLOREWIN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckRogueExploreWin* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckRogueExploreWin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKROGUEEXPLOREWIN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckRogueExploreWin* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckRogueExploreWin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKROGUEEXPLOREWIN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckRogueExploreWin* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckRogueExploreWin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKROGUEEXPLOREWIN_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckRogueExploreWin* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckRogueExploreWin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKROGUEEXPLOREWIN_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
