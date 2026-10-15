#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareQuestProgress; }
namespace RPG::GameCore { class TaskContext; }

#define JMCJPBCHONI_CTOR_OFFSET UNITYSDK_OFFSET(0xB25E5E0)
#define JMCJPBCHONI_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB25E610)

inline static constexpr unsigned int JMCJPBCHONI_TypeDefinitionIndex = 53136;

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
