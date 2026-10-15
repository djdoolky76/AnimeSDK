#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class RemoveEntityFromTeamFormation; }
namespace RPG::GameCore { class TaskContext; }

#define DKJLMNKAGMK_CTOR_OFFSET UNITYSDK_OFFSET(0xF8883B0)
#define DKJLMNKAGMK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF8883C0)
#define DKJLMNKAGMK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF888400)
#define DKJLMNKAGMK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF888640)
#define DKJLMNKAGMK_TICK_OFFSET UNITYSDK_OFFSET(0xF888690)

inline static constexpr unsigned int DKJLMNKAGMK_TypeDefinitionIndex = 55304;

	class DKJLMNKAGMK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::RemoveEntityFromTeamFormation* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveEntityFromTeamFormation* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveEntityFromTeamFormation*))((::PBYTE)hIl2Cpp + DKJLMNKAGMK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKJLMNKAGMK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKJLMNKAGMK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKJLMNKAGMK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DKJLMNKAGMK_TICK_OFFSET))(this, a1);
		}

	};
