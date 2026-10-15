#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/RPG/GameCore/TurnBasedModifierEvent.h"
namespace RPG::GameCore { class ByIsInModifierCallback; }
namespace RPG::GameCore { class TaskContext; }

#define NPDLCNDBOAE_CTOR_OFFSET UNITYSDK_OFFSET(0xBCF3A30)
#define NPDLCNDBOAE_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBCF3C30)

inline static constexpr unsigned int NPDLCNDBOAE_TypeDefinitionIndex = 54668;

	class NPDLCNDBOAE
	{
	public:
		::Il2CppArray<::RPG::GameCore::AbilityProperty>* NHBCLNHKCHA; // 0x28
		::Il2CppArray<::RPG::GameCore::TurnBasedModifierEvent>* APAKIPKCAOA; // 0x30
		::Il2CppArray<::RPG::GameCore::StringHash>* GHBNDDNICLA; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsInModifierCallback* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsInModifierCallback*))((::PBYTE)hIl2Cpp + NPDLCNDBOAE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPDLCNDBOAE_EVALUATE_OFFSET))(this);
		}

	};
