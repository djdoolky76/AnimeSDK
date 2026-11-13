#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchAdvPillarPuzzleInteractingPillar; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHADVPILLARPUZZLEINTERACTINGPILLAR_CTOR_OFFSET UNITYSDK_OFFSET(0x206E6E20)
#define RPG_GAMECORE_TARGETFETCHADVPILLARPUZZLEINTERACTINGPILLAR_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x206E6ED0)
#define RPG_GAMECORE_TARGETFETCHADVPILLARPUZZLEINTERACTINGPILLAR_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x206E6E90)
#define RPG_GAMECORE_TARGETFETCHADVPILLARPUZZLEINTERACTINGPILLAR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x206E6E30)
#define RPG_GAMECORE_TARGETFETCHADVPILLARPUZZLEINTERACTINGPILLAR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x206E6D90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAdvPillarPuzzleInteractingPillar_TypeDefinitionIndex = 24346;

	class TargetFetchAdvPillarPuzzleInteractingPillar : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVPILLARPUZZLEINTERACTINGPILLAR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAdvPillarPuzzleInteractingPillar* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAdvPillarPuzzleInteractingPillar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVPILLARPUZZLEINTERACTINGPILLAR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAdvPillarPuzzleInteractingPillar* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAdvPillarPuzzleInteractingPillar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVPILLARPUZZLEINTERACTINGPILLAR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvPillarPuzzleInteractingPillar* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvPillarPuzzleInteractingPillar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVPILLARPUZZLEINTERACTINGPILLAR_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvPillarPuzzleInteractingPillar* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvPillarPuzzleInteractingPillar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVPILLARPUZZLEINTERACTINGPILLAR_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
