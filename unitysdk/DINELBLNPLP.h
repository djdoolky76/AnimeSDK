#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class MonopolyDestroyWorld; }
namespace RPG::GameCore { class TaskContext; }

#define DINELBLNPLP_CTOR_OFFSET UNITYSDK_OFFSET(0xF2246D0)
#define DINELBLNPLP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF224800)
#define DINELBLNPLP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF2246E0)
#define DINELBLNPLP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF2247B0)
#define DINELBLNPLP_TICK_OFFSET UNITYSDK_OFFSET(0xF224840)

	class DINELBLNPLP : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::MonopolyDestroyWorld* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MonopolyDestroyWorld* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MonopolyDestroyWorld*))((::PBYTE)hIl2Cpp + DINELBLNPLP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DINELBLNPLP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DINELBLNPLP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DINELBLNPLP_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DINELBLNPLP_TICK_OFFSET))(this, a1);
		}

	};
