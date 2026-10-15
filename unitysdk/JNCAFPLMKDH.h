#pragma once
#include "unitysdk/unitysdk.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ReceiveDynamicSkillTargetSelection; }
namespace RPG::GameCore { class TaskContext; }

#define JNCAFPLMKDH_BBLAGJIFKEK_OFFSET UNITYSDK_OFFSET(0xB272380)
#define JNCAFPLMKDH_CTOR_OFFSET UNITYSDK_OFFSET(0xB271D70)
#define JNCAFPLMKDH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB271E80)
#define JNCAFPLMKDH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB272000)
#define JNCAFPLMKDH_TICK_OFFSET UNITYSDK_OFFSET(0xB272410)

inline static constexpr unsigned int JNCAFPLMKDH_TypeDefinitionIndex = 55279;

	class JNCAFPLMKDH
	{
	public:
		::KFELGAIGHAP* IMLDGCEMCCM; // 0x28
		::KFELGAIGHAP* JOBCHGELIKG; // 0x30
		::RPG::GameCore::GameEntity* AKJFHPNOGEJ; // 0x38
		::KFELGAIGHAP* NOPDCJAEDBG; // 0x40
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
