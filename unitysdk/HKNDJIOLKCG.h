#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnInsertAssistantAbility; }

#define HKNDJIOLKCG_CTOR_OFFSET UNITYSDK_OFFSET(0x15D502D0)
#define HKNDJIOLKCG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15D502E0)
#define HKNDJIOLKCG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15D50320)
#define HKNDJIOLKCG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15D50370)
#define HKNDJIOLKCG_TICK_OFFSET UNITYSDK_OFFSET(0x15D503C0)

inline static constexpr unsigned int HKNDJIOLKCG_TypeDefinitionIndex = 55779;

	class HKNDJIOLKCG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::TurnInsertAssistantAbility* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TurnInsertAssistantAbility* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TurnInsertAssistantAbility*))((::PBYTE)hIl2Cpp + HKNDJIOLKCG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNDJIOLKCG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNDJIOLKCG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNDJIOLKCG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HKNDJIOLKCG_TICK_OFFSET))(this, a1);
		}

	};
