#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class CreateBattleEventQTEUI; }
namespace RPG::GameCore { class TaskContext; }

#define NCBOGHJJOEM_CTOR_OFFSET UNITYSDK_OFFSET(0xBAF78F0)
#define NCBOGHJJOEM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBAF7920)

	class NCBOGHJJOEM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateBattleEventQTEUI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateBattleEventQTEUI*))((::PBYTE)hIl2Cpp + NCBOGHJJOEM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCBOGHJJOEM_ONTASKBEGIN_OFFSET))(this);
		}

	};
