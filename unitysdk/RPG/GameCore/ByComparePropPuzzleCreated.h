#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByComparePropPuzzleCreated; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREPROPPUZZLECREATED_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4CB340)
#define RPG_GAMECORE_BYCOMPAREPROPPUZZLECREATED_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4CB540)
#define RPG_GAMECORE_BYCOMPAREPROPPUZZLECREATED_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4CB4F0)
#define RPG_GAMECORE_BYCOMPAREPROPPUZZLECREATED_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4CB370)
#define RPG_GAMECORE_BYCOMPAREPROPPUZZLECREATED_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4CB2F0)

namespace RPG::GameCore
{
	class ByComparePropPuzzleCreated : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPPUZZLECREATED_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByComparePropPuzzleCreated* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByComparePropPuzzleCreated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPPUZZLECREATED_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByComparePropPuzzleCreated* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByComparePropPuzzleCreated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPPUZZLECREATED_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropPuzzleCreated* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropPuzzleCreated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPPUZZLECREATED_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePropPuzzleCreated* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePropPuzzleCreated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPROPPUZZLECREATED_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
