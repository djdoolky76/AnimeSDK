#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class EnableDynamicSkillButtonInput; }
namespace RPG::GameCore { class TaskContext; }

#define OBGNPMHPGFP_CTOR_OFFSET UNITYSDK_OFFSET(0xBD407A0)
#define OBGNPMHPGFP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBD407D0)

	class OBGNPMHPGFP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnableDynamicSkillButtonInput* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnableDynamicSkillButtonInput*))((::PBYTE)hIl2Cpp + OBGNPMHPGFP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGNPMHPGFP_ONTASKBEGIN_OFFSET))(this);
		}

	};
