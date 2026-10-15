#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class StopSummonUnitGameplay; }
namespace RPG::GameCore { class SummonUnitGameplayConfig; }
namespace RPG::GameCore { class TaskContext; }

#define IFLCIFJJMGB_CTOR_OFFSET UNITYSDK_OFFSET(0x15F1F880)
#define IFLCIFJJMGB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15F1F970)
#define IFLCIFJJMGB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15F1FAA0)
#define IFLCIFJJMGB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15F1F9F0)
#define IFLCIFJJMGB_TICK_OFFSET UNITYSDK_OFFSET(0x15F1FA40)

	class IFLCIFJJMGB : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SummonUnitGameplayConfig* IOFNMCBADNM; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::GameCore::StopSummonUnitGameplay* OFKGLJOAMLD; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StopSummonUnitGameplay* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StopSummonUnitGameplay*))((::PBYTE)hIl2Cpp + IFLCIFJJMGB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFLCIFJJMGB_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IFLCIFJJMGB_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFLCIFJJMGB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFLCIFJJMGB_ONTASKRESET_OFFSET))(this);
		}

	};
