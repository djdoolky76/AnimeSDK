#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class StopNPCBubbleTalk; }
namespace RPG::GameCore { class TaskContext; }

#define MDENPLNJACN_CTOR_OFFSET UNITYSDK_OFFSET(0xB89C3E0)
#define MDENPLNJACN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB89C3F0)
#define MDENPLNJACN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB89C430)
#define MDENPLNJACN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB89C580)
#define MDENPLNJACN_TICK_OFFSET UNITYSDK_OFFSET(0xB89C5D0)

inline static constexpr unsigned int MDENPLNJACN_TypeDefinitionIndex = 58734;

	class MDENPLNJACN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::StopNPCBubbleTalk* OFKGLJOAMLD; // 0x20
		// static const ::System::String* JPJAMENFBKD; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StopNPCBubbleTalk* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StopNPCBubbleTalk*))((::PBYTE)hIl2Cpp + MDENPLNJACN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDENPLNJACN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDENPLNJACN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDENPLNJACN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MDENPLNJACN_TICK_OFFSET))(this, a1);
		}

	};
