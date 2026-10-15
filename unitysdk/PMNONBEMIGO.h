#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByAttackType; }
namespace RPG::GameCore { class TaskContext; }

#define PMNONBEMIGO_CTOR_OFFSET UNITYSDK_OFFSET(0xC3212C0)
#define PMNONBEMIGO_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC3212F0)

inline static constexpr unsigned int PMNONBEMIGO_TypeDefinitionIndex = 54485;

	class PMNONBEMIGO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByAttackType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByAttackType*))((::PBYTE)hIl2Cpp + PMNONBEMIGO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PMNONBEMIGO_EVALUATE_OFFSET))(this);
		}

	};
