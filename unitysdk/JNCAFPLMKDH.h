#pragma once
#include "unitysdk/unitysdk.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ReceiveDynamicSkillTargetSelection; }
namespace RPG::GameCore { class TaskContext; }

#define JNCAFPLMKDH_BBLAGJIFKEK_OFFSET UNITYSDK_OFFSET(0x1A0C17F0)
#define JNCAFPLMKDH_CTOR_OFFSET UNITYSDK_OFFSET(0x1A0C11A0)
#define JNCAFPLMKDH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A0C12B0)
#define JNCAFPLMKDH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A0C1430)
#define JNCAFPLMKDH_TICK_OFFSET UNITYSDK_OFFSET(0x1A0C1860)

inline static constexpr unsigned int JNCAFPLMKDH_TypeDefinitionIndex = 56460;

	class JNCAFPLMKDH
	{
	public:
		::KFELGAIGHAP* NOPDCJAEDBG; // 0x28
		::KFELGAIGHAP* IMLDGCEMCCM; // 0x30
		::KFELGAIGHAP* JOBCHGELIKG; // 0x38
		::RPG::GameCore::GameEntity* AKJFHPNOGEJ; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ReceiveDynamicSkillTargetSelection* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ReceiveDynamicSkillTargetSelection*))((::PBYTE)hIl2Cpp + JNCAFPLMKDH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNCAFPLMKDH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNCAFPLMKDH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JNCAFPLMKDH_TICK_OFFSET))(this, a1);
		}

		::System::Void BBLAGJIFKEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNCAFPLMKDH_BBLAGJIFKEK_OFFSET))(this);
		}

	};
