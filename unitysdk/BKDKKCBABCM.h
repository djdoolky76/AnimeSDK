#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsSwordTrainingSkillCanLearn; }
namespace RPG::GameCore { class TaskContext; }

#define BKDKKCBABCM_CTOR_OFFSET UNITYSDK_OFFSET(0xB7ADEA0)
#define BKDKKCBABCM_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB7ADEE0)

	class BKDKKCBABCM
	{
	public:
		::System::UInt32 CHPOANEOFCO; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsSwordTrainingSkillCanLearn* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsSwordTrainingSkillCanLearn*))((::PBYTE)hIl2Cpp + BKDKKCBABCM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BKDKKCBABCM_EVALUATE_OFFSET))(this);
		}

	};
