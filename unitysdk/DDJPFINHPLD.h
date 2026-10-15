#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class EnterTrainPartyGame; }
namespace RPG::GameCore { class TaskContext; }

#define DDJPFINHPLD_CTOR_OFFSET UNITYSDK_OFFSET(0xE4E3920)
#define DDJPFINHPLD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE4E3950)

	class DDJPFINHPLD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnterTrainPartyGame* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnterTrainPartyGame*))((::PBYTE)hIl2Cpp + DDJPFINHPLD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDJPFINHPLD_ONTASKBEGIN_OFFSET))(this);
		}

	};
