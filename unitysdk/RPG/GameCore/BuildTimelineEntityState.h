#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BuildTimelineEntityState; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BUILDTIMELINEENTITYSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D480540)
#define RPG_GAMECORE_BUILDTIMELINEENTITYSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D480550)
#define RPG_GAMECORE_BUILDTIMELINEENTITYSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D480510)

namespace RPG::GameCore
{
	class BuildTimelineEntityState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::RPG::GameCore::DynamicString* StateName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUILDTIMELINEENTITYSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BuildTimelineEntityState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BuildTimelineEntityState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUILDTIMELINEENTITYSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BuildTimelineEntityState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BuildTimelineEntityState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUILDTIMELINEENTITYSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
