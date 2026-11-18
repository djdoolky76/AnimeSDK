#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/SkeletonRootMotionBase.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/Spine/Unity/SkeletonRootMotionBase_RootMotionInfo.h"

namespace Spine { class Animation; }
namespace Spine::Unity { class SkeletonMecanim; }

#define SPINE_UNITY_SKELETONMECANIMROOTMOTION_CALCULATEANIMATIONSMOVEMENTDELTA_OFFSET UNITYSDK_OFFSET(0x2002A730)
#define SPINE_UNITY_SKELETONMECANIMROOTMOTION_CALCULATEANIMATIONSROTATIONDELTA_OFFSET UNITYSDK_OFFSET(0x2002A750)
#define SPINE_UNITY_SKELETONMECANIMROOTMOTION_GETREMAININGROOTMOTION_OFFSET UNITYSDK_OFFSET(0x2002A170)
#define SPINE_UNITY_SKELETONMECANIMROOTMOTION_GETROOTMOTIONINFO_OFFSET UNITYSDK_OFFSET(0x2002A1E0)
#define SPINE_UNITY_SKELETONMECANIMROOTMOTION_GET_SKELETONMECANIM_OFFSET UNITYSDK_OFFSET(0x20029FD0)
#define SPINE_UNITY_SKELETONMECANIMROOTMOTION_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2002A290)
#define SPINE_UNITY_SKELETONMECANIMROOTMOTION_ONCLIPAPPLIED_OFFSET UNITYSDK_OFFSET(0x2002A590)
#define SPINE_UNITY_SKELETONMECANIMROOTMOTION_RESET_OFFSET UNITYSDK_OFFSET(0x2002A270)
#define SPINE_UNITY_SKELETONMECANIMROOTMOTION__CTOR_OFFSET UNITYSDK_OFFSET(0x2002A770)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonMecanimRootMotion_TypeDefinitionIndex = 38126;

	class SkeletonMecanimRootMotion : public ::Spine::Unity::SkeletonRootMotionBase
	{
	public:
		// static const ::System::Int32 DefaultMecanimLayerFlags = -0x1; // 0x0
		::System::Int32 mecanimLayerFlags; // 0xF0
		::UnityEngine::Vector2 movementDelta; // 0xF4
		::System::Single rotationDelta; // 0xFC
		::Spine::Unity::SkeletonMecanim* skeletonMecanim; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIMROOTMOTION__CTOR_OFFSET))(this);
		}

		::Spine::Unity::SkeletonMecanim* get_SkeletonMecanim()
		{
			return ((::Spine::Unity::SkeletonMecanim*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIMROOTMOTION_GET_SKELETONMECANIM_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetRemainingRootMotion(::System::Int32 layerIndex)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIMROOTMOTION_GETREMAININGROOTMOTION_OFFSET))(this, layerIndex);
		}

		::Spine::Unity::SkeletonRootMotionBase_RootMotionInfo GetRootMotionInfo(::System::Int32 layerIndex)
		{
			return ((::Spine::Unity::SkeletonRootMotionBase_RootMotionInfo(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIMROOTMOTION_GETROOTMOTIONINFO_OFFSET))(this, layerIndex);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIMROOTMOTION_RESET_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIMROOTMOTION_INITIALIZE_OFFSET))(this);
		}

		::System::Void OnClipApplied(::Spine::Animation* animation, ::System::Int32 layerIndex, ::System::Single weight, ::System::Single time, ::System::Single lastTime, ::System::Boolean playsBackward)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Animation*, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIMROOTMOTION_ONCLIPAPPLIED_OFFSET))(this, animation, layerIndex, weight, time, lastTime, playsBackward);
		}

		::UnityEngine::Vector2 CalculateAnimationsMovementDelta()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIMROOTMOTION_CALCULATEANIMATIONSMOVEMENTDELTA_OFFSET))(this);
		}

		::System::Single CalculateAnimationsRotationDelta()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIMROOTMOTION_CALCULATEANIMATIONSROTATIONDELTA_OFFSET))(this);
		}
	};
}
