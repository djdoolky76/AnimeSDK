#pragma once
#include "unitysdk/unitysdk.h"
class AEBBINNDPFD;
namespace RPG::GameCore { class TaskContext; }

#define PKPEPPNLNLA_CTOR_OFFSET UNITYSDK_OFFSET(0xC2EC130)
#define PKPEPPNLNLA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC2EC160)

	class PKPEPPNLNLA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::AEBBINNDPFD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::AEBBINNDPFD*))((::PBYTE)hIl2Cpp + PKPEPPNLNLA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPEPPNLNLA_ONTASKBEGIN_OFFSET))(this);
		}

	};
