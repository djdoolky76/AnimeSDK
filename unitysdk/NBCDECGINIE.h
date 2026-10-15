#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareTeamFormationRowIndex; }
namespace RPG::GameCore { class TaskContext; }

#define NBCDECGINIE_CTOR_OFFSET UNITYSDK_OFFSET(0xBABD5E0)
#define NBCDECGINIE_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBABD610)

inline static constexpr unsigned int NBCDECGINIE_TypeDefinitionIndex = 54582;

	class NBCDECGINIE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareTeamFormationRowIndex* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareTeamFormationRowIndex*))((::PBYTE)hIl2Cpp + NBCDECGINIE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBCDECGINIE_EVALUATE_OFFSET))(this);
		}

	};
