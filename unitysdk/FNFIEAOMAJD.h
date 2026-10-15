#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetUpTrainVisitorDialogue; }
namespace RPG::GameCore { class TaskContext; }

#define FNFIEAOMAJD_CTOR_OFFSET UNITYSDK_OFFSET(0x1586E6D0)
#define FNFIEAOMAJD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1586E700)

	class FNFIEAOMAJD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetUpTrainVisitorDialogue* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetUpTrainVisitorDialogue*))((::PBYTE)hIl2Cpp + FNFIEAOMAJD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNFIEAOMAJD_ONTASKBEGIN_OFFSET))(this);
		}

	};
