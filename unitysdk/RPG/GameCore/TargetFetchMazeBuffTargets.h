#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchMazeBuffTargets; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHMAZEBUFFTARGETS_CTOR_OFFSET UNITYSDK_OFFSET(0x206ED6F0)
#define RPG_GAMECORE_TARGETFETCHMAZEBUFFTARGETS_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x206ED7A0)
#define RPG_GAMECORE_TARGETFETCHMAZEBUFFTARGETS_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x206ED760)
#define RPG_GAMECORE_TARGETFETCHMAZEBUFFTARGETS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x206ED700)
#define RPG_GAMECORE_TARGETFETCHMAZEBUFFTARGETS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x206ED660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchMazeBuffTargets_TypeDefinitionIndex = 24392;

	class TargetFetchMazeBuffTargets : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMAZEBUFFTARGETS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchMazeBuffTargets* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchMazeBuffTargets*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMAZEBUFFTARGETS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchMazeBuffTargets* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchMazeBuffTargets*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMAZEBUFFTARGETS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchMazeBuffTargets* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchMazeBuffTargets*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMAZEBUFFTARGETS_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchMazeBuffTargets* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchMazeBuffTargets*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHMAZEBUFFTARGETS_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
