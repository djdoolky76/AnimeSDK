#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetMonsterStanceVulnerable; }
namespace RPG::GameCore { class TaskContext; }

#define IKAPOALLJOE_CTOR_OFFSET UNITYSDK_OFFSET(0x164818B0)
#define IKAPOALLJOE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x164818C0)
#define IKAPOALLJOE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16481900)
#define IKAPOALLJOE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16481C90)
#define IKAPOALLJOE_TICK_OFFSET UNITYSDK_OFFSET(0x16481CE0)

inline static constexpr unsigned int IKAPOALLJOE_TypeDefinitionIndex = 56416;

	class IKAPOALLJOE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SetMonsterStanceVulnerable* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetMonsterStanceVulnerable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetMonsterStanceVulnerable*))((::PBYTE)hIl2Cpp + IKAPOALLJOE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKAPOALLJOE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKAPOALLJOE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKAPOALLJOE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IKAPOALLJOE_TICK_OFFSET))(this, a1);
		}

	};
