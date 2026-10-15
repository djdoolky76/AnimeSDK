#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RA_TriggerInstantAbility; }
namespace RPG::GameCore { class TaskContext; }

#define BAEJOJBGELA_CTOR_OFFSET UNITYSDK_OFFSET(0x15BCD470)
#define BAEJOJBGELA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15BCD4A0)

inline static constexpr unsigned int BAEJOJBGELA_TypeDefinitionIndex = 52104;

	class BAEJOJBGELA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RA_TriggerInstantAbility* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RA_TriggerInstantAbility*))((::PBYTE)hIl2Cpp + BAEJOJBGELA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEJOJBGELA_ONTASKBEGIN_OFFSET))(this);
		}

	};
