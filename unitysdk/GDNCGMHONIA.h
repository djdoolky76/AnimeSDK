#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class FinishPerformance; }
namespace RPG::GameCore { class TaskContext; }

#define GDNCGMHONIA_CTOR_OFFSET UNITYSDK_OFFSET(0x159B7460)
#define GDNCGMHONIA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x159B7480)
#define GDNCGMHONIA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x159B74C0)
#define GDNCGMHONIA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x159B7570)
#define GDNCGMHONIA_TICK_OFFSET UNITYSDK_OFFSET(0x159B75C0)

	class GDNCGMHONIA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::FinishPerformance* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FinishPerformance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FinishPerformance*))((::PBYTE)hIl2Cpp + GDNCGMHONIA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDNCGMHONIA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDNCGMHONIA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDNCGMHONIA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GDNCGMHONIA_TICK_OFFSET))(this, a1);
		}

	};
