#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class CloseAllTopPage; }
namespace RPG::GameCore { class TaskContext; }

#define CPKPPECKOKD_CTOR_OFFSET UNITYSDK_OFFSET(0xDCD9910)
#define CPKPPECKOKD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDCD9920)
#define CPKPPECKOKD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDCD9960)
#define CPKPPECKOKD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xDCD9BC0)
#define CPKPPECKOKD_TICK_OFFSET UNITYSDK_OFFSET(0xDCD9C10)

	class CPKPPECKOKD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::CloseAllTopPage* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CloseAllTopPage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CloseAllTopPage*))((::PBYTE)hIl2Cpp + CPKPPECKOKD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPKPPECKOKD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPKPPECKOKD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPKPPECKOKD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CPKPPECKOKD_TICK_OFFSET))(this, a1);
		}

	};
