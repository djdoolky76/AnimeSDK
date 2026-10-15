#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class CakeRacePauseGame; }
namespace RPG::GameCore { class TaskContext; }

#define AADMNGIFGJF_CTOR_OFFSET UNITYSDK_OFFSET(0xB0C0780)
#define AADMNGIFGJF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB0C07B0)

inline static constexpr unsigned int AADMNGIFGJF_TypeDefinitionIndex = 52623;

	class AADMNGIFGJF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CakeRacePauseGame* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CakeRacePauseGame*))((::PBYTE)hIl2Cpp + AADMNGIFGJF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AADMNGIFGJF_ONTASKBEGIN_OFFSET))(this);
		}

	};
