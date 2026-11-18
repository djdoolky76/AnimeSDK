#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHELLEGKALM.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MoleMole/EntityHandle.h"

namespace MoleMole { class EntitySpawnSubsystem_EntitySpawnRequest; }

#define BNHPDBDCOAJ_GAPLNCJEKNN_OFFSET UNITYSDK_OFFSET(0x3E3C90)
#define BNHPDBDCOAJ_GBABKAFFBBL_OFFSET UNITYSDK_OFFSET(0x74BCC0)
#define BNHPDBDCOAJ_IBNCFMCGHFC_OFFSET UNITYSDK_OFFSET(0x74BC90)
#define BNHPDBDCOAJ_LNEICOKIGOI_OFFSET UNITYSDK_OFFSET(0x3E3C80)
#define BNHPDBDCOAJ_PJFPEPHIEGE_OFFSET UNITYSDK_OFFSET(0x74BC80)
#define BNHPDBDCOAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x36F120)

inline static constexpr unsigned int BNHPDBDCOAJ_TypeDefinitionIndex = 48827;

struct alignas(8) BNHPDBDCOAJ
{
	::MoleMole::EntitySpawnSubsystem_EntitySpawnRequest* NJBAECOFFIJ; // 0x10
	::System::Boolean _PGAILHPHPOH_k__BackingField; // 0x18

	::System::Void _ctor(::MoleMole::EntitySpawnSubsystem_EntitySpawnRequest* FCEIKAIDHPM, ::System::Boolean JBOPLCCFMEN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntitySpawnSubsystem_EntitySpawnRequest*, ::System::Boolean))((::PBYTE)hIl2Cpp + BNHPDBDCOAJ__CTOR_OFFSET))(this, FCEIKAIDHPM, JBOPLCCFMEN);
	}

	::System::Void LNEICOKIGOI(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BNHPDBDCOAJ_LNEICOKIGOI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void PJFPEPHIEGE(::BHELLEGKALM NKCHHHKMBNA)
	{
		return ((::System::Void(*)(::PVOID, ::BHELLEGKALM))((::PBYTE)hIl2Cpp + BNHPDBDCOAJ_PJFPEPHIEGE_OFFSET))(this, NKCHHHKMBNA);
	}

	::MoleMole::EntityHandle IBNCFMCGHFC()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + BNHPDBDCOAJ_IBNCFMCGHFC_OFFSET))(this);
	}

	::System::Boolean GBABKAFFBBL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BNHPDBDCOAJ_GBABKAFFBBL_OFFSET))(this);
	}

	::System::Boolean GAPLNCJEKNN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BNHPDBDCOAJ_GAPLNCJEKNN_OFFSET))(this);
	}
};
