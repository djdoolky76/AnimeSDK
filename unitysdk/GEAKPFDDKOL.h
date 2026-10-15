#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }

#define GEAKPFDDKOL_CTOR_OFFSET UNITYSDK_OFFSET(0x2E7A440)
#define GEAKPFDDKOL_NCFPHCFJGNN_OFFSET UNITYSDK_OFFSET(0x2E7A470)

	struct alignas(8) GEAKPFDDKOL
	{
		::RPG::GameCore::TaskContext* OBKLPOKMIEA; // 0x10
		::System::Int32 GJJDIEGKODJ; // 0x18
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + GEAKPFDDKOL_CTOR_OFFSET))(this, a1);
		}

		::System::Void NCFPHCFJGNN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEAKPFDDKOL_NCFPHCFJGNN_OFFSET))(this);
		}

	};
