#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetLocalWinFlag; }
namespace RPG::GameCore { class TaskContext; }

#define KINIKFIDKPB_CTOR_OFFSET UNITYSDK_OFFSET(0xB42F740)
#define KINIKFIDKPB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB42F750)
#define KINIKFIDKPB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB42F790)
#define KINIKFIDKPB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB42F820)
#define KINIKFIDKPB_TICK_OFFSET UNITYSDK_OFFSET(0xB42F870)

inline static constexpr unsigned int KINIKFIDKPB_TypeDefinitionIndex = 58554;

	class KINIKFIDKPB : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SetLocalWinFlag* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetLocalWinFlag* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetLocalWinFlag*))((::PBYTE)hIl2Cpp + KINIKFIDKPB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KINIKFIDKPB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KINIKFIDKPB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KINIKFIDKPB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KINIKFIDKPB_TICK_OFFSET))(this, a1);
		}

	};
