#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareHeartDialTracingNPC; }
namespace RPG::GameCore { class TaskContext; }

#define KPMNMDPGCPH_CTOR_OFFSET UNITYSDK_OFFSET(0xB5C23A0)
#define KPMNMDPGCPH_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB5C23D0)

	class KPMNMDPGCPH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareHeartDialTracingNPC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareHeartDialTracingNPC*))((::PBYTE)hIl2Cpp + KPMNMDPGCPH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KPMNMDPGCPH_EVALUATE_OFFSET))(this);
		}

	};
