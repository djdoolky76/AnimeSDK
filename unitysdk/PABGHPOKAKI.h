#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsCurrentSkillAllowMultiTarget; }
namespace RPG::GameCore { class TaskContext; }

#define PABGHPOKAKI_CTOR_OFFSET UNITYSDK_OFFSET(0xC8C5DF0)
#define PABGHPOKAKI_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC8C5E20)

inline static constexpr unsigned int PABGHPOKAKI_TypeDefinitionIndex = 55765;

	class PABGHPOKAKI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsCurrentSkillAllowMultiTarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsCurrentSkillAllowMultiTarget*))((::PBYTE)hIl2Cpp + PABGHPOKAKI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PABGHPOKAKI_EVALUATE_OFFSET))(this);
		}

	};
