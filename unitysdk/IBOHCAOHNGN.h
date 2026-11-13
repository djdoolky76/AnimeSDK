#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsForbidChangeOthersActionDelay; }
namespace RPG::GameCore { class TaskContext; }

#define IBOHCAOHNGN_CTOR_OFFSET UNITYSDK_OFFSET(0x188C0860)
#define IBOHCAOHNGN_EVALUATE_OFFSET UNITYSDK_OFFSET(0x188C0890)

inline static constexpr unsigned int IBOHCAOHNGN_TypeDefinitionIndex = 56246;

	class IBOHCAOHNGN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsForbidChangeOthersActionDelay* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsForbidChangeOthersActionDelay*))((::PBYTE)hIl2Cpp + IBOHCAOHNGN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IBOHCAOHNGN_EVALUATE_OFFSET))(this);
		}

	};
