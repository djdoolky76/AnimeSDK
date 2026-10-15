#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareUnusedUltraSkillCount; }
namespace RPG::GameCore { class TaskContext; }

#define HPANFBIADLG_CTOR_OFFSET UNITYSDK_OFFSET(0x15DC0AD0)
#define HPANFBIADLG_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15DC0B00)

	class HPANFBIADLG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareUnusedUltraSkillCount* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareUnusedUltraSkillCount*))((::PBYTE)hIl2Cpp + HPANFBIADLG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPANFBIADLG_EVALUATE_OFFSET))(this);
		}

	};
