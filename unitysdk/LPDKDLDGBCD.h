#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class OverrideFinishActionAutoTransfer; }
namespace RPG::GameCore { class TaskContext; }

#define LPDKDLDGBCD_CTOR_OFFSET UNITYSDK_OFFSET(0xB81EA60)
#define LPDKDLDGBCD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB81EA70)
#define LPDKDLDGBCD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB81EAB0)
#define LPDKDLDGBCD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB81EB50)
#define LPDKDLDGBCD_TICK_OFFSET UNITYSDK_OFFSET(0xB81EBA0)

	class LPDKDLDGBCD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::OverrideFinishActionAutoTransfer* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OverrideFinishActionAutoTransfer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OverrideFinishActionAutoTransfer*))((::PBYTE)hIl2Cpp + LPDKDLDGBCD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDKDLDGBCD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDKDLDGBCD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDKDLDGBCD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LPDKDLDGBCD_TICK_OFFSET))(this, a1);
		}

	};
