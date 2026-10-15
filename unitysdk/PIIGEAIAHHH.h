#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvByContainBehaviorFlag; }
namespace RPG::GameCore { class TaskContext; }

#define PIIGEAIAHHH_CTOR_OFFSET UNITYSDK_OFFSET(0xC2616F0)
#define PIIGEAIAHHH_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC261720)

inline static constexpr unsigned int PIIGEAIAHHH_TypeDefinitionIndex = 54453;

	class PIIGEAIAHHH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvByContainBehaviorFlag* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvByContainBehaviorFlag*))((::PBYTE)hIl2Cpp + PIIGEAIAHHH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIIGEAIAHHH_EVALUATE_OFFSET))(this);
		}

	};
