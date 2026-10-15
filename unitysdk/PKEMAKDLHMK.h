#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class DevPlayPerformanceE; }
namespace RPG::GameCore { class LevelGraphComponent; }
namespace RPG::GameCore { class TaskContext; }

#define PKEMAKDLHMK_CTOR_OFFSET UNITYSDK_OFFSET(0xC2B3FB0)
#define PKEMAKDLHMK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC2B3FC0)
#define PKEMAKDLHMK_LCLJHMOCHJD_OFFSET UNITYSDK_OFFSET(0xC2B41F0)
#define PKEMAKDLHMK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC2B4070)
#define PKEMAKDLHMK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC2B4130)
#define PKEMAKDLHMK_TICK_OFFSET UNITYSDK_OFFSET(0xC2B4180)

	class PKEMAKDLHMK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* APKCDIIEJLO; // 0x18
		::RPG::GameCore::DevPlayPerformanceE* EJJEEJENLDA; // 0x20
		::RPG::GameCore::LevelGraphComponent* HDHOHOOHBPF; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DevPlayPerformanceE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DevPlayPerformanceE*))((::PBYTE)hIl2Cpp + PKEMAKDLHMK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKEMAKDLHMK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKEMAKDLHMK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKEMAKDLHMK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PKEMAKDLHMK_TICK_OFFSET))(this, a1);
		}

		::System::Void LCLJHMOCHJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKEMAKDLHMK_LCLJHMOCHJD_OFFSET))(this);
		}

	};
