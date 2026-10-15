#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareSkillLevel; }
namespace RPG::GameCore { class TaskContext; }

#define LHCPBGJFOOB_CTOR_OFFSET UNITYSDK_OFFSET(0xB6A9900)
#define LHCPBGJFOOB_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB6A9930)

inline static constexpr unsigned int LHCPBGJFOOB_TypeDefinitionIndex = 54566;

	class LHCPBGJFOOB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareSkillLevel* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareSkillLevel*))((::PBYTE)hIl2Cpp + LHCPBGJFOOB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LHCPBGJFOOB_EVALUATE_OFFSET))(this);
		}

	};
