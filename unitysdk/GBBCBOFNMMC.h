#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCheckIsLimboRevivable; }
namespace RPG::GameCore { class TaskContext; }

#define GBBCBOFNMMC_CTOR_OFFSET UNITYSDK_OFFSET(0x1B878380)
#define GBBCBOFNMMC_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1B8783B0)

inline static constexpr unsigned int GBBCBOFNMMC_TypeDefinitionIndex = 55664;

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
