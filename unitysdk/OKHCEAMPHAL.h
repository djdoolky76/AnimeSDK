#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class LookAt; }
namespace RPG::GameCore { class TaskContext; }

#define OKHCEAMPHAL_CTOR_OFFSET UNITYSDK_OFFSET(0xBEDA2F0)
#define OKHCEAMPHAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBEDA300)
#define OKHCEAMPHAL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBEDA340)
#define OKHCEAMPHAL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBEDB030)
#define OKHCEAMPHAL_TICK_OFFSET UNITYSDK_OFFSET(0xBEDB080)

	class OKHCEAMPHAL : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::LookAt* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LookAt* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LookAt*))((::PBYTE)hIl2Cpp + OKHCEAMPHAL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKHCEAMPHAL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKHCEAMPHAL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKHCEAMPHAL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OKHCEAMPHAL_TICK_OFFSET))(this, a1);
		}

	};
