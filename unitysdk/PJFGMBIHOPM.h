#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByMonsterCharmAvailable; }
namespace RPG::GameCore { class TaskContext; }

#define PJFGMBIHOPM_CTOR_OFFSET UNITYSDK_OFFSET(0x1A9E8DE0)
#define PJFGMBIHOPM_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1A9E8E10)

inline static constexpr unsigned int PJFGMBIHOPM_TypeDefinitionIndex = 56122;

	class PJFGMBIHOPM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByMonsterCharmAvailable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByMonsterCharmAvailable*))((::PBYTE)hIl2Cpp + PJFGMBIHOPM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFGMBIHOPM_EVALUATE_OFFSET))(this);
		}

	};
