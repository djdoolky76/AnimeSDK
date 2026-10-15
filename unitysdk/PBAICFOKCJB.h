#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RemoveFateHougu; }
namespace RPG::GameCore { class TaskContext; }

#define PBAICFOKCJB_CTOR_OFFSET UNITYSDK_OFFSET(0xBFE03C0)
#define PBAICFOKCJB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBFE03F0)

inline static constexpr unsigned int PBAICFOKCJB_TypeDefinitionIndex = 55306;

	class PBAICFOKCJB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveFateHougu* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveFateHougu*))((::PBYTE)hIl2Cpp + PBAICFOKCJB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBAICFOKCJB_ONTASKBEGIN_OFFSET))(this);
		}

	};
