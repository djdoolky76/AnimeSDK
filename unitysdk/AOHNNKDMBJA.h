#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerAutoLayoutTransferPerform; }

#define AOHNNKDMBJA_CTOR_OFFSET UNITYSDK_OFFSET(0x16724890)
#define AOHNNKDMBJA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x167248C0)

inline static constexpr unsigned int AOHNNKDMBJA_TypeDefinitionIndex = 56919;

	class AOHNNKDMBJA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerAutoLayoutTransferPerform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerAutoLayoutTransferPerform*))((::PBYTE)hIl2Cpp + AOHNNKDMBJA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOHNNKDMBJA_ONTASKBEGIN_OFFSET))(this);
		}

	};
