#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareUnusedUltraSkillCount; }
namespace RPG::GameCore { class TaskContext; }

#define HPANFBIADLG_CTOR_OFFSET UNITYSDK_OFFSET(0x15DB4260)
#define HPANFBIADLG_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15DB4290)

inline static constexpr unsigned int HPANFBIADLG_TypeDefinitionIndex = 54586;

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
