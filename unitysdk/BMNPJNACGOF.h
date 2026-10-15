#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class CloneWeakness; }
namespace RPG::GameCore { class TaskContext; }

#define BMNPJNACGOF_CTOR_OFFSET UNITYSDK_OFFSET(0xBDC1670)
#define BMNPJNACGOF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBDC16A0)

	class BMNPJNACGOF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CloneWeakness* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CloneWeakness*))((::PBYTE)hIl2Cpp + BMNPJNACGOF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMNPJNACGOF_ONTASKBEGIN_OFFSET))(this);
		}

	};
