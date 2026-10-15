#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ApplyMonsterPhaseOverrideConfig; }
namespace RPG::GameCore { class TaskContext; }

#define ADNEHABCMCM_CTOR_OFFSET UNITYSDK_OFFSET(0xB145B20)
#define ADNEHABCMCM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB145B50)

inline static constexpr unsigned int ADNEHABCMCM_TypeDefinitionIndex = 55551;

	class ADNEHABCMCM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ApplyMonsterPhaseOverrideConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ApplyMonsterPhaseOverrideConfig*))((::PBYTE)hIl2Cpp + ADNEHABCMCM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADNEHABCMCM_ONTASKBEGIN_OFFSET))(this);
		}

	};
