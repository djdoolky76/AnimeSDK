#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/GKJJHDHELAH.h"

namespace MoleMole::Battle { class Entity; }

#define BOGIGLJILJF_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0xFF93CD0)
#define BOGIGLJILJF_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0xFF93BA0)
#define BOGIGLJILJF_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0xFF93B10)
#define BOGIGLJILJF_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0xFF93C30)
#define BOGIGLJILJF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0xFF93A00)
#define BOGIGLJILJF__CCTOR_OFFSET UNITYSDK_OFFSET(0xFF93A90)
#define BOGIGLJILJF__CTOR_OFFSET UNITYSDK_OFFSET(0xFF93B00)

inline static constexpr unsigned int BOGIGLJILJF_TypeDefinitionIndex = 68535;

class BOGIGLJILJF : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x82; // 0x0
	::MoleMole::Battle::Entity* ALBCFGOBAEK; // 0x20
	::MoleMole::Battle::Entity* GKPDIKKBNFL; // 0x28
	::GKJJHDHELAH NPNGBCFHLJE; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BOGIGLJILJF__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGIGLJILJF__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGIGLJILJF_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGIGLJILJF_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGIGLJILJF_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGIGLJILJF_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::MoleMole::Battle::Entity* MFMPICKHAMJ, ::MoleMole::Battle::Entity* JKELDNKGNDI, ::GKJJHDHELAH CKPHFFLFAIF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::GKJJHDHELAH))((::PBYTE)hIl2Cpp + BOGIGLJILJF_CNHBDOMKKDE_OFFSET))(this, MFMPICKHAMJ, JKELDNKGNDI, CKPHFFLFAIF);
	}
};
