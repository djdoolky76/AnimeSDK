#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class OpenTrainPartyEntrancePage; }
namespace RPG::GameCore { class TaskContext; }

#define JNLPDKLMLFJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB28C230)
#define JNLPDKLMLFJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB28C2C0)
#define JNLPDKLMLFJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB28C240)
#define JNLPDKLMLFJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB28C300)
#define JNLPDKLMLFJ_TICK_OFFSET UNITYSDK_OFFSET(0xB28C350)

	class JNLPDKLMLFJ : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::OpenTrainPartyEntrancePage* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OpenTrainPartyEntrancePage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OpenTrainPartyEntrancePage*))((::PBYTE)hIl2Cpp + JNLPDKLMLFJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNLPDKLMLFJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNLPDKLMLFJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNLPDKLMLFJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JNLPDKLMLFJ_TICK_OFFSET))(this, a1);
		}

	};
