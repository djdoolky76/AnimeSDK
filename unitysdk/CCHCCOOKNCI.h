#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class DeployPuzzleChangeLineIntensity; }
namespace RPG::GameCore { class TaskContext; }

#define CCHCCOOKNCI_CTOR_OFFSET UNITYSDK_OFFSET(0xC73C2B0)
#define CCHCCOOKNCI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC73C2E0)

	class CCHCCOOKNCI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DeployPuzzleChangeLineIntensity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DeployPuzzleChangeLineIntensity*))((::PBYTE)hIl2Cpp + CCHCCOOKNCI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCHCCOOKNCI_ONTASKBEGIN_OFFSET))(this);
		}

	};
