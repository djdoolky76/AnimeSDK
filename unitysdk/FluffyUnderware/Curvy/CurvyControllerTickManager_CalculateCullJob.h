#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Jobs/TransformAccess.h"

#define FLUFFYUNDERWARE_CURVY_CURVYCONTROLLERTICKMANAGER_CALCULATECULLJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x998D70)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvyControllerTickManager_CalculateCullJob_TypeDefinitionIndex = 37636;

	struct alignas(4) CurvyControllerTickManager_CalculateCullJob
	{
		::UnityEngine::Vector3 cameraPosition; // 0x10

		::System::Void Execute(::System::Int32 index, ::UnityEngine::Jobs::TransformAccess transform)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Jobs::TransformAccess))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYCONTROLLERTICKMANAGER_CALCULATECULLJOB_EXECUTE_OFFSET))(this, index, transform);
		}
	};
}
