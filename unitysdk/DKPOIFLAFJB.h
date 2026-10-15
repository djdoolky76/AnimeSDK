#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdventureByNPCMonsterPurposeType; }
namespace RPG::GameCore { class TaskContext; }

#define DKPOIFLAFJB_CTOR_OFFSET UNITYSDK_OFFSET(0xF88EFF0)
#define DKPOIFLAFJB_EVALUATE_OFFSET UNITYSDK_OFFSET(0xF88F020)

	class DKPOIFLAFJB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureByNPCMonsterPurposeType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureByNPCMonsterPurposeType*))((::PBYTE)hIl2Cpp + DKPOIFLAFJB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DKPOIFLAFJB_EVALUATE_OFFSET))(this);
		}

	};
