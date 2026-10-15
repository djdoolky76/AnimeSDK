#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ForceSetDialogCamera; }
namespace RPG::GameCore { class TaskContext; }

#define JNFIJALHLEG_CTOR_OFFSET UNITYSDK_OFFSET(0xB27EE50)
#define JNFIJALHLEG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB27EE80)

inline static constexpr unsigned int JNFIJALHLEG_TypeDefinitionIndex = 58127;

	class JNFIJALHLEG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ForceSetDialogCamera* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ForceSetDialogCamera*))((::PBYTE)hIl2Cpp + JNFIJALHLEG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNFIJALHLEG_ONTASKBEGIN_OFFSET))(this);
		}

	};
