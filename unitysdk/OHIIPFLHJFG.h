#pragma once
#include "unitysdk/unitysdk.h"
class HGLDNPONBAM;
namespace RPG::GameCore { class StackScepterProperty; }
namespace RPG::GameCore { class TaskContext; }

#define OHIIPFLHJFG_CTOR_OFFSET UNITYSDK_OFFSET(0xBE6D2B0)
#define OHIIPFLHJFG_OMHDGNOHGBJ_OFFSET UNITYSDK_OFFSET(0xBE6D520)
#define OHIIPFLHJFG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE6D2E0)

	class OHIIPFLHJFG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StackScepterProperty* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StackScepterProperty*))((::PBYTE)hIl2Cpp + OHIIPFLHJFG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHIIPFLHJFG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OMHDGNOHGBJ(::HGLDNPONBAM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGLDNPONBAM*))((::PBYTE)hIl2Cpp + OHIIPFLHJFG_OMHDGNOHGBJ_OFFSET))(this, a1);
		}

	};
