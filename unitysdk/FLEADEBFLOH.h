#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsStageFirstWave; }
namespace RPG::GameCore { class TaskContext; }

#define FLEADEBFLOH_CTOR_OFFSET UNITYSDK_OFFSET(0x15821A30)
#define FLEADEBFLOH_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15821A60)

inline static constexpr unsigned int FLEADEBFLOH_TypeDefinitionIndex = 54686;

	class FLEADEBFLOH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsStageFirstWave* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsStageFirstWave*))((::PBYTE)hIl2Cpp + FLEADEBFLOH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEADEBFLOH_EVALUATE_OFFSET))(this);
		}

	};
