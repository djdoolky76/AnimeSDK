#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdventureTriggerMove; }
namespace RPG::GameCore { class TaskContext; }

#define HKEODNKCBMG_CTOR_OFFSET UNITYSDK_OFFSET(0x15D43090)

inline static constexpr unsigned int HKEODNKCBMG_TypeDefinitionIndex = 57927;

	class HKEODNKCBMG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureTriggerMove* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureTriggerMove*))((::PBYTE)hIl2Cpp + HKEODNKCBMG_CTOR_OFFSET))(this, a1, a2);
		}

	};
