#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class StartReShaSceneSelection; }
namespace RPG::GameCore { class TaskContext; }

#define ACNMLIJFIIG_CTOR_OFFSET UNITYSDK_OFFSET(0xB1255D0)
#define ACNMLIJFIIG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB125600)

inline static constexpr unsigned int ACNMLIJFIIG_TypeDefinitionIndex = 53291;

	class ACNMLIJFIIG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StartReShaSceneSelection* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartReShaSceneSelection*))((::PBYTE)hIl2Cpp + ACNMLIJFIIG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACNMLIJFIIG_ONTASKBEGIN_OFFSET))(this);
		}

	};
