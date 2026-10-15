#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class CalcElevatorLoopTime; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define AICNAEHKIDD_CTOR_OFFSET UNITYSDK_OFFSET(0xEB9B480)
#define AICNAEHKIDD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEB9B730)
#define AICNAEHKIDD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEB9B770)
#define AICNAEHKIDD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xEB9BBA0)
#define AICNAEHKIDD_TICK_OFFSET UNITYSDK_OFFSET(0xEB9BBF0)

inline static constexpr unsigned int AICNAEHKIDD_TypeDefinitionIndex = 52628;

	class AICNAEHKIDD : public ::GELIALJDFBL
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* ACDDCNNEDBF; // 0x18
		::RPG::GameCore::CalcElevatorLoopTime* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::UnityEngine::Animator* OIPFNAHBHKG; // 0x30
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
