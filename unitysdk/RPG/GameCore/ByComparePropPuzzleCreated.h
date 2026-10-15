#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByComparePropPuzzleCreated; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREPROPPUZZLECREATED_CTOR_OFFSET UNITYSDK_OFFSET(0x1D49D8D0)
#define RPG_GAMECORE_BYCOMPAREPROPPUZZLECREATED_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D49DAD0)
#define RPG_GAMECORE_BYCOMPAREPROPPUZZLECREATED_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D49DA80)
#define RPG_GAMECORE_BYCOMPAREPROPPUZZLECREATED_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D49D900)
#define RPG_GAMECORE_BYCOMPAREPROPPUZZLECREATED_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D49D880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByComparePropPuzzleCreated_TypeDefinitionIndex = 20573;

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
