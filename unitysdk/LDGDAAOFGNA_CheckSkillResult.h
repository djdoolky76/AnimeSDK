#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int LDGDAAOFGNA_CheckSkillResult_TypeDefinitionIndex = 77012;

	enum class LDGDAAOFGNA_CheckSkillResult : ::System::Int32
	{
		OK = 0,
		HasCoolDown = 1,
		ConditionCheckFail = 2,
		SkillNotExist = 3,
	};
