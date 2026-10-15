#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AddReShaEasterEggMatchRule; }
namespace RPG::GameCore { class TaskContext; }

#define LDGFKLFCKPG_CTOR_OFFSET UNITYSDK_OFFSET(0xB623750)
#define LDGFKLFCKPG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB623780)

	class LDGFKLFCKPG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddReShaEasterEggMatchRule* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddReShaEasterEggMatchRule*))((::PBYTE)hIl2Cpp + LDGFKLFCKPG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGFKLFCKPG_ONTASKBEGIN_OFFSET))(this);
		}

	};
