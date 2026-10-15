#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetCharacterAlwaysIdleState; }
namespace RPG::GameCore { class TaskContext; }

#define OLOMIKJDBFG_CTOR_OFFSET UNITYSDK_OFFSET(0xBF17130)
#define OLOMIKJDBFG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF17160)

inline static constexpr unsigned int OLOMIKJDBFG_TypeDefinitionIndex = 55366;

	class OLOMIKJDBFG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetCharacterAlwaysIdleState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetCharacterAlwaysIdleState*))((::PBYTE)hIl2Cpp + OLOMIKJDBFG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLOMIKJDBFG_ONTASKBEGIN_OFFSET))(this);
		}

	};
