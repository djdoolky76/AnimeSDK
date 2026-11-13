#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetSkillButtonAdditionalStatus; }
namespace RPG::GameCore { class TaskContext; }

#define NHKFHFBOGKD_CTOR_OFFSET UNITYSDK_OFFSET(0x148A6340)
#define NHKFHFBOGKD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x148A6350)
#define NHKFHFBOGKD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x148A6390)
#define NHKFHFBOGKD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x148A64B0)
#define NHKFHFBOGKD_TICK_OFFSET UNITYSDK_OFFSET(0x148A6500)

inline static constexpr unsigned int NHKFHFBOGKD_TypeDefinitionIndex = 56759;

	class NHKFHFBOGKD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::SetSkillButtonAdditionalStatus* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetSkillButtonAdditionalStatus* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetSkillButtonAdditionalStatus*))((::PBYTE)hIl2Cpp + NHKFHFBOGKD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHKFHFBOGKD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHKFHFBOGKD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHKFHFBOGKD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NHKFHFBOGKD_TICK_OFFSET))(this, a1);
		}

	};
