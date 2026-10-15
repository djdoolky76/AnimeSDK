#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ShowUltraSkillAlternative; }
namespace RPG::GameCore { class TaskContext; }

#define LIMCDNMOMAI_CTOR_OFFSET UNITYSDK_OFFSET(0xB6D40F0)
#define LIMCDNMOMAI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6D4100)
#define LIMCDNMOMAI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB6D4140)
#define LIMCDNMOMAI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB6D41C0)
#define LIMCDNMOMAI_TICK_OFFSET UNITYSDK_OFFSET(0xB6D4210)

inline static constexpr unsigned int LIMCDNMOMAI_TypeDefinitionIndex = 56460;

	class LIMCDNMOMAI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ShowUltraSkillAlternative* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowUltraSkillAlternative* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowUltraSkillAlternative*))((::PBYTE)hIl2Cpp + LIMCDNMOMAI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIMCDNMOMAI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIMCDNMOMAI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIMCDNMOMAI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LIMCDNMOMAI_TICK_OFFSET))(this, a1);
		}

	};
