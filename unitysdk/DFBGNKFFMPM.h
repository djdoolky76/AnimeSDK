#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ChangeBattleEventOwner; }
namespace RPG::GameCore { class TaskContext; }

#define DFBGNKFFMPM_CTOR_OFFSET UNITYSDK_OFFSET(0xE8233A0)
#define DFBGNKFFMPM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE8233D0)

inline static constexpr unsigned int DFBGNKFFMPM_TypeDefinitionIndex = 57998;

	class DFBGNKFFMPM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChangeBattleEventOwner* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChangeBattleEventOwner*))((::PBYTE)hIl2Cpp + DFBGNKFFMPM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBGNKFFMPM_ONTASKBEGIN_OFFSET))(this);
		}

	};
