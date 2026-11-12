#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class LockStance; }
namespace RPG::GameCore { class TaskContext; }

#define MNLBOPPELPE_CTOR_OFFSET UNITYSDK_OFFSET(0xC2CFCA0)
#define MNLBOPPELPE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC2CFCD0)

inline static constexpr unsigned int MNLBOPPELPE_TypeDefinitionIndex = 56329;

	class MNLBOPPELPE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LockStance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LockStance*))((::PBYTE)hIl2Cpp + MNLBOPPELPE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNLBOPPELPE_ONTASKBEGIN_OFFSET))(this);
		}

	};
