#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGraphComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerRogueDialogue; }

#define MBODELIGCHC_CTOR_OFFSET UNITYSDK_OFFSET(0xB86FE30)
#define MBODELIGCHC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB86FE40)
#define MBODELIGCHC_GMCIOCENFKM_OFFSET UNITYSDK_OFFSET(0xB870690)
#define MBODELIGCHC_JLFFDJIFDDF_OFFSET UNITYSDK_OFFSET(0xB8702A0)
#define MBODELIGCHC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB86FE80)
#define MBODELIGCHC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB8705E0)
#define MBODELIGCHC_TICK_OFFSET UNITYSDK_OFFSET(0xB870630)
#define MBODELIGCHC__ONTASKBEGIN_B__2_0_OFFSET UNITYSDK_OFFSET(0xB8709D0)

	class MBODELIGCHC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::LevelGraphComponent* JBCGBIOECCL; // 0x20
		::RPG::GameCore::TriggerRogueDialogue* OFKGLJOAMLD; // 0x28
		::System::UInt32 ICLEAOCAEII; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerRogueDialogue* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerRogueDialogue*))((::PBYTE)hIl2Cpp + MBODELIGCHC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBODELIGCHC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBODELIGCHC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBODELIGCHC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MBODELIGCHC_TICK_OFFSET))(this, a1);
		}

		::System::Void JLFFDJIFDDF(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MBODELIGCHC_JLFFDJIFDDF_OFFSET))(this, a1, a2);
		}

		::System::Void GMCIOCENFKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBODELIGCHC_GMCIOCENFKM_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBODELIGCHC__ONTASKBEGIN_B__2_0_OFFSET))(this);
		}

	};
