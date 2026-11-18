#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHDPDELCDNI.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeSlice_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_BoneAdjustSetting_TypeDefinitionIndex = 81145;

	struct alignas(8) AnimationSubManager_BoneAdjustSetting
	{
		::Unity::Collections::NativeSlice_1<::HHDPDELCDNI> MasterBone; // 0x10
		::System::Byte _padding0[0x8];
		::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3> MasterForwardBoneBindPos; // 0x20
		::System::Byte _padding1[0x8];
		::Unity::Collections::NativeSlice_1<::UnityEngine::Quaternion> CoordRot; // 0x30
		::System::Byte _padding2[0x8];
		::Unity::Collections::NativeSlice_1<::System::Int32> DrivenBoneCount; // 0x40
		::System::Byte _padding3[0x8];
		::Unity::Collections::NativeSlice_1<::System::Int32> TargetPoseCount; // 0x50
		::System::Byte _padding4[0x8];
		::System::Int32 MaxDrivenBoneCount; // 0x60
		::System::Byte _padding5[0x4];
		::Unity::Collections::NativeSlice_1<::HHDPDELCDNI> DrivenBone; // 0x68
		::System::Byte _padding6[0x8];
		::System::Int32 MaxTriangleCount; // 0x78
		::System::Byte _padding7[0x4];
		::Unity::Collections::NativeSlice_1<::System::Int32> TriangleIndices; // 0x80
		::System::Byte _padding8[0x8];
		::System::Int32 MaxEdgesCount; // 0x90
		::System::Byte _padding9[0x4];
		::Unity::Collections::NativeSlice_1<::System::Int32> ExteriorEdges; // 0x98
		::System::Byte _padding10[0x8];
		::System::Int32 MaxTargetPoseCount; // 0xA8
		::System::Byte _padding11[0x4];
		::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3> DirVec; // 0xB0
		::System::Byte _padding12[0x8];
		::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3> DrivenBonePosDelta; // 0xC0
		::System::Byte _padding13[0x8];
		::Unity::Collections::NativeSlice_1<::UnityEngine::Quaternion> DrivenBoneRotDelta; // 0xD0
		::System::Byte _padding14[0x8];
		::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3> DrivenBoneScaleDelta; // 0xE0
	};
}
