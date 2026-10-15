#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ModifySkillPropertyByType; }
namespace RPG::GameCore { class TaskContext; }

#define DJKCDLMEGOJ_CTOR_OFFSET UNITYSDK_OFFSET(0xF2392E0)
#define DJKCDLMEGOJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF2392F0)
#define DJKCDLMEGOJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF239330)
#define DJKCDLMEGOJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF239790)
#define DJKCDLMEGOJ_TICK_OFFSET UNITYSDK_OFFSET(0xF2397E0)

	class DJKCDLMEGOJ : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ModifySkillPropertyByType* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifySkillPropertyByType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifySkillPropertyByType*))((::PBYTE)hIl2Cpp + DJKCDLMEGOJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJKCDLMEGOJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJKCDLMEGOJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJKCDLMEGOJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DJKCDLMEGOJ_TICK_OFFSET))(this, a1);
		}

	};
