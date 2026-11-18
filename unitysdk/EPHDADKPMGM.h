#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int EPHDADKPMGM_TypeDefinitionIndex = 39752;

enum class EPHDADKPMGM : ::System::Int32
{
	AuthorityLocal = 3,
	AuthorityReplicated = 1,
	NotExecuted = 0,
	AllAllowed = 2,
	MpTotallyLocal = 4,
};
