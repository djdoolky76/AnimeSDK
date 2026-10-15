#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdventureSetAttackTargetMonsterDie; }
namespace RPG::GameCore { class TaskContext; }

#define JGKGOIPPKBF_CTOR_OFFSET UNITYSDK_OFFSET(0xB19ADB0)
#define JGKGOIPPKBF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB19ADE0)

inline static constexpr unsigned int JGKGOIPPKBF_TypeDefinitionIndex = 52531;

	class JGKGOIPPKBF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureSetAttackTargetMonsterDie* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureSetAttackTargetMonsterDie*))((::PBYTE)hIl2Cpp + JGKGOIPPKBF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKGOIPPKBF_ONTASKBEGIN_OFFSET))(this);
		}

	};
