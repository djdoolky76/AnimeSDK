#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KDJNAAOFMMJ;
namespace RPG::GameCore { class DialogueEventSwitch; }
namespace RPG::GameCore { class TaskContext; }

#define GDPOHCCPMGN_CTOR_OFFSET UNITYSDK_OFFSET(0x159B98E0)
#define GDPOHCCPMGN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x159B98F0)
#define GDPOHCCPMGN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x159B9950)
#define GDPOHCCPMGN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x159B99D0)
#define GDPOHCCPMGN_TICK_OFFSET UNITYSDK_OFFSET(0x159B9A20)

inline static constexpr unsigned int GDPOHCCPMGN_TypeDefinitionIndex = 58080;

	class GDPOHCCPMGN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::DialogueEventSwitch* OFKGLJOAMLD; // 0x18
		::KDJNAAOFMMJ* FPKJLMMPIFL; // 0x20
		::KDJNAAOFMMJ* IJDHPCEMBHG; // 0x28
		::KDJNAAOFMMJ* KPDELFCJIIA; // 0x30
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DialogueEventSwitch* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DialogueEventSwitch*))((::PBYTE)hIl2Cpp + GDPOHCCPMGN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDPOHCCPMGN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDPOHCCPMGN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDPOHCCPMGN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GDPOHCCPMGN_TICK_OFFSET))(this, a1);
		}

	};
