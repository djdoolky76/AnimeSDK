#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"

namespace MoleMole::Battle { class Entity; }

#define OFJHAJNNKLN_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x15FDBDE0)
#define OFJHAJNNKLN_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x15FDBD50)
#define OFJHAJNNKLN_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x15FDBC20)
#define OFJHAJNNKLN_GGDJCAEMJIG_OFFSET UNITYSDK_OFFSET(0x15FDBB60)
#define OFJHAJNNKLN_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x15FDBCB0)
#define OFJHAJNNKLN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x15FDBB20)
#define OFJHAJNNKLN__CCTOR_OFFSET UNITYSDK_OFFSET(0x15FDBBA0)
#define OFJHAJNNKLN__CTOR_OFFSET UNITYSDK_OFFSET(0x15FDBC10)

inline static constexpr unsigned int OFJHAJNNKLN_TypeDefinitionIndex = 41013;

class OFJHAJNNKLN : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x10C; // 0x0
	::MoleMole::Battle::Entity* ALBCFGOBAEK; // 0x20
	::MoleMole::Config::DamageElementType ABKKHCJGKKN; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFJHAJNNKLN__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFJHAJNNKLN__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFJHAJNNKLN_PHOADBJGFBE_OFFSET))(this);
	}

	::MoleMole::Config::DamageElementType GGDJCAEMJIG()
	{
		return ((::MoleMole::Config::DamageElementType(*)(::PVOID))((::PBYTE)hIl2Cpp + OFJHAJNNKLN_GGDJCAEMJIG_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFJHAJNNKLN_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFJHAJNNKLN_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFJHAJNNKLN_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::MoleMole::Config::DamageElementType LBPGLHIPIOB, ::MoleMole::Battle::Entity* MFMPICKHAMJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::DamageElementType, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OFJHAJNNKLN_CNHBDOMKKDE_OFFSET))(this, LBPGLHIPIOB, MFMPICKHAMJ);
	}
};
