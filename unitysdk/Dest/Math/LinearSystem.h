#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define DEST_MATH_LINEARSYSTEM_INVERSE_OFFSET UNITYSDK_OFFSET(0x1FE59D00)
#define DEST_MATH_LINEARSYSTEM_SOLVE2_1_OFFSET UNITYSDK_OFFSET(0x1FE58620)
#define DEST_MATH_LINEARSYSTEM_SOLVE2_OFFSET UNITYSDK_OFFSET(0x1FE583D0)
#define DEST_MATH_LINEARSYSTEM_SOLVE3_1_OFFSET UNITYSDK_OFFSET(0x1FE58CB0)
#define DEST_MATH_LINEARSYSTEM_SOLVE3_OFFSET UNITYSDK_OFFSET(0x1FE58700)
#define DEST_MATH_LINEARSYSTEM_SOLVETRIDIAGONAL_OFFSET UNITYSDK_OFFSET(0x1FE597F0)
#define DEST_MATH_LINEARSYSTEM_SOLVE_OFFSET UNITYSDK_OFFSET(0x1FE58F40)
#define DEST_MATH_LINEARSYSTEM_SWAPROWS_OFFSET UNITYSDK_OFFSET(0x1FE58DC0)

namespace Dest::Math
{
	inline static constexpr unsigned int LinearSystem_TypeDefinitionIndex = 34986;

	class LinearSystem : public ::System::Object
	{
	public:
		static ::System::Boolean Solve2(::System::Object* A, ::Il2CppArray<::System::Single>* B, ::Il2CppArray<::System::Single>*& X, ::System::Single zeroTolerance)
		{
			return ((::System::Boolean(*)(::System::Object*, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*&, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_LINEARSYSTEM_SOLVE2_OFFSET))(A, B, X, zeroTolerance);
		}

		static ::System::Boolean Solve2_1(::System::Object* A, ::Il2CppArray<::System::Single>* B, ::UnityEngine::Vector2& X, ::System::Single zeroTolerance)
		{
			return ((::System::Boolean(*)(::System::Object*, ::Il2CppArray<::System::Single>*, ::UnityEngine::Vector2&, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_LINEARSYSTEM_SOLVE2_1_OFFSET))(A, B, X, zeroTolerance);
		}

		static ::System::Boolean Solve3(::System::Object* A, ::Il2CppArray<::System::Single>* B, ::Il2CppArray<::System::Single>*& X, ::System::Single zeroTolerance)
		{
			return ((::System::Boolean(*)(::System::Object*, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*&, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_LINEARSYSTEM_SOLVE3_OFFSET))(A, B, X, zeroTolerance);
		}

		static ::System::Boolean Solve3_1(::System::Object* A, ::Il2CppArray<::System::Single>* B, ::UnityEngine::Vector3& X, ::System::Single zeroTolerance)
		{
			return ((::System::Boolean(*)(::System::Object*, ::Il2CppArray<::System::Single>*, ::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_LINEARSYSTEM_SOLVE3_1_OFFSET))(A, B, X, zeroTolerance);
		}

		static ::System::Void SwapRows(::System::Object* matrix, ::System::Int32 row0, ::System::Int32 row1, ::System::Int32 columnCount)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_LINEARSYSTEM_SWAPROWS_OFFSET))(matrix, row0, row1, columnCount);
		}

		static ::System::Boolean Solve(::System::Object* A, ::Il2CppArray<::System::Single>* B, ::Il2CppArray<::System::Single>*& X)
		{
			return ((::System::Boolean(*)(::System::Object*, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*&))((::PBYTE)hIl2Cpp + DEST_MATH_LINEARSYSTEM_SOLVE_OFFSET))(A, B, X);
		}

		static ::System::Boolean SolveTridiagonal(::Il2CppArray<::System::Single>* A, ::Il2CppArray<::System::Single>* B, ::Il2CppArray<::System::Single>* C, ::Il2CppArray<::System::Single>* R, ::Il2CppArray<::System::Single>*& U)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*&))((::PBYTE)hIl2Cpp + DEST_MATH_LINEARSYSTEM_SOLVETRIDIAGONAL_OFFSET))(A, B, C, R, U);
		}

		static ::System::Boolean Inverse(::System::Object* A, ::System::Object*& invA)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::Object*&))((::PBYTE)hIl2Cpp + DEST_MATH_LINEARSYSTEM_INVERSE_OFFSET))(A, invA);
		}
	};
}
