#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class RogueDLC1Dot3ImmediateNotify; }
namespace RPG::GameCore { class TaskContext; }

#define EGCJPPNOHJJ_CTOR_OFFSET UNITYSDK_OFFSET(0x13A60090)
#define EGCJPPNOHJJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13A600A0)
#define EGCJPPNOHJJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13A60140)
#define EGCJPPNOHJJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13A601C0)
#define EGCJPPNOHJJ_TICK_OFFSET UNITYSDK_OFFSET(0x13A600E0)

inline static constexpr unsigned int EGCJPPNOHJJ_TypeDefinitionIndex = 58457;

	class EGCJPPNOHJJ : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::RogueDLC1Dot3ImmediateNotify* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueDLC1Dot3ImmediateNotify* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueDLC1Dot3ImmediateNotify*))((::PBYTE)hIl2Cpp + EGCJPPNOHJJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGCJPPNOHJJ_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EGCJPPNOHJJ_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGCJPPNOHJJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGCJPPNOHJJ_ONTASKRESET_OFFSET))(this);
		}

	};
