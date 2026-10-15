#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCheckModifierDeathSource; }
namespace RPG::GameCore { class TaskContext; }

#define MMLOIAIKNNA_CTOR_OFFSET UNITYSDK_OFFSET(0xB9D85B0)
#define MMLOIAIKNNA_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB9D85E0)

	class MMLOIAIKNNA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckModifierDeathSource* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckModifierDeathSource*))((::PBYTE)hIl2Cpp + MMLOIAIKNNA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MMLOIAIKNNA_EVALUATE_OFFSET))(this);
		}

	};
