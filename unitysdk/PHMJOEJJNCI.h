#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PropSetupSceneSelection; }
namespace RPG::GameCore { class TaskContext; }

#define PHMJOEJJNCI_CTOR_OFFSET UNITYSDK_OFFSET(0xCB7B580)
#define PHMJOEJJNCI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCB7B5B0)

inline static constexpr unsigned int PHMJOEJJNCI_TypeDefinitionIndex = 59609;

	class PHMJOEJJNCI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropSetupSceneSelection* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropSetupSceneSelection*))((::PBYTE)hIl2Cpp + PHMJOEJJNCI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHMJOEJJNCI_ONTASKBEGIN_OFFSET))(this);
		}

	};
