#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int NapRenderEntityBindings_SerializedData_TypeDefinitionIndex = 6133;

	struct alignas(8) NapRenderEntityBindings_SerializedData
	{
		::System::Int32 monoRenderEntity_InstanceID; // 0x10
		::System::Byte _padding0[0x4];
		::UnityEngine::Transform* middlePoint; // 0x18
		::UnityEngine::Transform* headBone; // 0x20
		::UnityEngine::Transform* rootBone; // 0x28
		::UnityEngine::Vector4 headSphereNormalCenter; // 0x30
		::UnityEngine::Vector4 cullingSphere; // 0x40
		::System::Int32 cullingSphereAnchor; // 0x50
		::System::Byte disableCullingSphere; // 0x54
		::System::Byte usePerObjectShadow; // 0x55
		::System::Byte useShadowProxy; // 0x56
		::System::Byte fixShadowSamplePointOutOfFrustum; // 0x57
		::System::Byte useCustomLightDirection; // 0x58
		::System::Byte useCustomBlendedDirectionalLightSize; // 0x59
		::System::Byte clipVerticesUnderRootBone; // 0x5A
		::System::Byte preferPerRendererMpb; // 0x5B
		::System::Byte preferPerMaterialMpb; // 0x5C
		::System::Byte isOrderedRenderers; // 0x5D
		::System::Byte skipClearMpb; // 0x5E
		::System::Byte fixRed; // 0x5F
		::System::Byte enabled; // 0x60
		::System::Byte syncWithMonoRenderEntity; // 0x61
		::System::Byte shadowFadeWithHeight; // 0x62
		::System::Byte needResetShadowCasting; // 0x63
		::System::Byte disableLightBlendShadowTemporalFade; // 0x64
		::System::Byte _padding1[0x3];
		::System::Int32 directionOverrideLightInstanceID; // 0x68
		::UnityEngine::Vector3 customLightDirection; // 0x6C
		::System::Single customBlendedDirectionalLightSize; // 0x78
		::System::Single rootBoneClipOffset; // 0x7C
		::System::Single perObjectShadowResolveAlpha; // 0x80
		::System::Single perObjectShadowCullDistanceScale; // 0x84
		::System::Single fadeStartHeight; // 0x88
		::System::Single fadeEndHeight; // 0x8C
		::System::Single fadeStartDistance; // 0x90
		::System::Single fadeEndDistance; // 0x94
		::System::Int32 lodIndexedRenderersCount; // 0x98
		::System::Byte _padding2[0x4];
		::Il2CppArray<::UnityEngine::Renderer*>* lodIndexedRenderers; // 0xA0
		::System::Int32 lodRenderersCount; // 0xA8
		::System::Byte _padding3[0x4];
		::Il2CppArray<::UnityEngine::Renderer*>* lodRenderers; // 0xB0
		::System::Int32 lodRendererPartIdOffsetsCount; // 0xB8
		::System::Byte _padding4[0x4];
		::Il2CppArray<::System::Int32>* lodRendererPartIdOffsets; // 0xC0
		::System::Byte perObjectShadowOptimizeSize; // 0xC8
		::System::Byte _padding5[0x3];
		::System::Single perObjectShadowMaxBoundsSize; // 0xCC
		::System::Int32 perObjectShadowLowPriorityRenderersCount; // 0xD0
		::System::Byte _padding6[0x4];
		::Il2CppArray<::UnityEngine::Renderer*>* perObjectShadowLowPriorityRenderers; // 0xD8
	};
}
