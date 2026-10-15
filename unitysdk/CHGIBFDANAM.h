#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetTargetAnimSpeedScale; }
namespace RPG::GameCore { class TaskContext; }

#define CHGIBFDANAM_CTOR_OFFSET UNITYSDK_OFFSET(0xCF493C0)
#define CHGIBFDANAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCF493D0)
#define CHGIBFDANAM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCF49410)
#define CHGIBFDANAM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCF49610)
#define CHGIBFDANAM_TICK_OFFSET UNITYSDK_OFFSET(0xCF49660)

	class CHGIBFDANAM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SetTargetAnimSpeedScale* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTargetAnimSpeedScale* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTargetAnimSpeedScale*))((::PBYTE)hIl2Cpp + CHGIBFDANAM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGIBFDANAM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGIBFDANAM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGIBFDANAM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CHGIBFDANAM_TICK_OFFSET))(this, a1);
		}

	};
