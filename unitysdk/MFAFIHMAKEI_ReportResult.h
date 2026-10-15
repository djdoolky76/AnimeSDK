#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int MFAFIHMAKEI_ReportResult_TypeDefinitionIndex = 58638;

	enum class MFAFIHMAKEI_ReportResult : ::System::Int32
	{
		Success = 1,
		FailAndMustSucc = 2,
		Fail = 3,
		Cancel = 4,
	};
