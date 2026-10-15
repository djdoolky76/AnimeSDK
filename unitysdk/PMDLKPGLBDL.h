#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerPamMovePhaseTalk; }

#define PMDLKPGLBDL_CTOR_OFFSET UNITYSDK_OFFSET(0xC317280)
#define PMDLKPGLBDL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC317290)
#define PMDLKPGLBDL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC3172D0)
#define PMDLKPGLBDL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC3173A0)
#define PMDLKPGLBDL_TICK_OFFSET UNITYSDK_OFFSET(0xC3173F0)

	class PMDLKPGLBDL : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerPamMovePhaseTalk* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerPamMovePhaseTalk*))((::PBYTE)hIl2Cpp + PMDLKPGLBDL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMDLKPGLBDL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMDLKPGLBDL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMDLKPGLBDL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PMDLKPGLBDL_TICK_OFFSET))(this, a1);
		}

	};
