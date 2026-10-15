#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvByCheckNeedWaitServerCheckSkillResult; }
namespace RPG::GameCore { class TaskContext; }

#define PPMADDAAOGH_CTOR_OFFSET UNITYSDK_OFFSET(0xC391D80)
#define PPMADDAAOGH_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC391DB0)

	class PPMADDAAOGH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvByCheckNeedWaitServerCheckSkillResult* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvByCheckNeedWaitServerCheckSkillResult*))((::PBYTE)hIl2Cpp + PPMADDAAOGH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PPMADDAAOGH_EVALUATE_OFFSET))(this);
		}

	};
