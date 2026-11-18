#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/BoundingSphere.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Cameras { class ScopedOverlookCameraMode; }

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int ScopedOverlookCameraMode_GPLCDLEGLPG_TypeDefinitionIndex = 65481;

	struct alignas(8) ScopedOverlookCameraMode_GPLCDLEGLPG
	{
		::MoleMole::Cameras::ScopedOverlookCameraMode* KLHPEBKNIFB; // 0x10
		::UnityEngine::BoundingSphere HODAIDNDKHD; // 0x18
		::PipelineCamera::WorldBasicCameraData ECDFBPODEOB; // 0x28
		::UnityEngine::Vector2 COPACJAFDHO; // 0x54
		::PipelineCamera::WorldBasicCameraData PJBDLMBIIBH; // 0x5C
	};
}
