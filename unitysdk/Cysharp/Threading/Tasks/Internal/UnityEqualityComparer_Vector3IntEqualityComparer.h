#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3Int.h"
namespace Cysharp::Threading::Tasks::Internal { class UnityEqualityComparer_Vector3IntEqualityComparer; }

#define CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_VECTOR3INTEQUALITYCOMPARER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F120A10)
#define CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_VECTOR3INTEQUALITYCOMPARER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F11FFE0)
#define CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_VECTOR3INTEQUALITYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F120250)
#define CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_VECTOR3INTEQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F120310)

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int UnityEqualityComparer_Vector3IntEqualityComparer_TypeDefinitionIndex = 38685;

	class UnityEqualityComparer_Vector3IntEqualityComparer : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3IntEqualityComparer** StaticGet_Default()
		{
			return (::Cysharp::Threading::Tasks::Internal::UnityEqualityComparer_Vector3IntEqualityComparer**)UnitySDK::FromName("Cysharp.Threading.Tasks.Internal", "Vector3IntEqualityComparer")->GetStaticField(0x3FA80);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_VECTOR3INTEQUALITYCOMPARER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_VECTOR3INTEQUALITYCOMPARER_CCTOR_OFFSET))();
		}

		::System::Boolean Equals(::UnityEngine::Vector3Int a1, ::UnityEngine::Vector3Int a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_VECTOR3INTEQUALITYCOMPARER_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode(::UnityEngine::Vector3Int a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_VECTOR3INTEQUALITYCOMPARER_GETHASHCODE_OFFSET))(this, a1);
		}

	};
}
