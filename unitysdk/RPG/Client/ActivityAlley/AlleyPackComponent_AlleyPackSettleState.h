#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class KNKPLOGICFO;
namespace RPG::Client::ActivityAlley { class AlleyPackComponent; }

#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSETTLESTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1B77FD30)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSETTLESTATE_ENTER_OFFSET UNITYSDK_OFFSET(0x1B7893A0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSETTLESTATE_EXIT_OFFSET UNITYSDK_OFFSET(0x1B789CC0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSETTLESTATE_TICK_OFFSET UNITYSDK_OFFSET(0x1B789800)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSETTLESTATE__SETSETTLEDURATION_OFFSET UNITYSDK_OFFSET(0x1B789780)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSETTLESTATE__SOLVETARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x1B789430)

namespace RPG::Client::ActivityAlley
{
	inline static constexpr unsigned int AlleyPackComponent_AlleyPackSettleState_TypeDefinitionIndex = 76241;

	class AlleyPackComponent_AlleyPackSettleState : public ::System::Object
	{
	public:
		::RPG::Client::ActivityAlley::AlleyPackComponent* _Owner; // 0x10
		::KNKPLOGICFO* _Timer; // 0x18
		::UnityEngine::Vector3 _TargetPosition; // 0x20
		::System::Single _SettleDuration; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSETTLESTATE_CTOR_OFFSET))(this);
		}

		::System::Void Enter(::RPG::Client::ActivityAlley::AlleyPackComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSETTLESTATE_ENTER_OFFSET))(this, a1);
		}

		::System::Void Tick(::RPG::Client::ActivityAlley::AlleyPackComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSETTLESTATE_TICK_OFFSET))(this, a1);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSETTLESTATE_EXIT_OFFSET))(this);
		}

		::System::Void _SolveTargetPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSETTLESTATE__SOLVETARGETPOSITION_OFFSET))(this);
		}

		::System::Void _SetSettleDuration()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSETTLESTATE__SETSETTLEDURATION_OFFSET))(this);
		}

	};
}
