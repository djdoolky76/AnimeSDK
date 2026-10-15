#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvByCheckWindowPermCodes; }
namespace RPG::GameCore { class TaskContext; }

#define EGCMNMODOMN_CTOR_OFFSET UNITYSDK_OFFSET(0x13A60AB0)
#define EGCMNMODOMN_EVALUATE_OFFSET UNITYSDK_OFFSET(0x13A60AE0)

inline static constexpr unsigned int EGCMNMODOMN_TypeDefinitionIndex = 52820;

	class EGCMNMODOMN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvByCheckWindowPermCodes* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvByCheckWindowPermCodes*))((::PBYTE)hIl2Cpp + EGCMNMODOMN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EGCMNMODOMN_EVALUATE_OFFSET))(this);
		}

	};
