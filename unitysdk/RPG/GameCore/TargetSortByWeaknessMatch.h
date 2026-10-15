#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TargetSortByWeaknessMatch; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETSORTBYWEAKNESSMATCH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB73660)
#define RPG_GAMECORE_TARGETSORTBYWEAKNESSMATCH_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB737E0)
#define RPG_GAMECORE_TARGETSORTBYWEAKNESSMATCH_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB73790)
#define RPG_GAMECORE_TARGETSORTBYWEAKNESSMATCH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB73670)
#define RPG_GAMECORE_TARGETSORTBYWEAKNESSMATCH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB73610)

namespace RPG::GameCore
{
	class TargetSortByWeaknessMatch : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::RPG::GameCore::TargetEvaluator* Defenders; // 0x10
		::System::Boolean MatchFirst; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYWEAKNESSMATCH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetSortByWeaknessMatch* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetSortByWeaknessMatch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYWEAKNESSMATCH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetSortByWeaknessMatch* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetSortByWeaknessMatch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYWEAKNESSMATCH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByWeaknessMatch* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByWeaknessMatch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYWEAKNESSMATCH_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByWeaknessMatch* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByWeaknessMatch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYWEAKNESSMATCH_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
