#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/TimeRewindState.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByTimeRewindTargetCurrentState; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYTIMEREWINDTARGETCURRENTSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5130D0)
#define RPG_GAMECORE_BYTIMEREWINDTARGETCURRENTSTATE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D513310)
#define RPG_GAMECORE_BYTIMEREWINDTARGETCURRENTSTATE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D5132E0)
#define RPG_GAMECORE_BYTIMEREWINDTARGETCURRENTSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5130E0)
#define RPG_GAMECORE_BYTIMEREWINDTARGETCURRENTSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5130A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTimeRewindTargetCurrentState_TypeDefinitionIndex = 20671;

	class ByTimeRewindTargetCurrentState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x20
		::RPG::GameCore::TimeRewindState CurrentState; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTIMEREWINDTARGETCURRENTSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByTimeRewindTargetCurrentState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByTimeRewindTargetCurrentState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTIMEREWINDTARGETCURRENTSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByTimeRewindTargetCurrentState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByTimeRewindTargetCurrentState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTIMEREWINDTARGETCURRENTSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTimeRewindTargetCurrentState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTimeRewindTargetCurrentState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTIMEREWINDTARGETCURRENTSTATE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTimeRewindTargetCurrentState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTimeRewindTargetCurrentState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTIMEREWINDTARGETCURRENTSTATE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
