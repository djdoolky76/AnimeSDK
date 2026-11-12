#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOBALANCEBALLCONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0xE1C0E10)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoBalanceBallController_TypeDefinitionIndex = 70593;

	class MonoBalanceBallController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* BallVisualRoot; // 0x18
		::System::String* BallVisualRootPath; // 0x20
		::UnityEngine::Transform* BallRollRoot; // 0x28
		::System::String* BallRollRootPath; // 0x30
		::UnityEngine::Vector3 BallRollCenterOffset; // 0x38
		::System::Single Acceleration; // 0x44
		::System::Single Deceleration; // 0x48
		::System::Single MaxMoveSpeed; // 0x4C
		::System::Single StopSpeed; // 0x50
		::System::Single VisualRollRadius; // 0x54
		::System::Single VisualRollScale; // 0x58
		::System::Boolean DriveMovementWithoutAnimator; // 0x5C
		::System::Byte _padding0[0x3];
		::System::Single ImpactCompressionDuration; // 0x60
		::System::Single ImpactReboundDuration; // 0x64
		::System::Single ImpactRecoveryDuration; // 0x68
		::System::Single MinImpactReboundSpeed; // 0x6C
		::System::Single MaxImpactReboundSpeed; // 0x70
		::System::Single ImpactReboundInputIgnoreDuration; // 0x74
		::System::String* RollStartSoundEvent; // 0x78
		::System::String* RollStopSoundEvent; // 0x80
		// static const ::System::Object SpecialNpcId; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOBALANCEBALLCONTROLLER_CTOR_OFFSET))(this);
		}

	};
}
