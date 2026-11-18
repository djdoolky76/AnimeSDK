#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/SkeletonAnimationBase.h"
#include "unitysdk/Spine/Unity/SkeletonComponents_2.h"

namespace Spine { class AnimationState; }
namespace Spine { class TrackEntry; }
namespace Spine::Unity { class SkeletonDataAsset; }
namespace Spine::Unity { class SkeletonRenderer; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define SPINE_UNITY_SKELETONANIMATION_ADDTOGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1FEA5950)
#define SPINE_UNITY_SKELETONANIMATION_APPLYSTATETOSKELETON_OFFSET UNITYSDK_OFFSET(0x1FEA5710)
#define SPINE_UNITY_SKELETONANIMATION_CLEARANIMATIONSTATE_OFFSET UNITYSDK_OFFSET(0x1FEA4E90)
#define SPINE_UNITY_SKELETONANIMATION_GET_ANIMATIONNAME_OFFSET UNITYSDK_OFFSET(0x1FEA4230)
#define SPINE_UNITY_SKELETONANIMATION_GET_ANIMATIONSTATE_OFFSET UNITYSDK_OFFSET(0x1FEA40F0)
#define SPINE_UNITY_SKELETONANIMATION_GET_DELTATIME_OFFSET UNITYSDK_OFFSET(0x1FEA55A0)
#define SPINE_UNITY_SKELETONANIMATION_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1FEA4120)
#define SPINE_UNITY_SKELETONANIMATION_GET_UNSCALEDTIME_OFFSET UNITYSDK_OFFSET(0x1FEA4210)
#define SPINE_UNITY_SKELETONANIMATION_GET_USEDEXTERNALDELTATIME_OFFSET UNITYSDK_OFFSET(0x1FEA54B0)
#define SPINE_UNITY_SKELETONANIMATION_INITIALIZEANIMATIONCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1FEA4EA0)
#define SPINE_UNITY_SKELETONANIMATION_MAINTHREADAFTERUPDATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1FEA40B0)
#define SPINE_UNITY_SKELETONANIMATION_MAINTHREADBEFOREUPDATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1FEA4070)
#define SPINE_UNITY_SKELETONANIMATION_NEWSKELETONANIMATIONGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1FEA59E0)
#define SPINE_UNITY_SKELETONANIMATION_ONANIMATIONDISPOSED_OFFSET UNITYSDK_OFFSET(0x1FEA5220)
#define SPINE_UNITY_SKELETONANIMATION_SET_ANIMATIONNAME_OFFSET UNITYSDK_OFFSET(0x1FEA43A0)
#define SPINE_UNITY_SKELETONANIMATION_SET_ANIMATIONSTATE_OFFSET UNITYSDK_OFFSET(0x1FEA4110)
#define SPINE_UNITY_SKELETONANIMATION_SET_UNSCALEDTIME_OFFSET UNITYSDK_OFFSET(0x1FEA4220)
#define SPINE_UNITY_SKELETONANIMATION_UPDATEANIMATIONSTATUS_OFFSET UNITYSDK_OFFSET(0x1FEA55C0)
#define SPINE_UNITY_SKELETONANIMATION_UPDATEINITIALANIMATION_OFFSET UNITYSDK_OFFSET(0x1FEA5370)
#define SPINE_UNITY_SKELETONANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1FEA5A60)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonAnimation_TypeDefinitionIndex = 38132;

	class SkeletonAnimation : public ::Spine::Unity::SkeletonAnimationBase
	{
	public:
		::System::String* animationName; // 0x50
		::System::Boolean loop; // 0x58
		::System::Byte _padding0[0x3];
		::System::Single timeScale; // 0x5C
		::System::Boolean unscaledTime; // 0x60
		::System::Byte _padding1[0x7];
		::Spine::AnimationState* state; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION__CTOR_OFFSET))(this);
		}

		::System::Void MainThreadBeforeUpdateInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_MAINTHREADBEFOREUPDATEINTERNAL_OFFSET))(this);
		}

		::System::Void MainThreadAfterUpdateInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_MAINTHREADAFTERUPDATEINTERNAL_OFFSET))(this);
		}

		::Spine::AnimationState* get_AnimationState()
		{
			return ((::Spine::AnimationState*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_GET_ANIMATIONSTATE_OFFSET))(this);
		}

		::System::Void set_AnimationState(::Spine::AnimationState* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_SET_ANIMATIONSTATE_OFFSET))(this, value);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_GET_ISVALID_OFFSET))(this);
		}

		::System::Boolean get_UnscaledTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_GET_UNSCALEDTIME_OFFSET))(this);
		}

		::System::Void set_UnscaledTime(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_SET_UNSCALEDTIME_OFFSET))(this, value);
		}

		::System::String* get_AnimationName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_GET_ANIMATIONNAME_OFFSET))(this);
		}

		::System::Void set_AnimationName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_SET_ANIMATIONNAME_OFFSET))(this, value);
		}

		::System::Void ClearAnimationState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_CLEARANIMATIONSTATE_OFFSET))(this);
		}

		::System::Void InitializeAnimationComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_INITIALIZEANIMATIONCOMPONENT_OFFSET))(this);
		}

		::System::Void OnAnimationDisposed(::Spine::TrackEntry* entry)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_ONANIMATIONDISPOSED_OFFSET))(this, entry);
		}

		::System::Void UpdateInitialAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_UPDATEINITIALANIMATION_OFFSET))(this);
		}

		::System::Single get_UsedExternalDeltaTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_GET_USEDEXTERNALDELTATIME_OFFSET))(this);
		}

		::System::Single get_DeltaTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_GET_DELTATIME_OFFSET))(this);
		}

		::System::Void UpdateAnimationStatus(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_UPDATEANIMATIONSTATUS_OFFSET))(this, deltaTime);
		}

		::System::Void ApplyStateToSkeleton(::System::Boolean calledFromMainThread)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_APPLYSTATETOSKELETON_OFFSET))(this, calledFromMainThread);
		}

		static ::Spine::Unity::SkeletonComponents_2<::Spine::Unity::SkeletonRenderer*, ::Spine::Unity::SkeletonAnimation*> AddToGameObject(::UnityEngine::GameObject* gameObject, ::Spine::Unity::SkeletonDataAsset* skeletonDataAsset, ::System::Boolean quiet)
		{
			return ((::Spine::Unity::SkeletonComponents_2<::Spine::Unity::SkeletonRenderer*, ::Spine::Unity::SkeletonAnimation*>(*)(::UnityEngine::GameObject*, ::Spine::Unity::SkeletonDataAsset*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_ADDTOGAMEOBJECT_OFFSET))(gameObject, skeletonDataAsset, quiet);
		}

		static ::Spine::Unity::SkeletonComponents_2<::Spine::Unity::SkeletonRenderer*, ::Spine::Unity::SkeletonAnimation*> NewSkeletonAnimationGameObject(::Spine::Unity::SkeletonDataAsset* skeletonDataAsset, ::System::Boolean quiet)
		{
			return ((::Spine::Unity::SkeletonComponents_2<::Spine::Unity::SkeletonRenderer*, ::Spine::Unity::SkeletonAnimation*>(*)(::Spine::Unity::SkeletonDataAsset*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATION_NEWSKELETONANIMATIONGAMEOBJECT_OFFSET))(skeletonDataAsset, quiet);
		}
	};
}
