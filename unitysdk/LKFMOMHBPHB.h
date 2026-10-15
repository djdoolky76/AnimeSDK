#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ForceShowActionDelay; }
namespace RPG::GameCore { class TaskContext; }

#define LKFMOMHBPHB_CTOR_OFFSET UNITYSDK_OFFSET(0xB733840)
#define LKFMOMHBPHB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB733850)
#define LKFMOMHBPHB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB733890)
#define LKFMOMHBPHB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB733910)
#define LKFMOMHBPHB_TICK_OFFSET UNITYSDK_OFFSET(0xB733960)

	class LKFMOMHBPHB : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ForceShowActionDelay* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ForceShowActionDelay* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ForceShowActionDelay*))((::PBYTE)hIl2Cpp + LKFMOMHBPHB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFMOMHBPHB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFMOMHBPHB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFMOMHBPHB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LKFMOMHBPHB_TICK_OFFSET))(this, a1);
		}

	};
