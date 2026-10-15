#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class PIFNKBOOHNB;
namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define IJBDHLMEIEI_CTOR_OFFSET UNITYSDK_OFFSET(0x16458A30)
#define IJBDHLMEIEI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16458CC0)
#define IJBDHLMEIEI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16458AA0)
#define IJBDHLMEIEI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16458BE0)
#define IJBDHLMEIEI_TICK_OFFSET UNITYSDK_OFFSET(0x16458D10)

inline static constexpr unsigned int IJBDHLMEIEI_TypeDefinitionIndex = 58075;

	class IJBDHLMEIEI : public ::GELIALJDFBL
	{
	public:
		::PIFNKBOOHNB* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::Client::Stage* PKLNPNKEJOO; // 0x28
		::System::String* FKFFINDOLOJ; // 0x30
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
