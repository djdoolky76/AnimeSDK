#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class DestroyBattleCharacter; }
namespace RPG::GameCore { class TaskContext; }

#define AKILOKHKJBM_CTOR_OFFSET UNITYSDK_OFFSET(0x12CD3CC0)
#define AKILOKHKJBM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12CD3CF0)

	class AKILOKHKJBM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DestroyBattleCharacter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DestroyBattleCharacter*))((::PBYTE)hIl2Cpp + AKILOKHKJBM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKILOKHKJBM_ONTASKBEGIN_OFFSET))(this);
		}

	};
