#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class StackSkillDesc; }
namespace RPG::GameCore { class TaskContext; }

#define FBINCDIACGP_CTOR_OFFSET UNITYSDK_OFFSET(0x156A0FD0)
#define FBINCDIACGP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x156A1000)

	class FBINCDIACGP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StackSkillDesc* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StackSkillDesc*))((::PBYTE)hIl2Cpp + FBINCDIACGP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBINCDIACGP_ONTASKBEGIN_OFFSET))(this);
		}

	};
