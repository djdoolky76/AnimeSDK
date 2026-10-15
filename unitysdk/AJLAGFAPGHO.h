#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCheckModifierCallBackBehaviorFlag; }
namespace RPG::GameCore { class TaskContext; }

#define AJLAGFAPGHO_CTOR_OFFSET UNITYSDK_OFFSET(0x12CC4250)
#define AJLAGFAPGHO_EVALUATE_OFFSET UNITYSDK_OFFSET(0x12CC4280)

inline static constexpr unsigned int AJLAGFAPGHO_TypeDefinitionIndex = 54501;

	class AJLAGFAPGHO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckModifierCallBackBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckModifierCallBackBehaviorFlag*))((::PBYTE)hIl2Cpp + AJLAGFAPGHO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AJLAGFAPGHO_EVALUATE_OFFSET))(this);
		}

	};
