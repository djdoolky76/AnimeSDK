#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/SkeletonAnimationBase.h"

namespace Spine::Unity { class SkeletonMecanim_MecanimTranslator; }
namespace UnityEngine { class Animator; }

#define SPINE_UNITY_SKELETONMECANIM_APPLYSTATETOSKELETON_OFFSET UNITYSDK_OFFSET(0x1FAB0CB0)
#define SPINE_UNITY_SKELETONMECANIM_GET_ANIMATORCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1FAB06C0)
#define SPINE_UNITY_SKELETONMECANIM_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1FAB0750)
#define SPINE_UNITY_SKELETONMECANIM_GET_TRANSLATOR_OFFSET UNITYSDK_OFFSET(0x1FAB06B0)
#define SPINE_UNITY_SKELETONMECANIM_INITIALIZEANIMATIONCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1FAB0950)
#define SPINE_UNITY_SKELETONMECANIM_MAINTHREADBEFOREUPDATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1FAB0C80)
#define SPINE_UNITY_SKELETONMECANIM_UPDATEANIMATIONSTATUS_OFFSET UNITYSDK_OFFSET(0x1FAB0C40)
#define SPINE_UNITY_SKELETONMECANIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1FAB0DA0)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonMecanim_TypeDefinitionIndex = 38139;

	class SkeletonMecanim : public ::Spine::Unity::SkeletonAnimationBase
	{
	public:
		::Spine::Unity::SkeletonMecanim_MecanimTranslator* translator; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM__CTOR_OFFSET))(this);
		}

		::Spine::Unity::SkeletonMecanim_MecanimTranslator* get_Translator()
		{
			return ((::Spine::Unity::SkeletonMecanim_MecanimTranslator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_GET_TRANSLATOR_OFFSET))(this);
		}

		::UnityEngine::Animator* get_AnimatorComponent()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_GET_ANIMATORCOMPONENT_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_GET_ISVALID_OFFSET))(this);
		}

		::System::Void InitializeAnimationComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_INITIALIZEANIMATIONCOMPONENT_OFFSET))(this);
		}

		::System::Void UpdateAnimationStatus(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_UPDATEANIMATIONSTATUS_OFFSET))(this, deltaTime);
		}

		::System::Void MainThreadBeforeUpdateInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MAINTHREADBEFOREUPDATEINTERNAL_OFFSET))(this);
		}

		::System::Void ApplyStateToSkeleton(::System::Boolean calledFromMainThread)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_APPLYSTATETOSKELETON_OFFSET))(this, calledFromMainThread);
		}
	};
}
