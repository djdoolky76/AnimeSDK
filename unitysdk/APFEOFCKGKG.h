#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerPamMovePhaseTalkWait; }

#define APFEOFCKGKG_CTOR_OFFSET UNITYSDK_OFFSET(0x15B9C3A0)
#define APFEOFCKGKG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15B9C3B0)
#define APFEOFCKGKG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15B9C3F0)
#define APFEOFCKGKG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15B9C4C0)
#define APFEOFCKGKG_TICK_OFFSET UNITYSDK_OFFSET(0x15B9C590)

inline static constexpr unsigned int APFEOFCKGKG_TypeDefinitionIndex = 58984;

	class APFEOFCKGKG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerPamMovePhaseTalkWait* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerPamMovePhaseTalkWait*))((::PBYTE)hIl2Cpp + APFEOFCKGKG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APFEOFCKGKG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APFEOFCKGKG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APFEOFCKGKG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + APFEOFCKGKG_TICK_OFFSET))(this, a1);
		}

	};
