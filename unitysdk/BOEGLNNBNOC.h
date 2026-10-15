#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RtByIsSkillUsing; }
namespace RPG::GameCore { class TaskContext; }

#define BOEGLNNBNOC_CTOR_OFFSET UNITYSDK_OFFSET(0xC18E110)
#define BOEGLNNBNOC_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC18E140)

inline static constexpr unsigned int BOEGLNNBNOC_TypeDefinitionIndex = 53925;

	class BOEGLNNBNOC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtByIsSkillUsing* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtByIsSkillUsing*))((::PBYTE)hIl2Cpp + BOEGLNNBNOC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOEGLNNBNOC_EVALUATE_OFFSET))(this);
		}

	};
