#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NFGABLAPMIA.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/TurnBasedModifierCallbackType.h"
#include "unitysdk/RPG/GameCore/TurnBasedModifierEvent.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define KCMIEEABLIA_OECFOHFAIBF_1_OFFSET UNITYSDK_OFFSET(0x135A0)
#define KCMIEEABLIA_OECFOHFAIBF_OFFSET UNITYSDK_OFFSET(0x13590)

inline static constexpr unsigned int KCMIEEABLIA_TypeDefinitionIndex = 54671;

	struct alignas(8) KCMIEEABLIA
	{
		::RPG::GameCore::TurnBasedModifierInstance* ILIIOLJMKME; // 0x10
		::NFGABLAPMIA BFLIFKBEOPJ; // 0x18
		::RPG::GameCore::TurnBasedModifierCallbackType GMPGDEINODK; // 0x1C
		::System::Boolean OECFOHFAIBF(::Il2CppArray<::RPG::GameCore::TurnBasedModifierEvent>* a1, ::Il2CppArray<::RPG::GameCore::AbilityProperty>* a2, ::Il2CppArray<::RPG::GameCore::StringHash>* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TurnBasedModifierEvent>*, ::Il2CppArray<::RPG::GameCore::AbilityProperty>*, ::Il2CppArray<::RPG::GameCore::StringHash>*))((::PBYTE)hIl2Cpp + KCMIEEABLIA_OECFOHFAIBF_OFFSET))(this, a1, a2, a3);
		}

		/*
		::System::Boolean OECFOHFAIBF_1(::KCMIEEABLIA a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KCMIEEABLIA))((::PBYTE)hIl2Cpp + KCMIEEABLIA_OECFOHFAIBF_1_OFFSET))(this, a1);
		}
		*/

	};
