#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class ToggleSpecialSkillMark; }

#define CFLNNLDLOPD_CTOR_OFFSET UNITYSDK_OFFSET(0xCC535B0)
#define CFLNNLDLOPD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCC535E0)

	class CFLNNLDLOPD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ToggleSpecialSkillMark* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ToggleSpecialSkillMark*))((::PBYTE)hIl2Cpp + CFLNNLDLOPD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFLNNLDLOPD_ONTASKBEGIN_OFFSET))(this);
		}

	};
