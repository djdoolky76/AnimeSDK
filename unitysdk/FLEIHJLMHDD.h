#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class CallBack; }
namespace RPG::GameCore { class TaskContext; }

#define FLEIHJLMHDD_CTOR_OFFSET UNITYSDK_OFFSET(0x1582E260)
#define FLEIHJLMHDD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1582E2F0)
#define FLEIHJLMHDD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1582E400)
#define FLEIHJLMHDD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1582E450)
#define FLEIHJLMHDD_TICK_OFFSET UNITYSDK_OFFSET(0x1582E4E0)

	class FLEIHJLMHDD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::CallBack* OFKGLJOAMLD; // 0x18
		::KFELGAIGHAP* KOHOGMCJHBH; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CallBack* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CallBack*))((::PBYTE)hIl2Cpp + FLEIHJLMHDD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEIHJLMHDD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEIHJLMHDD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEIHJLMHDD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLEIHJLMHDD_TICK_OFFSET))(this, a1);
		}

	};
