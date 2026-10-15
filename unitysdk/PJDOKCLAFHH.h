#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetMonsterStanceBarStyle; }
namespace RPG::GameCore { class TaskContext; }

#define PJDOKCLAFHH_CTOR_OFFSET UNITYSDK_OFFSET(0xC27BC10)
#define PJDOKCLAFHH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC27BC20)
#define PJDOKCLAFHH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC27BC60)
#define PJDOKCLAFHH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC27C060)
#define PJDOKCLAFHH_TICK_OFFSET UNITYSDK_OFFSET(0xC27C0B0)

inline static constexpr unsigned int PJDOKCLAFHH_TypeDefinitionIndex = 56415;

	class PJDOKCLAFHH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::SetMonsterStanceBarStyle* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetMonsterStanceBarStyle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetMonsterStanceBarStyle*))((::PBYTE)hIl2Cpp + PJDOKCLAFHH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJDOKCLAFHH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJDOKCLAFHH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJDOKCLAFHH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PJDOKCLAFHH_TICK_OFFSET))(this, a1);
		}

	};
