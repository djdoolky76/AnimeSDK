#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCheckTimeRewindEntityPauseBySkillCount; }
namespace RPG::GameCore { class TaskContext; }

#define JDIPJPBLADB_CTOR_OFFSET UNITYSDK_OFFSET(0x165CEFF0)
#define JDIPJPBLADB_EVALUATE_OFFSET UNITYSDK_OFFSET(0x165CF020)

inline static constexpr unsigned int JDIPJPBLADB_TypeDefinitionIndex = 53365;

	class JDIPJPBLADB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckTimeRewindEntityPauseBySkillCount* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckTimeRewindEntityPauseBySkillCount*))((::PBYTE)hIl2Cpp + JDIPJPBLADB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JDIPJPBLADB_EVALUATE_OFFSET))(this);
		}

	};
