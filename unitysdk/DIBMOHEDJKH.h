#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class RemoveGlobalTimeSlow; }
namespace RPG::GameCore { class TaskContext; }

#define DIBMOHEDJKH_CTOR_OFFSET UNITYSDK_OFFSET(0xEBEFE60)
#define DIBMOHEDJKH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEBEFE70)
#define DIBMOHEDJKH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEBEFEB0)
#define DIBMOHEDJKH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xEBEFF40)
#define DIBMOHEDJKH_TICK_OFFSET UNITYSDK_OFFSET(0xEBEFF90)

	class DIBMOHEDJKH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::RemoveGlobalTimeSlow* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveGlobalTimeSlow* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveGlobalTimeSlow*))((::PBYTE)hIl2Cpp + DIBMOHEDJKH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBMOHEDJKH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBMOHEDJKH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBMOHEDJKH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DIBMOHEDJKH_TICK_OFFSET))(this, a1);
		}

	};
