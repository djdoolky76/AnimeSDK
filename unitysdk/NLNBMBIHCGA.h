#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SkillPerformFinish; }
namespace RPG::GameCore { class TaskContext; }

#define NLNBMBIHCGA_CTOR_OFFSET UNITYSDK_OFFSET(0x1A435590)
#define NLNBMBIHCGA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A4355A0)
#define NLNBMBIHCGA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A4355E0)
#define NLNBMBIHCGA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A4357E0)
#define NLNBMBIHCGA_TICK_OFFSET UNITYSDK_OFFSET(0x1A435830)

inline static constexpr unsigned int NLNBMBIHCGA_TypeDefinitionIndex = 56820;

	class NLNBMBIHCGA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SkillPerformFinish* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SkillPerformFinish* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SkillPerformFinish*))((::PBYTE)hIl2Cpp + NLNBMBIHCGA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNBMBIHCGA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNBMBIHCGA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNBMBIHCGA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NLNBMBIHCGA_TICK_OFFSET))(this, a1);
		}

	};
