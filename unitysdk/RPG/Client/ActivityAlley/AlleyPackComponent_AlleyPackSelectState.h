#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class KNKPLOGICFO;
namespace RPG::Client::ActivityAlley { class AlleyPackComponent; }

#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1B77FCE0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE_ENTER_OFFSET UNITYSDK_OFFSET(0x1B788510)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE_EXIT_OFFSET UNITYSDK_OFFSET(0x1B789310)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE_TICK_OFFSET UNITYSDK_OFFSET(0x1B7889C0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE__SETSELECTDURATION_OFFSET UNITYSDK_OFFSET(0x1B788900)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE__SOLVETARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x1B7885B0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE__TICKHOVERMATCH_OFFSET UNITYSDK_OFFSET(0x1B788E50)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE__TICKHOVER_OFFSET UNITYSDK_OFFSET(0x1B788BD0)

namespace RPG::Client::ActivityAlley
{
	inline static constexpr unsigned int AlleyPackComponent_AlleyPackSelectState_TypeDefinitionIndex = 76240;

	class AlleyPackComponent_AlleyPackSelectState : public ::System::Object
	{
	public:
		::KNKPLOGICFO* _Timer; // 0x10
		::RPG::Client::ActivityAlley::AlleyPackComponent* _Owner; // 0x18
		::System::Single _SelectDuration; // 0x20
		::System::Boolean _IsHoverFinish; // 0x24
		::System::Boolean _IsHover; // 0x25
		::System::Byte _padding0[0x2];
		::System::Single _HoverDuration; // 0x28
		::UnityEngine::Vector3 _TargetPosition; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE_CTOR_OFFSET))(this);
		}

		::System::Void Enter(::RPG::Client::ActivityAlley::AlleyPackComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE_ENTER_OFFSET))(this, a1);
		}

		::System::Void Tick(::RPG::Client::ActivityAlley::AlleyPackComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE_TICK_OFFSET))(this, a1);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE_EXIT_OFFSET))(this);
		}

		::System::Void _SetSelectDuration()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE__SETSELECTDURATION_OFFSET))(this);
		}

		::System::Void _SolveTargetPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE__SOLVETARGETPOSITION_OFFSET))(this);
		}

		::System::Void _TickHover()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE__TICKHOVER_OFFSET))(this);
		}

		::System::Void _TickHoverMatch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE__TICKHOVERMATCH_OFFSET))(this);
		}

	};
}
