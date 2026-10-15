#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerDialogueEvent; }

#define LBEGLKNAMAG_CTOR_OFFSET UNITYSDK_OFFSET(0xB5F9B10)
#define LBEGLKNAMAG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB5F9B20)
#define LBEGLKNAMAG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB5F9B60)
#define LBEGLKNAMAG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB5F9BB0)
#define LBEGLKNAMAG_TICK_OFFSET UNITYSDK_OFFSET(0xB5F9C00)

inline static constexpr unsigned int LBEGLKNAMAG_TypeDefinitionIndex = 58777;

	class LBEGLKNAMAG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TriggerDialogueEvent* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerDialogueEvent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerDialogueEvent*))((::PBYTE)hIl2Cpp + LBEGLKNAMAG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBEGLKNAMAG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBEGLKNAMAG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBEGLKNAMAG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LBEGLKNAMAG_TICK_OFFSET))(this, a1);
		}

	};
