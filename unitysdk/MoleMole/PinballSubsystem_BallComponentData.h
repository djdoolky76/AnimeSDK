#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/PinballBallAbilityData.h"
#include "unitysdk/MoleMole/Battle/PinballColliderData.h"
#include "unitysdk/MoleMole/Battle/PinballContactData.h"
#include "unitysdk/MoleMole/Battle/PinballPaddleData.h"
#include "unitysdk/MoleMole/Battle/PinballPhysicsData.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole
{
	inline static constexpr unsigned int PinballSubsystem_BallComponentData_TypeDefinitionIndex = 56760;

	struct alignas(4) PinballSubsystem_BallComponentData
	{
		::MoleMole::Battle::PinballColliderData Collider; // 0x10
		::MoleMole::Battle::PinballContactData Contact; // 0x18
		::MoleMole::Battle::PinballPhysicsData Physics; // 0x78
		::MoleMole::Battle::PinballPaddleData Paddle; // 0x94
		::System::Byte _padding0[0x4];
		::MoleMole::Battle::PinballBallAbilityData BallAbilities; // 0xA8
	};
}
