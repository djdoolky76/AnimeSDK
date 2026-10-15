#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitWaveBattlePerformFinish; }

#define DGDBDFOPBIC_CTOR_OFFSET UNITYSDK_OFFSET(0xE8441B0)
#define DGDBDFOPBIC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE8441C0)
#define DGDBDFOPBIC_IGHFKHCJPKM_OFFSET UNITYSDK_OFFSET(0xE844320)
#define DGDBDFOPBIC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE844260)
#define DGDBDFOPBIC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE844210)
#define DGDBDFOPBIC_TICK_OFFSET UNITYSDK_OFFSET(0xE8443A0)

	class DGDBDFOPBIC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitWaveBattlePerformFinish* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitWaveBattlePerformFinish*))((::PBYTE)hIl2Cpp + DGDBDFOPBIC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDBDFOPBIC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDBDFOPBIC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDBDFOPBIC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DGDBDFOPBIC_TICK_OFFSET))(this, a1);
		}

		::System::Boolean IGHFKHCJPKM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDBDFOPBIC_IGHFKHCJPKM_OFFSET))(this);
		}

	};
