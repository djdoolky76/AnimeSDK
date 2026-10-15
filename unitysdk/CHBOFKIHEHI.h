#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class CollectionStopBubbleTalk; }
namespace RPG::GameCore { class TaskContext; }

#define CHBOFKIHEHI_CTOR_OFFSET UNITYSDK_OFFSET(0xCC918D0)
#define CHBOFKIHEHI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCC918E0)
#define CHBOFKIHEHI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCC91920)
#define CHBOFKIHEHI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCC91B60)
#define CHBOFKIHEHI_TICK_OFFSET UNITYSDK_OFFSET(0xCC91BB0)

	class CHBOFKIHEHI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::CollectionStopBubbleTalk* OFKGLJOAMLD; // 0x20
		// static const ::System::String* JPJAMENFBKD; // 0x0
		// static const ::System::String* NOIGFGJJDLB; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CollectionStopBubbleTalk* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CollectionStopBubbleTalk*))((::PBYTE)hIl2Cpp + CHBOFKIHEHI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHBOFKIHEHI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHBOFKIHEHI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHBOFKIHEHI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CHBOFKIHEHI_TICK_OFFSET))(this, a1);
		}

	};
