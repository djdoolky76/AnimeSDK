#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class BNBOAMEBAOE;
namespace RPG::GameCore { class GridFightShowFullScreenCutIn; }
namespace RPG::GameCore { class TaskContext; }

#define HDDEBNNKJBG_BKPGNCBNMGP_OFFSET UNITYSDK_OFFSET(0x15C30EC0)
#define HDDEBNNKJBG_CTOR_OFFSET UNITYSDK_OFFSET(0x15C30EB0)
#define HDDEBNNKJBG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C313E0)
#define HDDEBNNKJBG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C30F10)
#define HDDEBNNKJBG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15C31330)
#define HDDEBNNKJBG_TICK_OFFSET UNITYSDK_OFFSET(0x15C31380)
#define HDDEBNNKJBG__ONTASKBEGIN_B__2_0_OFFSET UNITYSDK_OFFSET(0x15C31430)

	class HDDEBNNKJBG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::GridFightShowFullScreenCutIn* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::BNBOAMEBAOE* JLMAKNFAEBH; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GridFightShowFullScreenCutIn* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GridFightShowFullScreenCutIn*))((::PBYTE)hIl2Cpp + HDDEBNNKJBG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void BKPGNCBNMGP(::BNBOAMEBAOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNBOAMEBAOE*))((::PBYTE)hIl2Cpp + HDDEBNNKJBG_BKPGNCBNMGP_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDEBNNKJBG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDEBNNKJBG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HDDEBNNKJBG_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDEBNNKJBG_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDEBNNKJBG__ONTASKBEGIN_B__2_0_OFFSET))(this);
		}

	};
