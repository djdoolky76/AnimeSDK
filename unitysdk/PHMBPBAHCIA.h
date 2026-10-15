#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByBattleConditionProgress; }
namespace RPG::GameCore { class TaskContext; }

#define PHMBPBAHCIA_CTOR_OFFSET UNITYSDK_OFFSET(0xC255870)
#define PHMBPBAHCIA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC255A00)

inline static constexpr unsigned int PHMBPBAHCIA_TypeDefinitionIndex = 58536;

	class PHMBPBAHCIA
	{
	public:
		::RPG::GameCore::StringHash IKPIIDMENNM; // 0x28
		::RPG::GameCore::StringHash IOCKIKFGCLK; // 0x2C
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByBattleConditionProgress* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByBattleConditionProgress*))((::PBYTE)hIl2Cpp + PHMBPBAHCIA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHMBPBAHCIA_ONTASKBEGIN_OFFSET))(this);
		}

	};
