#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareQuestProgress; }
namespace RPG::GameCore { class TaskContext; }

#define JMCJPBCHONI_CTOR_OFFSET UNITYSDK_OFFSET(0xBA89700)
#define JMCJPBCHONI_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBA89730)

inline static constexpr unsigned int JMCJPBCHONI_TypeDefinitionIndex = 54298;

	class JMCJPBCHONI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareQuestProgress* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareQuestProgress*))((::PBYTE)hIl2Cpp + JMCJPBCHONI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JMCJPBCHONI_EVALUATE_OFFSET))(this);
		}

	};
