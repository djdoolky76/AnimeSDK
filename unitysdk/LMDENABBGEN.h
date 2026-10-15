#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetLevelChallengeTurnLimit; }
namespace RPG::GameCore { class TaskContext; }

#define LMDENABBGEN_CTOR_OFFSET UNITYSDK_OFFSET(0xB77A900)
#define LMDENABBGEN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB77A930)

inline static constexpr unsigned int LMDENABBGEN_TypeDefinitionIndex = 55528;

	class LMDENABBGEN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetLevelChallengeTurnLimit* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetLevelChallengeTurnLimit*))((::PBYTE)hIl2Cpp + LMDENABBGEN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDENABBGEN_ONTASKBEGIN_OFFSET))(this);
		}

	};
