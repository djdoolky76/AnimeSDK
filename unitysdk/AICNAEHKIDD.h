#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class CalcElevatorLoopTime; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define AICNAEHKIDD_CTOR_OFFSET UNITYSDK_OFFSET(0xEBA0690)
#define AICNAEHKIDD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEBA0940)
#define AICNAEHKIDD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEBA0980)
#define AICNAEHKIDD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xEBA0DB0)
#define AICNAEHKIDD_TICK_OFFSET UNITYSDK_OFFSET(0xEBA0E00)

	class AICNAEHKIDD : public ::GELIALJDFBL
	{
	public:
		::UnityEngine::Animator* OIPFNAHBHKG; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* ACDDCNNEDBF; // 0x28
		::RPG::GameCore::CalcElevatorLoopTime* OFKGLJOAMLD; // 0x30
		::System::Int32 LPDFMBGPPJB; // 0x38
		::System::Single JOHKMCAFKGJ; // 0x3C
		::System::Int32 COJMPLBLJDE; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CalcElevatorLoopTime* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CalcElevatorLoopTime*))((::PBYTE)hIl2Cpp + AICNAEHKIDD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AICNAEHKIDD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AICNAEHKIDD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AICNAEHKIDD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AICNAEHKIDD_TICK_OFFSET))(this, a1);
		}

	};
