#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsMazeSkillAffectCurrentWave; }
namespace RPG::GameCore { class TaskContext; }

#define ANIHJKILONJ_CTOR_OFFSET UNITYSDK_OFFSET(0x155987F0)
#define ANIHJKILONJ_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15598820)

inline static constexpr unsigned int ANIHJKILONJ_TypeDefinitionIndex = 54677;

	class ANIHJKILONJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsMazeSkillAffectCurrentWave* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsMazeSkillAffectCurrentWave*))((::PBYTE)hIl2Cpp + ANIHJKILONJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIHJKILONJ_EVALUATE_OFFSET))(this);
		}

	};
