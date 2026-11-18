#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Cameras/VNoiseParams.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_CAMERAS_VTRANSFORMNOISEPARAMS_MKHBJMODDFB_OFFSET UNITYSDK_OFFSET(0x5F2180)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int VTransformNoiseParams_TypeDefinitionIndex = 87605;

	struct alignas(4) VTransformNoiseParams
	{
		::MoleMole::Cameras::VNoiseParams X; // 0x10
		::MoleMole::Cameras::VNoiseParams Y; // 0x1C
		::MoleMole::Cameras::VNoiseParams Z; // 0x28

		::UnityEngine::Vector3 MKHBJMODDFB(::System::Single FNIOPKPHDEH, ::UnityEngine::Vector3 BBHIBBJFFJN)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VTRANSFORMNOISEPARAMS_MKHBJMODDFB_OFFSET))(this, FNIOPKPHDEH, BBHIBBJFFJN);
		}
	};
}
