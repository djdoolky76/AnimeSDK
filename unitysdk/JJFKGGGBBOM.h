#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class HideMonsterSkillInViewMode; }
namespace RPG::GameCore { class TaskContext; }

#define JJFKGGGBBOM_CTOR_OFFSET UNITYSDK_OFFSET(0xB203E90)
#define JJFKGGGBBOM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB203EC0)

	class JJFKGGGBBOM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HideMonsterSkillInViewMode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HideMonsterSkillInViewMode*))((::PBYTE)hIl2Cpp + JJFKGGGBBOM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJFKGGGBBOM_ONTASKBEGIN_OFFSET))(this);
		}

	};
