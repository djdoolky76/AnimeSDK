#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvByCheckWindowInSlot; }
namespace RPG::GameCore { class TaskContext; }

#define GDMCDPJMLKN_CTOR_OFFSET UNITYSDK_OFFSET(0x159A4E50)
#define GDMCDPJMLKN_EVALUATE_OFFSET UNITYSDK_OFFSET(0x159A4E80)

	class GDMCDPJMLKN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvByCheckWindowInSlot* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvByCheckWindowInSlot*))((::PBYTE)hIl2Cpp + GDMCDPJMLKN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMCDPJMLKN_EVALUATE_OFFSET))(this);
		}

	};
