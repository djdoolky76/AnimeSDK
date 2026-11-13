#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ClearTargetTimeSlow; }
namespace RPG::GameCore { class TaskContext; }

#define PIBFJAMGGFG_CTOR_OFFSET UNITYSDK_OFFSET(0x1A9BE070)
#define PIBFJAMGGFG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A9BE0A0)

inline static constexpr unsigned int PIBFJAMGGFG_TypeDefinitionIndex = 56141;

	class PIBFJAMGGFG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClearTargetTimeSlow* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClearTargetTimeSlow*))((::PBYTE)hIl2Cpp + PIBFJAMGGFG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIBFJAMGGFG_ONTASKBEGIN_OFFSET))(this);
		}

	};
