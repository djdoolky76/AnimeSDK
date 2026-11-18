#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/PinballSubsystem_CollisionSurfaceRole.h"
#include "unitysdk/MoleMole/PinballSubsystem_PaddleStrikeCandidateKind.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class MGBBDIIJPFJ;
namespace UnityEngine { class Collider; }

namespace MoleMole
{
	inline static constexpr unsigned int PinballSubsystem_CollisionCandidate_TypeDefinitionIndex = 56737;

	struct alignas(8) PinballSubsystem_CollisionCandidate
	{
		::MGBBDIIJPFJ* Other; // 0x10
		::UnityEngine::Collider* Collider; // 0x18
		::System::Int32 ColliderInstanceId; // 0x20
		::System::Single NormalizedTime; // 0x24
		::UnityEngine::Vector3 HitCenterXZ; // 0x28
		::UnityEngine::Vector3 ContactPointXZ; // 0x34
		::UnityEngine::Vector3 Normal; // 0x40
		::System::Boolean HasContactPoint; // 0x4C
		::System::Boolean HasSeparation; // 0x4D
		::System::Byte _padding0[0x2];
		::UnityEngine::Vector3 SeparationDirection; // 0x50
		::System::Single SeparationDistance; // 0x5C
		::System::Boolean IsInitialOverlap; // 0x60
		::System::Byte _padding1[0x3];
		::MoleMole::PinballSubsystem_CollisionSurfaceRole SurfaceRole; // 0x64
		::MoleMole::PinballSubsystem_PaddleStrikeCandidateKind PaddleStrikeKind; // 0x68
		::System::Boolean HasPaddleEjectDirectionOverride; // 0x6C
		::System::Byte _padding2[0x3];
		::UnityEngine::Vector3 PaddleEjectDirectionOverride; // 0x70
	};
}
