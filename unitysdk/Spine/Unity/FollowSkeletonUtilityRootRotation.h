#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class Transform; }

#define SPINE_UNITY_FOLLOWSKELETONUTILITYROOTROTATION_COMPENSATEPOSITIONTOXROTATION_OFFSET UNITYSDK_OFFSET(0x1ED06E60)
#define SPINE_UNITY_FOLLOWSKELETONUTILITYROOTROTATION_COMPENSATEPOSITIONTOYROTATION_OFFSET UNITYSDK_OFFSET(0x1ED06CA0)
#define SPINE_UNITY_FOLLOWSKELETONUTILITYROOTROTATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED06FC0)
#define SPINE_UNITY_FOLLOWSKELETONUTILITYROOTROTATION_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1ED06950)
#define SPINE_UNITY_FOLLOWSKELETONUTILITYROOTROTATION_START_OFFSET UNITYSDK_OFFSET(0x1ED06840)

namespace Spine::Unity
{
	inline static constexpr unsigned int FollowSkeletonUtilityRootRotation_TypeDefinitionIndex = 45059;

	class FollowSkeletonUtilityRootRotation : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* reference; // 0x18
		::UnityEngine::Vector3 prevLocalEulerAngles; // 0x20
		// static const ::System::Object FLIP_ANGLE_THRESHOLD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_FOLLOWSKELETONUTILITYROOTROTATION_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_FOLLOWSKELETONUTILITYROOTROTATION_START_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_FOLLOWSKELETONUTILITYROOTROTATION_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void CompensatePositionToYRotation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_FOLLOWSKELETONUTILITYROOTROTATION_COMPENSATEPOSITIONTOYROTATION_OFFSET))(this);
		}

		::System::Void CompensatePositionToXRotation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_FOLLOWSKELETONUTILITYROOTROTATION_COMPENSATEPOSITIONTOXROTATION_OFFSET))(this);
		}

	};
}
