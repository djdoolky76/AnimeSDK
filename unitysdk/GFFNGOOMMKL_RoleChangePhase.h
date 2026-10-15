#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int GFFNGOOMMKL_RoleChangePhase_TypeDefinitionIndex = 76596;

	enum class GFFNGOOMMKL_RoleChangePhase : ::System::Int32
	{
		Start = 0,
		WaitSkipTutorial = 1,
		WaitSpecialRule = 2,
		WaitRoleChangeLogic = 3,
		WaitRoleChangeShow = 4,
	};
