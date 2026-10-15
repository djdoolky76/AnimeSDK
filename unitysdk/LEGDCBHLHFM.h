#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class FinishLevelGraph; }
namespace RPG::GameCore { class TaskContext; }

#define LEGDCBHLHFM_CTOR_OFFSET UNITYSDK_OFFSET(0xB651940)
#define LEGDCBHLHFM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB651D60)
#define LEGDCBHLHFM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB651950)
#define LEGDCBHLHFM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB651CB0)
#define LEGDCBHLHFM_TICK_OFFSET UNITYSDK_OFFSET(0xB651D00)

	class LEGDCBHLHFM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::FinishLevelGraph* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FinishLevelGraph* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FinishLevelGraph*))((::PBYTE)hIl2Cpp + LEGDCBHLHFM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGDCBHLHFM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGDCBHLHFM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LEGDCBHLHFM_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGDCBHLHFM_DISPOSE_OFFSET))(this);
		}

	};
