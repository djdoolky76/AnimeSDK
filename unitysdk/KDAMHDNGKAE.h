#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RtBySkillCanUse; }
namespace RPG::GameCore { class TaskContext; }

#define KDAMHDNGKAE_CTOR_OFFSET UNITYSDK_OFFSET(0x1A492450)
#define KDAMHDNGKAE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1A492480)

inline static constexpr unsigned int KDAMHDNGKAE_TypeDefinitionIndex = 55090;

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
