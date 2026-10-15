#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class MonopolyCheckHasFinishedQuiz; }
namespace RPG::GameCore { class TaskContext; }

#define OLMCMJCKFIM_CTOR_OFFSET UNITYSDK_OFFSET(0xBF10700)
#define OLMCMJCKFIM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF10A70)
#define OLMCMJCKFIM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF10800)
#define OLMCMJCKFIM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBF10A20)
#define OLMCMJCKFIM_TICK_OFFSET UNITYSDK_OFFSET(0xBF10BE0)

	class OLMCMJCKFIM : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* IJBFOGOBMLE; // 0x18
		::RPG::GameCore::MonopolyCheckHasFinishedQuiz* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::KFELGAIGHAP* APPJBNPGGMI; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MonopolyCheckHasFinishedQuiz* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MonopolyCheckHasFinishedQuiz*))((::PBYTE)hIl2Cpp + OLMCMJCKFIM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLMCMJCKFIM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLMCMJCKFIM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLMCMJCKFIM_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OLMCMJCKFIM_TICK_OFFSET))(this, a1);
		}

	};
