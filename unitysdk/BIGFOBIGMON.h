#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByContainsCharacterState; }
namespace RPG::GameCore { class TaskContext; }

#define BIGFOBIGMON_CTOR_OFFSET UNITYSDK_OFFSET(0xBE3B0D0)
#define BIGFOBIGMON_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBE3B100)

inline static constexpr unsigned int BIGFOBIGMON_TypeDefinitionIndex = 56064;

	class BIGFOBIGMON
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByContainsCharacterState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByContainsCharacterState*))((::PBYTE)hIl2Cpp + BIGFOBIGMON_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGFOBIGMON_EVALUATE_OFFSET))(this);
		}

	};
