#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace MoleMole::Config::CameraSequence::Utils { class CameraRotationBasedOnEntityPolicy_ByEulerOffset; }
namespace Nap::NapECS { class EcsWorld; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYEULEROFFSET_GPCJANPFLMH_GPAGOABIFFP_OFFSET UNITYSDK_OFFSET(0x6C41D0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYEULEROFFSET_GPCJANPFLMH__CTOR_OFFSET UNITYSDK_OFFSET(0x6C41C0)

namespace MoleMole::Config::CameraSequence::Utils
{
	inline static constexpr unsigned int CameraRotationBasedOnEntityPolicy_ByEulerOffset_GPCJANPFLMH_TypeDefinitionIndex = 78473;

	struct alignas(4) CameraRotationBasedOnEntityPolicy_ByEulerOffset_GPCJANPFLMH
	{
		::System::Single OBJPDMEIEBE; // 0x10
		::System::Single HKCNJJNPLGA; // 0x14
		::System::Single LENLEJOLGEI; // 0x18
		::System::Boolean BNIIJNEDCIF; // 0x1C

		::System::Void _ctor(::MoleMole::Config::CameraSequence::Utils::CameraRotationBasedOnEntityPolicy_ByEulerOffset* ECMMKCJLBMD, ::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::CameraSequence::Utils::CameraRotationBasedOnEntityPolicy_ByEulerOffset*, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYEULEROFFSET_GPCJANPFLMH__CTOR_OFFSET))(this, ECMMKCJLBMD, AAOCANGHBDG);
		}

		::UnityEngine::Quaternion GPAGOABIFFP(::System::Single FNIOPKPHDEH, ::System::UInt32 BKLGNCBNEGM, ::Nap::NapECS::EcsWorld* HNGJFALIMGN)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Single, ::System::UInt32, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY_BYEULEROFFSET_GPCJANPFLMH_GPAGOABIFFP_OFFSET))(this, FNIOPKPHDEH, BKLGNCBNEGM, HNGJFALIMGN);
		}
	};
}
