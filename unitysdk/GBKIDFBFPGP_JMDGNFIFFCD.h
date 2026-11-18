#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define GBKIDFBFPGP_JMDGNFIFFCD_DELDFAIEAAD_OFFSET UNITYSDK_OFFSET(0x10EE0E80)
#define GBKIDFBFPGP_JMDGNFIFFCD_DMCDEMLLAHP_OFFSET UNITYSDK_OFFSET(0x10EE0C70)
#define GBKIDFBFPGP_JMDGNFIFFCD_GFCKEBAMBEM_OFFSET UNITYSDK_OFFSET(0x10EE0DB0)
#define GBKIDFBFPGP_JMDGNFIFFCD__CTOR_OFFSET UNITYSDK_OFFSET(0x10EE0C60)

inline static constexpr unsigned int GBKIDFBFPGP_JMDGNFIFFCD_TypeDefinitionIndex = 58618;

class GBKIDFBFPGP_JMDGNFIFFCD : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* KECKGDFIALJ; // 0x10
	::MoleMole::Battle::Entity* HGDBJJAJMDL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_JMDGNFIFFCD__CTOR_OFFSET))(this);
	}

	::System::Void DMCDEMLLAHP(::MoleMole::Battle::Entity* NFFNEFLKPDG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_JMDGNFIFFCD_DMCDEMLLAHP_OFFSET))(this, NFFNEFLKPDG);
	}

	::System::Void GFCKEBAMBEM(::MoleMole::Battle::Entity* NFFNEFLKPDG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_JMDGNFIFFCD_GFCKEBAMBEM_OFFSET))(this, NFFNEFLKPDG);
	}

	::System::Void DELDFAIEAAD(::MoleMole::Battle::Entity* NFFNEFLKPDG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_JMDGNFIFFCD_DELDFAIEAAD_OFFSET))(this, NFFNEFLKPDG);
	}
};
