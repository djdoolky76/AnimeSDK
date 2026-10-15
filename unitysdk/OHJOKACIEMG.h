#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AddRegardAsAttackType; }
namespace RPG::GameCore { class TaskContext; }

#define OHJOKACIEMG_CTOR_OFFSET UNITYSDK_OFFSET(0xBE67830)
#define OHJOKACIEMG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE67860)

inline static constexpr unsigned int OHJOKACIEMG_TypeDefinitionIndex = 54818;

	class OHJOKACIEMG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddRegardAsAttackType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddRegardAsAttackType*))((::PBYTE)hIl2Cpp + OHJOKACIEMG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHJOKACIEMG_ONTASKBEGIN_OFFSET))(this);
		}

	};
