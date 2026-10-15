#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BuildTimelineEntityState; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BUILDTIMELINEENTITYSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D452AD0)
#define RPG_GAMECORE_BUILDTIMELINEENTITYSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D452AE0)
#define RPG_GAMECORE_BUILDTIMELINEENTITYSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D452AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BuildTimelineEntityState_TypeDefinitionIndex = 20638;

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
