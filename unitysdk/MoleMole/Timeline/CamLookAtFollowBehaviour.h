#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/ExposedReference_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_TIMELINE_CAMLOOKATFOLLOWBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x14B4B180)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int CamLookAtFollowBehaviour_TypeDefinitionIndex = 86383;

	class CamLookAtFollowBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::UnityEngine::ExposedReference_1<::UnityEngine::Transform*> lookAtTarget; // 0x10
		::System::Byte _padding0[0x8];
		::UnityEngine::Vector3 lookAtOffset; // 0x20
		::System::Byte _padding1[0x4];
		::UnityEngine::AnimationCurve* lookAtWeightCurve; // 0x30
		::UnityEngine::ExposedReference_1<::UnityEngine::Transform*> followTarget; // 0x38
		::System::Byte _padding2[0x8];
		::UnityEngine::Vector3 followPositionOffset; // 0x48
		::System::Byte _padding3[0x4];
		::UnityEngine::AnimationCurve* followWeightCurve; // 0x58
		::UnityEngine::Transform* resolvedLookAtTarget; // 0x60
		::UnityEngine::Transform* resolvedFollowTarget; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMLOOKATFOLLOWBEHAVIOUR__CTOR_OFFSET))(this);
		}
	};
}
