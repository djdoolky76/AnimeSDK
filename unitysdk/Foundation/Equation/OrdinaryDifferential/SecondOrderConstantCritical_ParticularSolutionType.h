#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::Equation::OrdinaryDifferential
{
	inline static constexpr unsigned int SecondOrderConstantCritical_ParticularSolutionType_TypeDefinitionIndex = 9026;

	enum class SecondOrderConstantCritical_ParticularSolutionType : ::System::Int32
	{
		Constant = 0,
		SecondOrderPolynomial = 1,
	};
}
