#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class CheckAvatarSkill; }
namespace RPG::GameCore { class TaskContext; }

#define PLHFKDJPBPI_CTOR_OFFSET UNITYSDK_OFFSET(0x1888B6A0)
#define PLHFKDJPBPI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1888B6B0)
#define PLHFKDJPBPI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1888B6F0)
#define PLHFKDJPBPI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1888B740)
#define PLHFKDJPBPI_TICK_OFFSET UNITYSDK_OFFSET(0x1888B790)

inline static constexpr unsigned int PLHFKDJPBPI_TypeDefinitionIndex = 59253;

	class PLHFKDJPBPI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::CheckAvatarSkill* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CheckAvatarSkill* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CheckAvatarSkill*))((::PBYTE)hIl2Cpp + PLHFKDJPBPI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHFKDJPBPI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHFKDJPBPI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHFKDJPBPI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PLHFKDJPBPI_TICK_OFFSET))(this, a1);
		}

	};
