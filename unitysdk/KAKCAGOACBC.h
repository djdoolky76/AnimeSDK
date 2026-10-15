#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class OverrideAdventureCharacterTiltConfig; }
namespace RPG::GameCore { class TaskContext; }

#define KAKCAGOACBC_CTOR_OFFSET UNITYSDK_OFFSET(0xB2D4230)
#define KAKCAGOACBC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB2D4260)

inline static constexpr unsigned int KAKCAGOACBC_TypeDefinitionIndex = 53046;

	class KAKCAGOACBC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OverrideAdventureCharacterTiltConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OverrideAdventureCharacterTiltConfig*))((::PBYTE)hIl2Cpp + KAKCAGOACBC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKCAGOACBC_ONTASKBEGIN_OFFSET))(this);
		}

	};
