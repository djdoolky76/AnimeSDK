#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class BNBOAMEBAOE;
namespace RPG::GameCore { class GridFightShowFullScreenCutIn; }
namespace RPG::GameCore { class TaskContext; }

#define HDDEBNNKJBG_BKPGNCBNMGP_OFFSET UNITYSDK_OFFSET(0x16B74570)
#define HDDEBNNKJBG_CTOR_OFFSET UNITYSDK_OFFSET(0x16B74560)
#define HDDEBNNKJBG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16B74B20)
#define HDDEBNNKJBG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16B745C0)
#define HDDEBNNKJBG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16B74A70)
#define HDDEBNNKJBG_TICK_OFFSET UNITYSDK_OFFSET(0x16B74AC0)
#define HDDEBNNKJBG__ONTASKBEGIN_B__2_0_OFFSET UNITYSDK_OFFSET(0x16B74B70)

inline static constexpr unsigned int HDDEBNNKJBG_TypeDefinitionIndex = 59389;

	class HDDEBNNKJBG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::GridFightShowFullScreenCutIn* OFKGLJOAMLD; // 0x18
		::BNBOAMEBAOE* JLMAKNFAEBH; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
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
