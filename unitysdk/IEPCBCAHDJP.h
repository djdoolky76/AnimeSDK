#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AttachSkillTypeDisable; }
namespace RPG::GameCore { class TaskContext; }

#define IEPCBCAHDJP_CTOR_OFFSET UNITYSDK_OFFSET(0x15F07260)
#define IEPCBCAHDJP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15F07290)

	class IEPCBCAHDJP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AttachSkillTypeDisable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AttachSkillTypeDisable*))((::PBYTE)hIl2Cpp + IEPCBCAHDJP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEPCBCAHDJP_ONTASKBEGIN_OFFSET))(this);
		}

	};
