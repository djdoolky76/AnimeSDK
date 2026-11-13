#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class CalcElevatorLoopTime; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define AICNAEHKIDD_CTOR_OFFSET UNITYSDK_OFFSET(0x19B408B0)
#define AICNAEHKIDD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19B40B60)
#define AICNAEHKIDD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19B40BA0)
#define AICNAEHKIDD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x19B40FD0)
#define AICNAEHKIDD_TICK_OFFSET UNITYSDK_OFFSET(0x19B41020)

inline static constexpr unsigned int AICNAEHKIDD_TypeDefinitionIndex = 53735;

	class AICNAEHKIDD : public ::GELIALJDFBL
	{
	public:
		::UnityEngine::Animator* OIPFNAHBHKG; // 0x18
		::RPG::GameCore::CalcElevatorLoopTime* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* ACDDCNNEDBF; // 0x30
		::System::Int32 COJMPLBLJDE; // 0x38
		::System::Int32 LPDFMBGPPJB; // 0x3C
		::System::Single JOHKMCAFKGJ; // 0x40
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
