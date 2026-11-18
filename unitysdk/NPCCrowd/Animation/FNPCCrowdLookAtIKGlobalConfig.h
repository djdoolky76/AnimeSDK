#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int FNPCCrowdLookAtIKGlobalConfig_TypeDefinitionIndex = 76071;

	struct alignas(4) FNPCCrowdLookAtIKGlobalConfig
	{
		::System::Boolean ConfigValid; // 0x10
		::System::Boolean TargetPoseValid; // 0x11
		::System::Boolean CheckDefault; // 0x12
		::System::Boolean CheckFixCrowd; // 0x13
		::System::Boolean CheckPathCrowd; // 0x14
		::System::Boolean CheckConfigTag; // 0x15
		::System::Boolean ForceApply; // 0x16
		::System::Byte _padding0[0x1];
		::System::Int32 IKType; // 0x18
		::System::Single RangeSquared; // 0x1C
		::System::Single TargetHalfAngleCos; // 0x20
		::System::Single NpcHalfAngleCos; // 0x24
		::UnityEngine::Vector3 TargetPosition; // 0x28
		::UnityEngine::Vector3 TargetForward; // 0x34
		::System::Int32 CameraGeneration; // 0x40
		::System::Int32 LocalAvatarGeneration; // 0x44
	};
}
