#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByPamNormalActionSwitch; }
namespace RPG::GameCore { class TaskContext; }

#define NNLMFEGOOHP_CTOR_OFFSET UNITYSDK_OFFSET(0xBCC3AC0)
#define NNLMFEGOOHP_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBCC3AF0)

inline static constexpr unsigned int NNLMFEGOOHP_TypeDefinitionIndex = 53159;

	class NNLMFEGOOHP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByPamNormalActionSwitch* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByPamNormalActionSwitch*))((::PBYTE)hIl2Cpp + NNLMFEGOOHP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NNLMFEGOOHP_EVALUATE_OFFSET))(this);
		}

	};
