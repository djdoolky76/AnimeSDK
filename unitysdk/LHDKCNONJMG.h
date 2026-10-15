#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class MarkTargetForFutureReviveAbility; }
namespace RPG::GameCore { class TaskContext; }

#define LHDKCNONJMG_CTOR_OFFSET UNITYSDK_OFFSET(0xB6AA330)
#define LHDKCNONJMG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB6AA360)

inline static constexpr unsigned int LHDKCNONJMG_TypeDefinitionIndex = 55172;

	class LHDKCNONJMG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MarkTargetForFutureReviveAbility* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MarkTargetForFutureReviveAbility*))((::PBYTE)hIl2Cpp + LHDKCNONJMG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHDKCNONJMG_ONTASKBEGIN_OFFSET))(this);
		}

	};
