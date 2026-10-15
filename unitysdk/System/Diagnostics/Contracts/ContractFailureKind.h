#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Diagnostics::Contracts
{
	enum class ContractFailureKind : ::System::Int32
	{
		Precondition = 0,
		Postcondition = 1,
		PostconditionOnException = 2,
		Invariant = 3,
		Assert = 4,
		Assume = 5,
	};
}
