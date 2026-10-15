#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class CakeRacePauseGame; }
namespace RPG::GameCore { class TaskContext; }

#define AADMNGIFGJF_CTOR_OFFSET UNITYSDK_OFFSET(0xB0C1E90)
#define AADMNGIFGJF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB0C1EC0)

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
