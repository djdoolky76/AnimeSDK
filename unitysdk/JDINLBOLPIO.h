#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetIronTombProgress; }
namespace RPG::GameCore { class TaskContext; }

#define JDINLBOLPIO_CTOR_OFFSET UNITYSDK_OFFSET(0x169916A0)
#define JDINLBOLPIO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x169916D0)

inline static constexpr unsigned int JDINLBOLPIO_TypeDefinitionIndex = 56718;

	class JDINLBOLPIO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetIronTombProgress* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetIronTombProgress*))((::PBYTE)hIl2Cpp + JDINLBOLPIO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDINLBOLPIO_ONTASKBEGIN_OFFSET))(this);
		}

	};
