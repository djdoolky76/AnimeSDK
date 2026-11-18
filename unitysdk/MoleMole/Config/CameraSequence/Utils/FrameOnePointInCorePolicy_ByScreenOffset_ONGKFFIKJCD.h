#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config::CameraSequence::Utils { class FrameOnePointInCorePolicy_ByScreenOffset; }
namespace PipelineCamera::CameraSequence { class AspectRatioPolicy_Default; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYSCREENOFFSET_ONGKFFIKJCD_GPAGOABIFFP_OFFSET UNITYSDK_OFFSET(0x6FFED0)
#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYSCREENOFFSET_ONGKFFIKJCD__CTOR_OFFSET UNITYSDK_OFFSET(0x6FFEC0)

namespace MoleMole::Config::CameraSequence::Utils
{
	inline static constexpr unsigned int FrameOnePointInCorePolicy_ByScreenOffset_ONGKFFIKJCD_TypeDefinitionIndex = 92142;

	struct alignas(8) FrameOnePointInCorePolicy_ByScreenOffset_ONGKFFIKJCD
	{
		::System::Single NPHOPECPHLF; // 0x10
		::UnityEngine::Vector2 EIFLCEKOIFM; // 0x14
		::System::Single NCCDJLDKFGA; // 0x1C
		::PipelineCamera::CameraSequence::AspectRatioPolicy_Default* EGCKEINKEPM; // 0x20

		::System::Void _ctor(::MoleMole::Config::CameraSequence::Utils::FrameOnePointInCorePolicy_ByScreenOffset* ECMMKCJLBMD, ::PipelineCamera::CameraSequence::CameraSequenceContext* AAOCANGHBDG)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::CameraSequence::Utils::FrameOnePointInCorePolicy_ByScreenOffset*, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYSCREENOFFSET_ONGKFFIKJCD__CTOR_OFFSET))(this, ECMMKCJLBMD, AAOCANGHBDG);
		}

		::PipelineCamera::WorldBasicCameraData GPAGOABIFFP(::System::Single FNIOPKPHDEH, ::PipelineCamera::CameraSequence::CameraSequenceContext*& AAOCANGHBDG, ::UnityEngine::Vector3 BFJNCDDBNIC)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_FRAMEONEPOINTINCOREPOLICY_BYSCREENOFFSET_ONGKFFIKJCD_GPAGOABIFFP_OFFSET))(this, FNIOPKPHDEH, AAOCANGHBDG, BFJNCDDBNIC);
		}
	};
}
