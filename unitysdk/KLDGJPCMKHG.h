#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ClockParkStoryCharacterTriggerDialog; }
namespace RPG::GameCore { class TaskContext; }

#define KLDGJPCMKHG_CTOR_OFFSET UNITYSDK_OFFSET(0xB4ED7A0)
#define KLDGJPCMKHG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB4ED8B0)
#define KLDGJPCMKHG_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xB4ED7B0)
#define KLDGJPCMKHG_ONSKIP_OFFSET UNITYSDK_OFFSET(0xB4ED7C0)
#define KLDGJPCMKHG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB4ED950)
#define KLDGJPCMKHG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB4EDA70)
#define KLDGJPCMKHG_TICK_OFFSET UNITYSDK_OFFSET(0xB4ED8F0)

	class KLDGJPCMKHG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::ClockParkStoryCharacterTriggerDialog* IGHAHBNLIJA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClockParkStoryCharacterTriggerDialog* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClockParkStoryCharacterTriggerDialog*))((::PBYTE)hIl2Cpp + KLDGJPCMKHG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDGJPCMKHG_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDGJPCMKHG_ONSKIP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDGJPCMKHG_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KLDGJPCMKHG_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDGJPCMKHG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDGJPCMKHG_ONTASKRESET_OFFSET))(this);
		}

	};
