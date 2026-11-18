#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace MoleMole::Battle { class Entity; }

#define CJCECDALMID_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x149679E0)
#define CJCECDALMID_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x14967B20)
#define CJCECDALMID_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x14967950)
#define CJCECDALMID_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x14967A80)
#define CJCECDALMID_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x14967840)
#define CJCECDALMID__CCTOR_OFFSET UNITYSDK_OFFSET(0x149678D0)
#define CJCECDALMID__CTOR_OFFSET UNITYSDK_OFFSET(0x14967940)

inline static constexpr unsigned int CJCECDALMID_TypeDefinitionIndex = 89360;

class CJCECDALMID : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x69; // 0x0
	::MoleMole::Battle::Entity* MOPKOFHKGKD; // 0x20
	::MoleMole::Battle::Entity* HIECHOGIJII; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJCECDALMID__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJCECDALMID__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJCECDALMID_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJCECDALMID_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::MoleMole::Battle::Entity* PGENOCMIHBJ, ::MoleMole::Battle::Entity* GAPNBCMMAOJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CJCECDALMID_CNHBDOMKKDE_OFFSET))(this, PGENOCMIHBJ, GAPNBCMMAOJ);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJCECDALMID_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJCECDALMID_FIGPAOKNJLN_OFFSET))(this);
	}
};
