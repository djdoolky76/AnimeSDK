#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::Equation::OrdinaryDifferential
{
	inline static constexpr unsigned int SecondOrderConstant_ParticularSolutionType_TypeDefinitionIndex = 9069;

	enum class SecondOrderConstant_ParticularSolutionType : ::System::Int32
	{
		FirstOrderPolynomial = 1,
		SecondOrderPolynomial = 2,
		Constant = 0,
	};
}
