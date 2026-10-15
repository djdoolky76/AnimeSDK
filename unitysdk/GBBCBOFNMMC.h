#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCheckIsLimboRevivable; }
namespace RPG::GameCore { class TaskContext; }

#define GBBCBOFNMMC_CTOR_OFFSET UNITYSDK_OFFSET(0x1593C7E0)
#define GBBCBOFNMMC_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1593C810)

inline static constexpr unsigned int GBBCBOFNMMC_TypeDefinitionIndex = 54499;

	class GBBCBOFNMMC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckIsLimboRevivable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckIsLimboRevivable*))((::PBYTE)hIl2Cpp + GBBCBOFNMMC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GBBCBOFNMMC_EVALUATE_OFFSET))(this);
		}

	};
