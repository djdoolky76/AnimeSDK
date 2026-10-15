#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareSkillUsageLimit; }
namespace RPG::GameCore { class TaskContext; }

#define CMCOPFPANJC_CTOR_OFFSET UNITYSDK_OFFSET(0xDA27CD0)
#define CMCOPFPANJC_EVALUATE_OFFSET UNITYSDK_OFFSET(0xDA27D00)

inline static constexpr unsigned int CMCOPFPANJC_TypeDefinitionIndex = 54567;

	class CMCOPFPANJC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareSkillUsageLimit* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareSkillUsageLimit*))((::PBYTE)hIl2Cpp + CMCOPFPANJC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMCOPFPANJC_EVALUATE_OFFSET))(this);
		}

	};
