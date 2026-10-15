#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsMazeBuffAffectCurrentWave; }
namespace RPG::GameCore { class TaskContext; }

#define NPHMCDMJBNF_CTOR_OFFSET UNITYSDK_OFFSET(0xBCFE070)
#define NPHMCDMJBNF_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBCFE0A0)

inline static constexpr unsigned int NPHMCDMJBNF_TypeDefinitionIndex = 54676;

	class NPHMCDMJBNF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsMazeBuffAffectCurrentWave* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsMazeBuffAffectCurrentWave*))((::PBYTE)hIl2Cpp + NPHMCDMJBNF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPHMCDMJBNF_EVALUATE_OFFSET))(this);
		}

	};
