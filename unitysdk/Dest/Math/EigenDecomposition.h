#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Dest::Math { class EigenData; }

#define DEST_MATH_EIGENDECOMPOSITION_DECREASINGSORT_OFFSET UNITYSDK_OFFSET(0x1F688A70)
#define DEST_MATH_EIGENDECOMPOSITION_GUARANTEEROTATION_OFFSET UNITYSDK_OFFSET(0x1F688D80)
#define DEST_MATH_EIGENDECOMPOSITION_INCREASINGSORT_OFFSET UNITYSDK_OFFSET(0x1F688760)
#define DEST_MATH_EIGENDECOMPOSITION_QLALGORITHM_OFFSET UNITYSDK_OFFSET(0x1F687FF0)
#define DEST_MATH_EIGENDECOMPOSITION_SOLVE_OFFSET UNITYSDK_OFFSET(0x1F6822D0)
#define DEST_MATH_EIGENDECOMPOSITION_TRIDIAGONAL2_OFFSET UNITYSDK_OFFSET(0x1F685F20)
#define DEST_MATH_EIGENDECOMPOSITION_TRIDIAGONAL3_OFFSET UNITYSDK_OFFSET(0x1F686070)
#define DEST_MATH_EIGENDECOMPOSITION_TRIDIAGONALN_OFFSET UNITYSDK_OFFSET(0x1F686360)

namespace Dest::Math
{
	inline static constexpr unsigned int EigenDecomposition_TypeDefinitionIndex = 34984;

	class EigenDecomposition : public ::System::Object
	{
	public:
		static ::System::Void Tridiagonal2(::Il2CppArray<::System::Single>* diagonal, ::Il2CppArray<::System::Single>* subdiagonal, ::System::Object* matrix, ::System::Boolean& isRotation)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*, ::System::Object*, ::System::Boolean&))((::PBYTE)hIl2Cpp + DEST_MATH_EIGENDECOMPOSITION_TRIDIAGONAL2_OFFSET))(diagonal, subdiagonal, matrix, isRotation);
		}

		static ::System::Void Tridiagonal3(::Il2CppArray<::System::Single>* diagonal, ::Il2CppArray<::System::Single>* subdiagonal, ::System::Object* matrix, ::System::Boolean& isRotation)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*, ::System::Object*, ::System::Boolean&))((::PBYTE)hIl2Cpp + DEST_MATH_EIGENDECOMPOSITION_TRIDIAGONAL3_OFFSET))(diagonal, subdiagonal, matrix, isRotation);
		}

		static ::System::Void TridiagonalN(::Il2CppArray<::System::Single>* diagonal, ::Il2CppArray<::System::Single>* subdiagonal, ::System::Object* matrix, ::System::Boolean& isRotation)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*, ::System::Object*, ::System::Boolean&))((::PBYTE)hIl2Cpp + DEST_MATH_EIGENDECOMPOSITION_TRIDIAGONALN_OFFSET))(diagonal, subdiagonal, matrix, isRotation);
		}

		static ::System::Boolean QLAlgorithm(::Il2CppArray<::System::Single>* diagonal, ::Il2CppArray<::System::Single>* subdiagonal, ::System::Object* matrix)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*, ::System::Object*))((::PBYTE)hIl2Cpp + DEST_MATH_EIGENDECOMPOSITION_QLALGORITHM_OFFSET))(diagonal, subdiagonal, matrix);
		}

		static ::System::Void IncreasingSort(::Il2CppArray<::System::Single>* diagonal, ::Il2CppArray<::System::Single>* subdiagonal, ::System::Object* matrix, ::System::Boolean& isRotation)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*, ::System::Object*, ::System::Boolean&))((::PBYTE)hIl2Cpp + DEST_MATH_EIGENDECOMPOSITION_INCREASINGSORT_OFFSET))(diagonal, subdiagonal, matrix, isRotation);
		}

		static ::System::Void DecreasingSort(::Il2CppArray<::System::Single>* diagonal, ::Il2CppArray<::System::Single>* subdiagonal, ::System::Object* matrix, ::System::Boolean& isRotation)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*, ::System::Object*, ::System::Boolean&))((::PBYTE)hIl2Cpp + DEST_MATH_EIGENDECOMPOSITION_DECREASINGSORT_OFFSET))(diagonal, subdiagonal, matrix, isRotation);
		}

		static ::System::Void GuaranteeRotation(::System::Object* matrix, ::System::Boolean isRotation)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + DEST_MATH_EIGENDECOMPOSITION_GUARANTEEROTATION_OFFSET))(matrix, isRotation);
		}

		static ::Dest::Math::EigenData* Solve(::System::Object* symmetricSquareMatrix, ::System::Boolean increasingSort)
		{
			return ((::Dest::Math::EigenData*(*)(::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + DEST_MATH_EIGENDECOMPOSITION_SOLVE_OFFSET))(symmetricSquareMatrix, increasingSort);
		}
	};
}
