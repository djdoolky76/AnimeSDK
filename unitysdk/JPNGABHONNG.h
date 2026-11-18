#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"

namespace MoleMole::Battle { class Entity; }

#define JPNGABHONNG_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x13CD7570)
#define JPNGABHONNG_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x13CD75D0)
#define JPNGABHONNG_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x13CD74E0)
#define JPNGABHONNG_GGDJCAEMJIG_OFFSET UNITYSDK_OFFSET(0x13CD7420)
#define JPNGABHONNG_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x13CD7660)
#define JPNGABHONNG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x13CD73E0)
#define JPNGABHONNG__CCTOR_OFFSET UNITYSDK_OFFSET(0x13CD7460)
#define JPNGABHONNG__CTOR_OFFSET UNITYSDK_OFFSET(0x13CD74D0)

inline static constexpr unsigned int JPNGABHONNG_TypeDefinitionIndex = 58185;

class JPNGABHONNG : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x10E; // 0x0
	::MoleMole::Battle::Entity* ALBCFGOBAEK; // 0x20
	::MoleMole::Config::DamageElementType PIAFKNFELFF; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPNGABHONNG__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNGABHONNG__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNGABHONNG_PHOADBJGFBE_OFFSET))(this);
	}

	::MoleMole::Config::DamageElementType GGDJCAEMJIG()
	{
		return ((::MoleMole::Config::DamageElementType(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNGABHONNG_GGDJCAEMJIG_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNGABHONNG_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::MoleMole::Config::DamageElementType GGLLGODOFIF, ::MoleMole::Battle::Entity* MFMPICKHAMJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::DamageElementType, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + JPNGABHONNG_CNHBDOMKKDE_OFFSET))(this, GGLLGODOFIF, MFMPICKHAMJ);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNGABHONNG_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNGABHONNG_OHFHFOHMBJH_OFFSET))(this);
	}
};
