#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TakeMission; }
namespace RPG::GameCore { class TaskContext; }

#define BJFKGICLGAA_CTOR_OFFSET UNITYSDK_OFFSET(0xB799600)
#define BJFKGICLGAA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB799610)
#define BJFKGICLGAA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB799650)
#define BJFKGICLGAA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB7996A0)
#define BJFKGICLGAA_TICK_OFFSET UNITYSDK_OFFSET(0xB7996F0)

	class BJFKGICLGAA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TakeMission* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TakeMission* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TakeMission*))((::PBYTE)hIl2Cpp + BJFKGICLGAA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJFKGICLGAA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJFKGICLGAA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJFKGICLGAA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BJFKGICLGAA_TICK_OFFSET))(this, a1);
		}

	};
