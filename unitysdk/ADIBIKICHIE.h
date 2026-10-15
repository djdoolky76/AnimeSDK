#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvAddExtraBattleMonster; }
namespace RPG::GameCore { class TaskContext; }

#define ADIBIKICHIE_CTOR_OFFSET UNITYSDK_OFFSET(0xB13D4E0)
#define ADIBIKICHIE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB13D510)

inline static constexpr unsigned int ADIBIKICHIE_TypeDefinitionIndex = 52333;

	class ADIBIKICHIE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvAddExtraBattleMonster* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvAddExtraBattleMonster*))((::PBYTE)hIl2Cpp + ADIBIKICHIE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADIBIKICHIE_ONTASKBEGIN_OFFSET))(this);
		}

	};
