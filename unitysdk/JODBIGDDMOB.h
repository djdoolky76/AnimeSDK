#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EBMMGODFEEO;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitTimeline; }

#define JODBIGDDMOB_CTOR_OFFSET UNITYSDK_OFFSET(0xB298CC0)
#define JODBIGDDMOB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB298CE0)
#define JODBIGDDMOB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB298D20)
#define JODBIGDDMOB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB298E60)
#define JODBIGDDMOB_TICK_OFFSET UNITYSDK_OFFSET(0xB298EB0)

inline static constexpr unsigned int JODBIGDDMOB_TypeDefinitionIndex = 56483;

	class JODBIGDDMOB : public ::GELIALJDFBL
	{
	public:
		::EBMMGODFEEO* BMHGECJDFGN; // 0x18
		::RPG::GameCore::WaitTimeline* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitTimeline* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitTimeline*))((::PBYTE)hIl2Cpp + JODBIGDDMOB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JODBIGDDMOB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JODBIGDDMOB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JODBIGDDMOB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JODBIGDDMOB_TICK_OFFSET))(this, a1);
		}

	};
