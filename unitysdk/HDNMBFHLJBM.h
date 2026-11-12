#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetStepperDecisionGroupIndex; }
namespace RPG::GameCore { class TaskContext; }

#define HDNMBFHLJBM_CTOR_OFFSET UNITYSDK_OFFSET(0x16B827F0)
#define HDNMBFHLJBM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16B82820)

inline static constexpr unsigned int HDNMBFHLJBM_TypeDefinitionIndex = 56766;

	class HDNMBFHLJBM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetStepperDecisionGroupIndex* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetStepperDecisionGroupIndex*))((::PBYTE)hIl2Cpp + HDNMBFHLJBM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDNMBFHLJBM_ONTASKBEGIN_OFFSET))(this);
		}

	};
