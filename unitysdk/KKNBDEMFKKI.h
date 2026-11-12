#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ForcePlayerLockAdventureTarget; }
namespace RPG::GameCore { class TaskContext; }

#define KKNBDEMFKKI_CTOR_OFFSET UNITYSDK_OFFSET(0xBD1F420)
#define KKNBDEMFKKI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD1F450)
#define KKNBDEMFKKI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBD1F490)

inline static constexpr unsigned int KKNBDEMFKKI_TypeDefinitionIndex = 54056;

	class KKNBDEMFKKI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ForcePlayerLockAdventureTarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ForcePlayerLockAdventureTarget*))((::PBYTE)hIl2Cpp + KKNBDEMFKKI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKNBDEMFKKI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKNBDEMFKKI_ONTASKBEGIN_OFFSET))(this);
		}

	};
