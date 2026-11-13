#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class PIFNKBOOHNB;
namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define IJBDHLMEIEI_CTOR_OFFSET UNITYSDK_OFFSET(0x1803FA10)
#define IJBDHLMEIEI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1803FCA0)
#define IJBDHLMEIEI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1803FA80)
#define IJBDHLMEIEI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1803FBC0)
#define IJBDHLMEIEI_TICK_OFFSET UNITYSDK_OFFSET(0x1803FCF0)

inline static constexpr unsigned int IJBDHLMEIEI_TypeDefinitionIndex = 59314;

	class IJBDHLMEIEI : public ::GELIALJDFBL
	{
	public:
		::PIFNKBOOHNB* OFKGLJOAMLD; // 0x18
		::RPG::Client::Stage* PKLNPNKEJOO; // 0x20
		::System::String* FKFFINDOLOJ; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::PIFNKBOOHNB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::PIFNKBOOHNB*))((::PBYTE)hIl2Cpp + IJBDHLMEIEI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJBDHLMEIEI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJBDHLMEIEI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJBDHLMEIEI_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IJBDHLMEIEI_TICK_OFFSET))(this, a1);
		}

	};
