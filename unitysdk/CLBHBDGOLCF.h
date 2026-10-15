#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class MonopolyShowSwitchFromSpeTransition; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLBHBDGOLCF_CTOR_OFFSET UNITYSDK_OFFSET(0xD7763C0)
#define CLBHBDGOLCF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD776840)
#define CLBHBDGOLCF_HAGCCEGONKL_OFFSET UNITYSDK_OFFSET(0xD776550)
#define CLBHBDGOLCF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD7763D0)
#define CLBHBDGOLCF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD7767B0)
#define CLBHBDGOLCF_TICK_OFFSET UNITYSDK_OFFSET(0xD7768C0)

	class CLBHBDGOLCF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::MonopolyShowSwitchFromSpeTransition* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MonopolyShowSwitchFromSpeTransition* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MonopolyShowSwitchFromSpeTransition*))((::PBYTE)hIl2Cpp + CLBHBDGOLCF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLBHBDGOLCF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void HAGCCEGONKL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLBHBDGOLCF_HAGCCEGONKL_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLBHBDGOLCF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLBHBDGOLCF_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLBHBDGOLCF_TICK_OFFSET))(this, a1);
		}

	};
