#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UIMonopolyWaitMainPage; }

#define AHJNBFGFADH_CTOR_OFFSET UNITYSDK_OFFSET(0xEB84A10)
#define AHJNBFGFADH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEB84D50)
#define AHJNBFGFADH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEB84A20)
#define AHJNBFGFADH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xEB84CC0)
#define AHJNBFGFADH_TICK_OFFSET UNITYSDK_OFFSET(0xEB84A70)

	class AHJNBFGFADH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::UIMonopolyWaitMainPage* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UIMonopolyWaitMainPage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UIMonopolyWaitMainPage*))((::PBYTE)hIl2Cpp + AHJNBFGFADH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHJNBFGFADH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AHJNBFGFADH_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHJNBFGFADH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHJNBFGFADH_DISPOSE_OFFSET))(this);
		}

	};
