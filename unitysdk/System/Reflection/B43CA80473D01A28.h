#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Reflection
{
	inline static constexpr unsigned int B43CA80473D01A28_TypeDefinitionIndex = 10558;

	enum class B43CA80473D01A28 : ::System::Int32
	{
		None = 0,
		VarianceMask = 3,
		Covariant = 1,
		Contravariant = 2,
		SpecialConstraintMask = 28,
		ReferenceTypeConstraint = 4,
		NotNullableValueTypeConstraint = 8,
		DefaultConstructorConstraint = 16,
	};
}
