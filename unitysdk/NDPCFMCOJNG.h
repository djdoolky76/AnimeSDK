#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCurrentContainAbilityTag; }
namespace RPG::GameCore { class TaskContext; }

#define NDPCFMCOJNG_CTOR_OFFSET UNITYSDK_OFFSET(0xBB4FBB0)
#define NDPCFMCOJNG_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBB4FBE0)

inline static constexpr unsigned int NDPCFMCOJNG_TypeDefinitionIndex = 54596;

	class NDPCFMCOJNG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCurrentContainAbilityTag* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCurrentContainAbilityTag*))((::PBYTE)hIl2Cpp + NDPCFMCOJNG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NDPCFMCOJNG_EVALUATE_OFFSET))(this);
		}

	};
