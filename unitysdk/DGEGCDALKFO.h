#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitFrameForBattleServer; }

#define DGEGCDALKFO_CTOR_OFFSET UNITYSDK_OFFSET(0xE83A1F0)
#define DGEGCDALKFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE83A200)
#define DGEGCDALKFO_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xE83A240)
#define DGEGCDALKFO_ONSKIP_OFFSET UNITYSDK_OFFSET(0xE83A2A0)
#define DGEGCDALKFO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE83A2F0)
#define DGEGCDALKFO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE83A250)
#define DGEGCDALKFO_TICK_OFFSET UNITYSDK_OFFSET(0xE83A340)

inline static constexpr unsigned int DGEGCDALKFO_TypeDefinitionIndex = 58897;

	class DGEGCDALKFO : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::WaitFrameForBattleServer* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::UInt64 JFMEEDGDMKP; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitFrameForBattleServer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitFrameForBattleServer*))((::PBYTE)hIl2Cpp + DGEGCDALKFO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGEGCDALKFO_DISPOSE_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DGEGCDALKFO_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGEGCDALKFO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGEGCDALKFO_ONSKIP_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGEGCDALKFO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DGEGCDALKFO_TICK_OFFSET))(this, a1);
		}

	};
