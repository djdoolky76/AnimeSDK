#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByLocalWin; }
namespace RPG::GameCore { class TaskContext; }

#define POGNJKPKMPO_CTOR_OFFSET UNITYSDK_OFFSET(0xC361090)
#define POGNJKPKMPO_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC3610C0)

	class POGNJKPKMPO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByLocalWin* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByLocalWin*))((::PBYTE)hIl2Cpp + POGNJKPKMPO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + POGNJKPKMPO_EVALUATE_OFFSET))(this);
		}

	};
