#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ChangeMonsterHeadIcon; }
namespace RPG::GameCore { class TaskContext; }

#define OJBJFOKKEAK_CTOR_OFFSET UNITYSDK_OFFSET(0x194A6330)
#define OJBJFOKKEAK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x194A6360)

inline static constexpr unsigned int OJBJFOKKEAK_TypeDefinitionIndex = 56097;

	class OJBJFOKKEAK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChangeMonsterHeadIcon* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChangeMonsterHeadIcon*))((::PBYTE)hIl2Cpp + OJBJFOKKEAK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJBJFOKKEAK_ONTASKBEGIN_OFFSET))(this);
		}

	};
