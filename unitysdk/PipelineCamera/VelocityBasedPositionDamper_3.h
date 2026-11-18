#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Variable_1.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace PipelineCamera
{
	inline static constexpr unsigned int VelocityBasedPositionDamper_3_TypeDefinitionIndex = 36332;

	template <typename T1, typename T2, typename T3>
	struct alignas(8) VelocityBasedPositionDamper_3
	{
		::System::Nullable_1<::UnityEngine::Vector3> _currentPosition; // 0x0
		::System::Nullable_1<::UnityEngine::Vector3> _currentVelocity; // 0x0
		::System::Nullable_1<::UnityEngine::Vector3> _lastTargetPosition; // 0x0
		::System::Nullable_1<::UnityEngine::Vector3> _lastTargetVelocity; // 0x0
		::Foundation::Variable_1<::UnityEngine::Vector3> _targetPosition; // 0x0
		::Foundation::Variable_1<::UnityEngine::Vector3> _targetVelocity; // 0x0
		::Foundation::Variable_1<T1> _damperX; // 0x0
		::Foundation::Variable_1<T2> _damperY; // 0x0
		::Foundation::Variable_1<T3> _damperZ; // 0x0
		::System::Boolean _isEnabled; // 0x0
	};
}
