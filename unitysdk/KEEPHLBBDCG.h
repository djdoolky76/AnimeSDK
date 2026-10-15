#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsInCustomTeamFormation; }
namespace RPG::GameCore { class TaskContext; }

#define KEEPHLBBDCG_CTOR_OFFSET UNITYSDK_OFFSET(0xB36E6F0)
#define KEEPHLBBDCG_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB36E720)

inline static constexpr unsigned int KEEPHLBBDCG_TypeDefinitionIndex = 54906;

	class KEEPHLBBDCG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsInCustomTeamFormation* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsInCustomTeamFormation*))((::PBYTE)hIl2Cpp + KEEPHLBBDCG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KEEPHLBBDCG_EVALUATE_OFFSET))(this);
		}

	};
