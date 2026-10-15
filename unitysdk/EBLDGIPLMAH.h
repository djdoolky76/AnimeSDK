#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class PPFilterStackEffectUpdate; }
namespace RPG::GameCore { class TaskContext; }

#define EBLDGIPLMAH_CTOR_OFFSET UNITYSDK_OFFSET(0x12D00A80)
#define EBLDGIPLMAH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12D00A90)
#define EBLDGIPLMAH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12D00AD0)
#define EBLDGIPLMAH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12D00EA0)
#define EBLDGIPLMAH_TICK_OFFSET UNITYSDK_OFFSET(0x12D00EF0)

	class EBLDGIPLMAH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::PPFilterStackEffectUpdate* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PPFilterStackEffectUpdate* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PPFilterStackEffectUpdate*))((::PBYTE)hIl2Cpp + EBLDGIPLMAH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBLDGIPLMAH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBLDGIPLMAH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBLDGIPLMAH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EBLDGIPLMAH_TICK_OFFSET))(this, a1);
		}

	};
