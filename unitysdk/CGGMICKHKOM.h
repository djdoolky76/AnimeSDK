#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class NotifyRougeGoalFinish; }
namespace RPG::GameCore { class TaskContext; }

#define CGGMICKHKOM_CTOR_OFFSET UNITYSDK_OFFSET(0xCC883F0)
#define CGGMICKHKOM_DCIPIIAJJMM_OFFSET UNITYSDK_OFFSET(0xCC88620)
#define CGGMICKHKOM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCC88420)

	class CGGMICKHKOM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::NotifyRougeGoalFinish* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::NotifyRougeGoalFinish*))((::PBYTE)hIl2Cpp + CGGMICKHKOM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGGMICKHKOM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean DCIPIIAJJMM(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CGGMICKHKOM_DCIPIIAJJMM_OFFSET))(this, a1);
		}

	};
