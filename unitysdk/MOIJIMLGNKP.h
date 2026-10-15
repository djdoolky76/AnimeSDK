#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdventureByIsNPCControlled; }
namespace RPG::GameCore { class TaskContext; }

#define MOIJIMLGNKP_CTOR_OFFSET UNITYSDK_OFFSET(0xBA2CE00)
#define MOIJIMLGNKP_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBA2CE30)

	class MOIJIMLGNKP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureByIsNPCControlled* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureByIsNPCControlled*))((::PBYTE)hIl2Cpp + MOIJIMLGNKP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOIJIMLGNKP_EVALUATE_OFFSET))(this);
		}

	};
