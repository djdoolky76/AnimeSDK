#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class OwnerEntityRemoveAbility; }
namespace RPG::GameCore { class TaskContext; }

#define PCBJKFHICBA_CTOR_OFFSET UNITYSDK_OFFSET(0xBFFCE20)
#define PCBJKFHICBA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBFFCE30)
#define PCBJKFHICBA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBFFCE70)
#define PCBJKFHICBA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBFFCFC0)
#define PCBJKFHICBA_TICK_OFFSET UNITYSDK_OFFSET(0xBFFD010)

	class PCBJKFHICBA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::OwnerEntityRemoveAbility* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OwnerEntityRemoveAbility* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OwnerEntityRemoveAbility*))((::PBYTE)hIl2Cpp + PCBJKFHICBA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCBJKFHICBA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCBJKFHICBA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCBJKFHICBA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PCBJKFHICBA_TICK_OFFSET))(this, a1);
		}

	};
