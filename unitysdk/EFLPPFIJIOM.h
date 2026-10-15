#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByRaidTargetProgress; }
namespace RPG::GameCore { class TaskContext; }

#define EFLPPFIJIOM_CTOR_OFFSET UNITYSDK_OFFSET(0x13A5B460)
#define EFLPPFIJIOM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13A5B5F0)

inline static constexpr unsigned int EFLPPFIJIOM_TypeDefinitionIndex = 58539;

	class EFLPPFIJIOM
	{
	public:
		::RPG::GameCore::StringHash IOCKIKFGCLK; // 0x28
		::RPG::GameCore::StringHash IKPIIDMENNM; // 0x2C
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByRaidTargetProgress* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByRaidTargetProgress*))((::PBYTE)hIl2Cpp + EFLPPFIJIOM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLPPFIJIOM_ONTASKBEGIN_OFFSET))(this);
		}

	};
