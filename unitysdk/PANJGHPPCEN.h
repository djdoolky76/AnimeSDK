#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class CakeRaceWaitCatGotoPosZ; }
namespace RPG::GameCore { class TaskContext; }

#define PANJGHPPCEN_CTOR_OFFSET UNITYSDK_OFFSET(0xBFD8640)
#define PANJGHPPCEN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBFD8650)
#define PANJGHPPCEN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBFD8810)
#define PANJGHPPCEN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBFD8A60)
#define PANJGHPPCEN_TICK_OFFSET UNITYSDK_OFFSET(0xBFD8AB0)
#define PANJGHPPCEN__ONTASKBEGIN_B__4_0_OFFSET UNITYSDK_OFFSET(0xBFD8B10)

	class PANJGHPPCEN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::CakeRaceWaitCatGotoPosZ* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CakeRaceWaitCatGotoPosZ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CakeRaceWaitCatGotoPosZ*))((::PBYTE)hIl2Cpp + PANJGHPPCEN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PANJGHPPCEN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PANJGHPPCEN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PANJGHPPCEN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PANJGHPPCEN_TICK_OFFSET))(this, a1);
		}

		::System::Void _OnTaskBegin_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PANJGHPPCEN__ONTASKBEGIN_B__4_0_OFFSET))(this);
		}

	};
