#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ModifyCurrentSkillDelayCost; }
namespace RPG::GameCore { class TaskContext; }

#define NELIGHNFKHK_CTOR_OFFSET UNITYSDK_OFFSET(0xBB70D90)
#define NELIGHNFKHK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB70DC0)

inline static constexpr unsigned int NELIGHNFKHK_TypeDefinitionIndex = 55191;

	class NELIGHNFKHK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyCurrentSkillDelayCost* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyCurrentSkillDelayCost*))((::PBYTE)hIl2Cpp + NELIGHNFKHK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NELIGHNFKHK_ONTASKBEGIN_OFFSET))(this);
		}

	};
