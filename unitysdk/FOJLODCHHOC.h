#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class CreateLevelAreas; }
namespace RPG::GameCore { class TaskContext; }

#define FOJLODCHHOC_CTOR_OFFSET UNITYSDK_OFFSET(0x158F6300)
#define FOJLODCHHOC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x158F6310)
#define FOJLODCHHOC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x158F6350)
#define FOJLODCHHOC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x158F6540)
#define FOJLODCHHOC_TICK_OFFSET UNITYSDK_OFFSET(0x158F6590)

inline static constexpr unsigned int FOJLODCHHOC_TypeDefinitionIndex = 58049;

	class FOJLODCHHOC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::CreateLevelAreas* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateLevelAreas* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateLevelAreas*))((::PBYTE)hIl2Cpp + FOJLODCHHOC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOJLODCHHOC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOJLODCHHOC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOJLODCHHOC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FOJLODCHHOC_TICK_OFFSET))(this, a1);
		}

	};
