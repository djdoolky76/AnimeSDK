#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareQuestGetReward; }
namespace RPG::GameCore { class TaskContext; }

#define NIJBCFPHMMD_CTOR_OFFSET UNITYSDK_OFFSET(0xBBED820)
#define NIJBCFPHMMD_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBBED850)

	class NIJBCFPHMMD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareQuestGetReward* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareQuestGetReward*))((::PBYTE)hIl2Cpp + NIJBCFPHMMD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NIJBCFPHMMD_EVALUATE_OFFSET))(this);
		}

	};
