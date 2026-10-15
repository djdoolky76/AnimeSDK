#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class OverrideSelectDarkTeamEntityCamera; }
namespace RPG::GameCore { class TaskContext; }

#define LIKFMMIKIFP_CTOR_OFFSET UNITYSDK_OFFSET(0xB6D5C50)
#define LIKFMMIKIFP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB6D5C80)

inline static constexpr unsigned int LIKFMMIKIFP_TypeDefinitionIndex = 55242;

	class LIKFMMIKIFP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OverrideSelectDarkTeamEntityCamera* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OverrideSelectDarkTeamEntityCamera*))((::PBYTE)hIl2Cpp + LIKFMMIKIFP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIKFMMIKIFP_ONTASKBEGIN_OFFSET))(this);
		}

	};
