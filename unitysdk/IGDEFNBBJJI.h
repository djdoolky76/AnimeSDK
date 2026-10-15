#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ShowBattleConditionUI; }
namespace RPG::GameCore { class TaskContext; }

#define IGDEFNBBJJI_CTOR_OFFSET UNITYSDK_OFFSET(0x164013F0)
#define IGDEFNBBJJI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16401420)

	class IGDEFNBBJJI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowBattleConditionUI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowBattleConditionUI*))((::PBYTE)hIl2Cpp + IGDEFNBBJJI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGDEFNBBJJI_ONTASKBEGIN_OFFSET))(this);
		}

	};
