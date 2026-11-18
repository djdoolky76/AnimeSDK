#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

class MGBBDIIJPFJ;
namespace MoleMole { class PinballSubsystem_CollisionCandidateGroup; }

namespace MoleMole
{
	inline static constexpr unsigned int PinballSubsystem_PinballCollisionQueryContext_TypeDefinitionIndex = 56743;

	struct alignas(8) PinballSubsystem_PinballCollisionQueryContext
	{
		::MGBBDIIJPFJ* Mover; // 0x10
		::UnityEngine::Vector3 StartCenter; // 0x18
		::UnityEngine::Vector3 MoverVelocity; // 0x24
		::System::Single SweepTime; // 0x30
		::System::Byte _padding0[0x4];
		::MoleMole::PinballSubsystem_CollisionCandidateGroup* Group; // 0x38
		::UnityEngine::Vector3 QueryDirection; // 0x40
		::UnityEngine::Bounds InitialOverlapMoverBounds; // 0x4C
		::System::Boolean HasInitialOverlapMoverBounds; // 0x64
		::System::Boolean Aborted; // 0x65
	};
}
