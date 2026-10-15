#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetResilience; }
namespace RPG::GameCore { class TaskContext; }

#define APBEALFDNLA_CTOR_OFFSET UNITYSDK_OFFSET(0x158CB7D0)
#define APBEALFDNLA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x158CB800)

inline static constexpr unsigned int APBEALFDNLA_TypeDefinitionIndex = 55897;

	class APBEALFDNLA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetResilience* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetResilience*))((::PBYTE)hIl2Cpp + APBEALFDNLA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APBEALFDNLA_ONTASKBEGIN_OFFSET))(this);
		}

	};
