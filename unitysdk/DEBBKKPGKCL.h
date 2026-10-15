#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetUltraSkillInnerPieProgress; }
namespace RPG::GameCore { class TaskContext; }

#define DEBBKKPGKCL_CTOR_OFFSET UNITYSDK_OFFSET(0xE4F3ED0)
#define DEBBKKPGKCL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE4F3F00)

	class DEBBKKPGKCL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetUltraSkillInnerPieProgress* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetUltraSkillInnerPieProgress*))((::PBYTE)hIl2Cpp + DEBBKKPGKCL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBBKKPGKCL_ONTASKBEGIN_OFFSET))(this);
		}

	};
