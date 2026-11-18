#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/NapTransformData.h"
#include "unitysdk/HHDPDELCDNI.h"

#define NPCCROWD_ANIMATION_FREFPOSE_GETGLOBALSPACETRANSFORM_OFFSET UNITYSDK_OFFSET(0x609900)
#define NPCCROWD_ANIMATION_FREFPOSE_GETGLOBALTRANSFORM_OFFSET UNITYSDK_OFFSET(0x60AB30)
#define NPCCROWD_ANIMATION_FREFPOSE_GETLOCALTRANSFORM_OFFSET UNITYSDK_OFFSET(0x60A040)
#define NPCCROWD_ANIMATION_FREFPOSE_GETMESHSPACETRANSFORM_OFFSET UNITYSDK_OFFSET(0x609320)
#define NPCCROWD_ANIMATION_FREFPOSE_GETMESHTRANSFORM_OFFSET UNITYSDK_OFFSET(0x60A200)
#define NPCCROWD_ANIMATION_FREFPOSE_GETPARENT_OFFSET UNITYSDK_OFFSET(0x609E90)
#define NPCCROWD_ANIMATION_FREFPOSE_GET_BONECOUNT_OFFSET UNITYSDK_OFFSET(0x608FF0)
#define NPCCROWD_ANIMATION_FREFPOSE_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x608FD0)
#define NPCCROWD_ANIMATION_FREFPOSE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x609010)
#define NPCCROWD_ANIMATION_FREFPOSE_ISVALIDBONE_OFFSET UNITYSDK_OFFSET(0x609FC0)
#define NPCCROWD_ANIMATION_FREFPOSE_SETGLOBALTRANSFORM_OFFSET UNITYSDK_OFFSET(0x60CB50)
#define NPCCROWD_ANIMATION_FREFPOSE_SETLOCALTRANSFORM_OFFSET UNITYSDK_OFFSET(0x60BA20)
#define NPCCROWD_ANIMATION_FREFPOSE_SETMESHTRANSFORM_OFFSET UNITYSDK_OFFSET(0x60BB70)
#define NPCCROWD_ANIMATION_FREFPOSE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x6091D0)
#define NPCCROWD_ANIMATION_FREFPOSE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x6092E0)
#define NPCCROWD_ANIMATION_FREFPOSE__CTOR_OFFSET UNITYSDK_OFFSET(0x609150)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int FRefPose_TypeDefinitionIndex = 84167;

	struct alignas(8) FRefPose
	{
		::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Int32> _skeletonRef; // 0x10
		::System::Byte _padding0[0x10];
		::System::Span_1_9011FAD97750D224<::UnityEngine::NapTransformData> _poseRef; // 0x28
		::System::Byte _padding1[0x10];
		::UnityEngine::NapTransformData _mesh; // 0x40

		::System::Void _ctor(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Int32> skeletonRef, ::System::Span_1_9011FAD97750D224<::UnityEngine::NapTransformData> poseRef, ::UnityEngine::NapTransformData mesh)
		{
			return ((::System::Void(*)(::PVOID, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Int32>, ::System::Span_1_9011FAD97750D224<::UnityEngine::NapTransformData>, ::UnityEngine::NapTransformData))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_FREFPOSE__CTOR_OFFSET))(this, skeletonRef, poseRef, mesh);
		}

		::System::Void _ctor_1(::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Int32> skeletonRef, ::PVOID posePointer, ::UnityEngine::NapTransformData mesh)
		{
			return ((::System::Void(*)(::PVOID, ::System::ReadOnlySpan_1_F48FB86071006F3E<::System::Int32>, ::PVOID, ::UnityEngine::NapTransformData))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_FREFPOSE__CTOR_1_OFFSET))(this, skeletonRef, posePointer, mesh);
		}

		::System::Void _ctor_2(::System::Int32 boneCount, ::PVOID skeletonPointer, ::PVOID posePointer, ::UnityEngine::NapTransformData mesh)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::PVOID, ::PVOID, ::UnityEngine::NapTransformData))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_FREFPOSE__CTOR_2_OFFSET))(this, boneCount, skeletonPointer, posePointer, mesh);
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_FREFPOSE_GET_ISNULL_OFFSET))(this);
		}

		::System::Int32 get_BoneCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_FREFPOSE_GET_BONECOUNT_OFFSET))(this);
		}

		::UnityEngine::NapTransformData& get_Item(::HHDPDELCDNI index)
		{
			return ((::UnityEngine::NapTransformData&(*)(::PVOID, ::HHDPDELCDNI))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_FREFPOSE_GET_ITEM_OFFSET))(this, index);
		}

		::UnityEngine::NapTransformData GetMeshSpaceTransform(::UnityEngine::NapTransformData globalTransform)
		{
			return ((::UnityEngine::NapTransformData(*)(::PVOID, ::UnityEngine::NapTransformData))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_FREFPOSE_GETMESHSPACETRANSFORM_OFFSET))(this, globalTransform);
		}

		::UnityEngine::NapTransformData GetGlobalSpaceTransform(::UnityEngine::NapTransformData meshTransform)
		{
			return ((::UnityEngine::NapTransformData(*)(::PVOID, ::UnityEngine::NapTransformData))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_FREFPOSE_GETGLOBALSPACETRANSFORM_OFFSET))(this, meshTransform);
		}

		::HHDPDELCDNI GetParent(::HHDPDELCDNI bone)
		{
			return ((::HHDPDELCDNI(*)(::PVOID, ::HHDPDELCDNI))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_FREFPOSE_GETPARENT_OFFSET))(this, bone);
		}

		::System::Boolean IsValidBone(::HHDPDELCDNI bone)
		{
			return ((::System::Boolean(*)(::PVOID, ::HHDPDELCDNI))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_FREFPOSE_ISVALIDBONE_OFFSET))(this, bone);
		}

		::UnityEngine::NapTransformData GetLocalTransform(::HHDPDELCDNI bone)
		{
			return ((::UnityEngine::NapTransformData(*)(::PVOID, ::HHDPDELCDNI))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_FREFPOSE_GETLOCALTRANSFORM_OFFSET))(this, bone);
		}

		::UnityEngine::NapTransformData GetMeshTransform(::HHDPDELCDNI bone)
		{
			return ((::UnityEngine::NapTransformData(*)(::PVOID, ::HHDPDELCDNI))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_FREFPOSE_GETMESHTRANSFORM_OFFSET))(this, bone);
		}

		::UnityEngine::NapTransformData GetGlobalTransform(::HHDPDELCDNI bone)
		{
			return ((::UnityEngine::NapTransformData(*)(::PVOID, ::HHDPDELCDNI))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_FREFPOSE_GETGLOBALTRANSFORM_OFFSET))(this, bone);
		}

		::System::Void SetLocalTransform(::HHDPDELCDNI bone, ::UnityEngine::NapTransformData value)
		{
			return ((::System::Void(*)(::PVOID, ::HHDPDELCDNI, ::UnityEngine::NapTransformData))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_FREFPOSE_SETLOCALTRANSFORM_OFFSET))(this, bone, value);
		}

		::System::Void SetMeshTransform(::HHDPDELCDNI bone, ::UnityEngine::NapTransformData value)
		{
			return ((::System::Void(*)(::PVOID, ::HHDPDELCDNI, ::UnityEngine::NapTransformData))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_FREFPOSE_SETMESHTRANSFORM_OFFSET))(this, bone, value);
		}

		::System::Void SetGlobalTransform(::HHDPDELCDNI bone, ::UnityEngine::NapTransformData value)
		{
			return ((::System::Void(*)(::PVOID, ::HHDPDELCDNI, ::UnityEngine::NapTransformData))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_FREFPOSE_SETGLOBALTRANSFORM_OFFSET))(this, bone, value);
		}
	};
}
