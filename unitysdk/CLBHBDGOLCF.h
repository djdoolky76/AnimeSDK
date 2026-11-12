#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class MonopolyShowSwitchFromSpeTransition; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLBHBDGOLCF_CTOR_OFFSET UNITYSDK_OFFSET(0xE0B0C00)
#define CLBHBDGOLCF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE0B1080)
#define CLBHBDGOLCF_HAGCCEGONKL_OFFSET UNITYSDK_OFFSET(0xE0B0D90)
#define CLBHBDGOLCF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE0B0C10)
#define CLBHBDGOLCF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE0B0FF0)
#define CLBHBDGOLCF_TICK_OFFSET UNITYSDK_OFFSET(0xE0B1100)

inline static constexpr unsigned int CLBHBDGOLCF_TypeDefinitionIndex = 59478;

	class CLBHBDGOLCF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::MonopolyShowSwitchFromSpeTransition* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
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
