#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class LJFHKAJPFNE;
namespace RPG::GameCore { class SwitchEffectBattleArea; }
namespace RPG::GameCore { class TaskContext; }

#define IFHJGHEHFMD_CTOR_OFFSET UNITYSDK_OFFSET(0x15F17230)
#define IFHJGHEHFMD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15F17240)
#define IFHJGHEHFMD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15F172D0)
#define IFHJGHEHFMD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15F17280)
#define IFHJGHEHFMD_TICK_OFFSET UNITYSDK_OFFSET(0x15F175C0)

	class IFHJGHEHFMD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::SwitchEffectBattleArea* OFKGLJOAMLD; // 0x20
		::LJFHKAJPFNE* EGLEJDELNKD; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchEffectBattleArea* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchEffectBattleArea*))((::PBYTE)hIl2Cpp + IFHJGHEHFMD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFHJGHEHFMD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFHJGHEHFMD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFHJGHEHFMD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IFHJGHEHFMD_TICK_OFFSET))(this, a1);
		}

	};
