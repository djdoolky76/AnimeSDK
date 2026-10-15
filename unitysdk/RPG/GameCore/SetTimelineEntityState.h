#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class SetTimelineEntityState; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETTIMELINEENTITYSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA9AA70)
#define RPG_GAMECORE_SETTIMELINEENTITYSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA9AA80)
#define RPG_GAMECORE_SETTIMELINEENTITYSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA9AA30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTimelineEntityState_TypeDefinitionIndex = 20637;

	class SetTimelineEntityState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::RPG::GameCore::DynamicString* StateName; // 0x20
		::System::Boolean CutIn; // 0x28
		::System::Boolean SaveToServerOnEnd; // 0x29
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTIMELINEENTITYSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTimelineEntityState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTimelineEntityState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTIMELINEENTITYSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTimelineEntityState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTimelineEntityState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTIMELINEENTITYSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
