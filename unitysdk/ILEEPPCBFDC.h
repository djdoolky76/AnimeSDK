#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class DestroyNPCMonster; }
namespace RPG::GameCore { class TaskContext; }

#define ILEEPPCBFDC_CTOR_OFFSET UNITYSDK_OFFSET(0x164AD170)
#define ILEEPPCBFDC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x164AD180)
#define ILEEPPCBFDC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x164AD1C0)
#define ILEEPPCBFDC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x164AD900)
#define ILEEPPCBFDC_TICK_OFFSET UNITYSDK_OFFSET(0x164AD950)

	class ILEEPPCBFDC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::DestroyNPCMonster* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DestroyNPCMonster* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DestroyNPCMonster*))((::PBYTE)hIl2Cpp + ILEEPPCBFDC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEEPPCBFDC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEEPPCBFDC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEEPPCBFDC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ILEEPPCBFDC_TICK_OFFSET))(this, a1);
		}

	};
