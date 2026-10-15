#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AddReShaEasterEggProp; }
namespace RPG::GameCore { class TaskContext; }

#define LAAPBEDDAFC_CTOR_OFFSET UNITYSDK_OFFSET(0xB5D5240)
#define LAAPBEDDAFC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB5D5270)

inline static constexpr unsigned int LAAPBEDDAFC_TypeDefinitionIndex = 52326;

	class LAAPBEDDAFC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddReShaEasterEggProp* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddReShaEasterEggProp*))((::PBYTE)hIl2Cpp + LAAPBEDDAFC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAAPBEDDAFC_ONTASKBEGIN_OFFSET))(this);
		}

	};
