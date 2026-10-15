#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RtBySkillCanUse; }
namespace RPG::GameCore { class TaskContext; }

#define KDAMHDNGKAE_CTOR_OFFSET UNITYSDK_OFFSET(0xB33F490)
#define KDAMHDNGKAE_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB33F4C0)

inline static constexpr unsigned int KDAMHDNGKAE_TypeDefinitionIndex = 53926;

	class KDAMHDNGKAE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtBySkillCanUse* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtBySkillCanUse*))((::PBYTE)hIl2Cpp + KDAMHDNGKAE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDAMHDNGKAE_EVALUATE_OFFSET))(this);
		}

	};
