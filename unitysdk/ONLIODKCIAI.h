#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class DeployPuzzleFadeout; }
namespace RPG::GameCore { class TaskContext; }

#define ONLIODKCIAI_CTOR_OFFSET UNITYSDK_OFFSET(0xBF58AD0)
#define ONLIODKCIAI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF58B00)

	class ONLIODKCIAI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DeployPuzzleFadeout* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DeployPuzzleFadeout*))((::PBYTE)hIl2Cpp + ONLIODKCIAI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONLIODKCIAI_ONTASKBEGIN_OFFSET))(this);
		}

	};
