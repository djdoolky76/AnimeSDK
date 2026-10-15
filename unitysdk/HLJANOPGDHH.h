#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RtSkillReturnToken; }
namespace RPG::GameCore { class TaskContext; }

#define HLJANOPGDHH_CTOR_OFFSET UNITYSDK_OFFSET(0x15D53D50)
#define HLJANOPGDHH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15D53D80)

inline static constexpr unsigned int HLJANOPGDHH_TypeDefinitionIndex = 53935;

	class HLJANOPGDHH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtSkillReturnToken* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtSkillReturnToken*))((::PBYTE)hIl2Cpp + HLJANOPGDHH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLJANOPGDHH_ONTASKBEGIN_OFFSET))(this);
		}

	};
