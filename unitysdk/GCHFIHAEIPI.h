#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RogueMagicShowScepterActiveEffect; }
namespace RPG::GameCore { class TaskContext; }

#define GCHFIHAEIPI_CTOR_OFFSET UNITYSDK_OFFSET(0x15960510)
#define GCHFIHAEIPI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15960540)

inline static constexpr unsigned int GCHFIHAEIPI_TypeDefinitionIndex = 58470;

	class GCHFIHAEIPI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueMagicShowScepterActiveEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueMagicShowScepterActiveEffect*))((::PBYTE)hIl2Cpp + GCHFIHAEIPI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCHFIHAEIPI_ONTASKBEGIN_OFFSET))(this);
		}

	};
