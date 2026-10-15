#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RtByHasSelectSkill; }
namespace RPG::GameCore { class TaskContext; }

#define FBLMCAHPGBE_CTOR_OFFSET UNITYSDK_OFFSET(0x156A3250)
#define FBLMCAHPGBE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x156A3280)

inline static constexpr unsigned int FBLMCAHPGBE_TypeDefinitionIndex = 53921;

	class FBLMCAHPGBE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtByHasSelectSkill* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtByHasSelectSkill*))((::PBYTE)hIl2Cpp + FBLMCAHPGBE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBLMCAHPGBE_EVALUATE_OFFSET))(this);
		}

	};
