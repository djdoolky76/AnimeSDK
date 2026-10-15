#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerAnimStateOnModifierCustomEvent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define OPBJJEHDHJG_CTOR_OFFSET UNITYSDK_OFFSET(0xBF98900)
#define OPBJJEHDHJG_JHLKCDBJJJF_OFFSET UNITYSDK_OFFSET(0xBF98F40)
#define OPBJJEHDHJG_MNFMPPEBNKJ_OFFSET UNITYSDK_OFFSET(0xBF98EC0)
#define OPBJJEHDHJG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF98930)

inline static constexpr unsigned int OPBJJEHDHJG_TypeDefinitionIndex = 55714;

	class OPBJJEHDHJG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerAnimStateOnModifierCustomEvent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerAnimStateOnModifierCustomEvent*))((::PBYTE)hIl2Cpp + OPBJJEHDHJG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPBJJEHDHJG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean JHLKCDBJJJF(::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + OPBJJEHDHJG_JHLKCDBJJJF_OFFSET))(this, a1, a2);
		}

		::System::Boolean MNFMPPEBNKJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OPBJJEHDHJG_MNFMPPEBNKJ_OFFSET))(this);
		}

	};
