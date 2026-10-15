#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareNPCMonsterID; }
namespace RPG::GameCore { class TaskContext; }

#define GHLHPFKCFLB_CTOR_OFFSET UNITYSDK_OFFSET(0x15A28550)
#define GHLHPFKCFLB_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15A28580)

inline static constexpr unsigned int GHLHPFKCFLB_TypeDefinitionIndex = 52581;

	class GHLHPFKCFLB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareNPCMonsterID* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareNPCMonsterID*))((::PBYTE)hIl2Cpp + GHLHPFKCFLB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHLHPFKCFLB_EVALUATE_OFFSET))(this);
		}

	};
