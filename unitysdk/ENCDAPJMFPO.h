#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ClearAISkillUseRecord; }
namespace RPG::GameCore { class TaskContext; }

#define ENCDAPJMFPO_CTOR_OFFSET UNITYSDK_OFFSET(0x164B7740)
#define ENCDAPJMFPO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x164B7750)
#define ENCDAPJMFPO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x164B7790)
#define ENCDAPJMFPO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x164B78C0)
#define ENCDAPJMFPO_TICK_OFFSET UNITYSDK_OFFSET(0x164B7910)

inline static constexpr unsigned int ENCDAPJMFPO_TypeDefinitionIndex = 56131;

	class ENCDAPJMFPO : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ClearAISkillUseRecord* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClearAISkillUseRecord* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClearAISkillUseRecord*))((::PBYTE)hIl2Cpp + ENCDAPJMFPO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENCDAPJMFPO_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENCDAPJMFPO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENCDAPJMFPO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENCDAPJMFPO_TICK_OFFSET))(this, a1);
		}

	};
