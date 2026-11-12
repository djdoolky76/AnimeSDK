#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_VECTOR3EQUALITYCOMPARER_CTOR_OFFSET UNITYSDK_OFFSET(0x203D1010)
#define CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_VECTOR3EQUALITYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x203D19C0)
#define CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_VECTOR3EQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x203D1A60)

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int UnityEqualityComparer_Vector3EqualityComparer_TypeDefinitionIndex = 39606;

	class UnityEqualityComparer_Vector3EqualityComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_VECTOR3EQUALITYCOMPARER_CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_VECTOR3EQUALITYCOMPARER_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode(::UnityEngine::Vector3 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_VECTOR3EQUALITYCOMPARER_GETHASHCODE_OFFSET))(this, a1);
		}

	};
}
