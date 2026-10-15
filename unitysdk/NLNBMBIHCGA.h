#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SkillPerformFinish; }
namespace RPG::GameCore { class TaskContext; }

#define NLNBMBIHCGA_CTOR_OFFSET UNITYSDK_OFFSET(0xBC6F5D0)
#define NLNBMBIHCGA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC6F5E0)
#define NLNBMBIHCGA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC6F620)
#define NLNBMBIHCGA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBC6F820)
#define NLNBMBIHCGA_TICK_OFFSET UNITYSDK_OFFSET(0xBC6F870)

inline static constexpr unsigned int NLNBMBIHCGA_TypeDefinitionIndex = 55622;

	class NLNBMBIHCGA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::SkillPerformFinish* OFKGLJOAMLD; // 0x20
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
