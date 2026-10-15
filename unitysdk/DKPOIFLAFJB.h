#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdventureByNPCMonsterPurposeType; }
namespace RPG::GameCore { class TaskContext; }

#define DKPOIFLAFJB_CTOR_OFFSET UNITYSDK_OFFSET(0xF889600)
#define DKPOIFLAFJB_EVALUATE_OFFSET UNITYSDK_OFFSET(0xF889630)

inline static constexpr unsigned int DKPOIFLAFJB_TypeDefinitionIndex = 54473;

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
