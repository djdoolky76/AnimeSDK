#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define DEST_MATH_CONCAVEHULL2_CALCDISTANCEFROMPOINTTOEDGE_OFFSET UNITYSDK_OFFSET(0x1FC022F0)
#define DEST_MATH_CONCAVEHULL2_CREATE_OFFSET UNITYSDK_OFFSET(0x1FC00E80)
#define DEST_MATH_CONCAVEHULL2_QUICKSORT_OFFSET UNITYSDK_OFFSET(0x1FC020D0)
#define DEST_MATH_CONCAVEHULL2__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC023E0)

namespace Dest::Math
{
	inline static constexpr unsigned int ConcaveHull2_TypeDefinitionIndex = 34895;

	class ConcaveHull2 : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_CONCAVEHULL2__CTOR_OFFSET))(this);
		}

		static ::System::Void Quicksort(::Il2CppArray<::System::Object*>* x, ::System::Int32 first, ::System::Int32 last)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_CONCAVEHULL2_QUICKSORT_OFFSET))(x, first, last);
		}

		static ::System::Single CalcDistanceFromPointToEdge(::UnityEngine::Vector2& pointA, ::UnityEngine::Vector2& v0, ::UnityEngine::Vector2& v1)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DEST_MATH_CONCAVEHULL2_CALCDISTANCEFROMPOINTTOEDGE_OFFSET))(pointA, v0, v1);
		}

		static ::System::Boolean Create(::Il2CppArray<::UnityEngine::Vector2>* points, ::Il2CppArray<::System::Int32>*& concaveHull, ::Il2CppArray<::System::Int32>* convexHull, ::System::Single N, ::System::Single epsilon)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Vector2>*, ::Il2CppArray<::System::Int32>*&, ::Il2CppArray<::System::Int32>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_CONCAVEHULL2_CREATE_OFFSET))(points, concaveHull, convexHull, N, epsilon);
		}
	};
}
