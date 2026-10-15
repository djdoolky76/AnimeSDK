#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
namespace RPG::GameCore { class HideModifierEffect; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define PNDFDCGOLNN_CTOR_OFFSET UNITYSDK_OFFSET(0xC32C2F0)
#define PNDFDCGOLNN_JHLKCDBJJJF_OFFSET UNITYSDK_OFFSET(0xC32CD00)
#define PNDFDCGOLNN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC32C320)

inline static constexpr unsigned int PNDFDCGOLNN_TypeDefinitionIndex = 55099;

	class PNDFDCGOLNN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HideModifierEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HideModifierEffect*))((::PBYTE)hIl2Cpp + PNDFDCGOLNN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNDFDCGOLNN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean JHLKCDBJJJF(::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + PNDFDCGOLNN_JHLKCDBJJJF_OFFSET))(this, a1, a2);
		}

	};
