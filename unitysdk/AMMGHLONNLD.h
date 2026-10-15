#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetTrackingMission; }
namespace RPG::GameCore { class TaskContext; }

#define AMMGHLONNLD_CTOR_OFFSET UNITYSDK_OFFSET(0x1557B310)
#define AMMGHLONNLD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1557B320)
#define AMMGHLONNLD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1557B360)
#define AMMGHLONNLD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1557B4A0)
#define AMMGHLONNLD_TICK_OFFSET UNITYSDK_OFFSET(0x1557B4F0)

inline static constexpr unsigned int AMMGHLONNLD_TypeDefinitionIndex = 53258;

	class AMMGHLONNLD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::SetTrackingMission* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTrackingMission* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTrackingMission*))((::PBYTE)hIl2Cpp + AMMGHLONNLD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMMGHLONNLD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMMGHLONNLD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMMGHLONNLD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AMMGHLONNLD_TICK_OFFSET))(this, a1);
		}

	};
