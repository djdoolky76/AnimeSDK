#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatInsertAbilityPriority.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/InsertAbilityState.h"
#include "unitysdk/System/Object.h"
class EHMBINMCDGN;
class ENPEGNGIAEI;
namespace RPG::GameCore { class DiceCombatInsertAbilityConfig; }
namespace System { class String; }

#define GKIENEOOMBC_BGDKFHEBDFJ_OFFSET UNITYSDK_OFFSET(0x1C615EF0)
#define GKIENEOOMBC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C615F00)
#define GKIENEOOMBC_IIKGCECHMKC_OFFSET UNITYSDK_OFFSET(0x1C6160A0)
#define GKIENEOOMBC_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1C616010)
#define GKIENEOOMBC_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0x1C615EB0)
#define GKIENEOOMBC_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x1C615F80)
#define GKIENEOOMBC_PLNCKLJOJME_OFFSET UNITYSDK_OFFSET(0x1C615ED0)

inline static constexpr unsigned int GKIENEOOMBC_TypeDefinitionIndex = 36427;

	class GKIENEOOMBC : public ::System::Object
	{
	public:
		::RPG::GameCore::DiceCombatInsertAbilityConfig* IGHAHBNLIJA; // 0x10
		::ENPEGNGIAEI* INJAFKILCKC; // 0x18
		::EHMBINMCDGN* EEFMDEHLLFI; // 0x20
		::RPG::LittleGameShare::DiceCombatCore::InsertAbilityState DLNIGFGLPLJ; // 0x28
		::System::Void _ctor(::EHMBINMCDGN* a1, ::RPG::GameCore::DiceCombatInsertAbilityConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::EHMBINMCDGN*, ::RPG::GameCore::DiceCombatInsertAbilityConfig*))((::PBYTE)hIl2Cpp + GKIENEOOMBC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* MLMGEFIOION()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKIENEOOMBC_MLMGEFIOION_OFFSET))(this);
		}

		::RPG::GameCore::DiceCombatInsertAbilityPriority PLNCKLJOJME()
		{
			return ((::RPG::GameCore::DiceCombatInsertAbilityPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + GKIENEOOMBC_PLNCKLJOJME_OFFSET))(this);
		}

		::RPG::LittleGameShare::DiceCombatCore::InsertAbilityState BGDKFHEBDFJ()
		{
			return ((::RPG::LittleGameShare::DiceCombatCore::InsertAbilityState(*)(::PVOID))((::PBYTE)hIl2Cpp + GKIENEOOMBC_BGDKFHEBDFJ_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKIENEOOMBC_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GKIENEOOMBC_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Boolean IIKGCECHMKC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GKIENEOOMBC_IIKGCECHMKC_OFFSET))(this);
		}

	};
