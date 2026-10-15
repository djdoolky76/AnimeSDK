#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class DeployPuzzleChangeLineEmission; }
namespace RPG::GameCore { class TaskContext; }

#define NJPOGCMCGGM_CTOR_OFFSET UNITYSDK_OFFSET(0xBC2BE80)
#define NJPOGCMCGGM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC2BEB0)

inline static constexpr unsigned int NJPOGCMCGGM_TypeDefinitionIndex = 58069;

	class NJPOGCMCGGM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DeployPuzzleChangeLineEmission* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DeployPuzzleChangeLineEmission*))((::PBYTE)hIl2Cpp + NJPOGCMCGGM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPOGCMCGGM_ONTASKBEGIN_OFFSET))(this);
		}

	};
