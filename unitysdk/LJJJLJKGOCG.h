#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ShowMissionInfo; }
namespace RPG::GameCore { class TaskContext; }

#define LJJJLJKGOCG_CTOR_OFFSET UNITYSDK_OFFSET(0xB71A200)
#define LJJJLJKGOCG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB71A210)
#define LJJJLJKGOCG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB71A250)
#define LJJJLJKGOCG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB71A300)
#define LJJJLJKGOCG_TICK_OFFSET UNITYSDK_OFFSET(0xB71A350)

inline static constexpr unsigned int LJJJLJKGOCG_TypeDefinitionIndex = 53280;

	class LJJJLJKGOCG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ShowMissionInfo* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowMissionInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowMissionInfo*))((::PBYTE)hIl2Cpp + LJJJLJKGOCG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJJLJKGOCG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJJLJKGOCG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJJLJKGOCG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LJJJLJKGOCG_TICK_OFFSET))(this, a1);
		}

	};
