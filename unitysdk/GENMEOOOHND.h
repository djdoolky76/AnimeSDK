#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerUITopEffect; }

#define GENMEOOOHND_CTOR_OFFSET UNITYSDK_OFFSET(0x159D7200)
#define GENMEOOOHND_DISPOSE_OFFSET UNITYSDK_OFFSET(0x159D7210)
#define GENMEOOOHND_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x159D7250)
#define GENMEOOOHND_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x159D7560)
#define GENMEOOOHND_TICK_OFFSET UNITYSDK_OFFSET(0x159D75B0)

inline static constexpr unsigned int GENMEOOOHND_TypeDefinitionIndex = 55770;

	class GENMEOOOHND : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TriggerUITopEffect* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerUITopEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerUITopEffect*))((::PBYTE)hIl2Cpp + GENMEOOOHND_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GENMEOOOHND_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GENMEOOOHND_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GENMEOOOHND_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GENMEOOOHND_TICK_OFFSET))(this, a1);
		}

	};
