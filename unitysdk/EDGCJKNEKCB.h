#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class EndAdvSkillCombo; }
namespace RPG::GameCore { class TaskContext; }

#define EDGCJKNEKCB_CTOR_OFFSET UNITYSDK_OFFSET(0x13314050)
#define EDGCJKNEKCB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13314080)

inline static constexpr unsigned int EDGCJKNEKCB_TypeDefinitionIndex = 58113;

	class EDGCJKNEKCB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EndAdvSkillCombo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EndAdvSkillCombo*))((::PBYTE)hIl2Cpp + EDGCJKNEKCB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDGCJKNEKCB_ONTASKBEGIN_OFFSET))(this);
		}

	};
