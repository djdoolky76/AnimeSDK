#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class BySaveModelWhenDead; }
namespace RPG::GameCore { class TaskContext; }

#define BHPDMEELLBK_CTOR_OFFSET UNITYSDK_OFFSET(0xB492C60)
#define BHPDMEELLBK_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB492C90)

	class BHPDMEELLBK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BySaveModelWhenDead* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BySaveModelWhenDead*))((::PBYTE)hIl2Cpp + BHPDMEELLBK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPDMEELLBK_EVALUATE_OFFSET))(this);
		}

	};
