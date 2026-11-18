#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/GKJJHDHELAH.h"

namespace MoleMole::Battle { class Entity; }

#define NFPPAKCBEDP_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x10D757B0)
#define NFPPAKCBEDP_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x10D75720)
#define NFPPAKCBEDP_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x10D755F0)
#define NFPPAKCBEDP_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x10D75680)
#define NFPPAKCBEDP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x10D754E0)
#define NFPPAKCBEDP__CCTOR_OFFSET UNITYSDK_OFFSET(0x10D75570)
#define NFPPAKCBEDP__CTOR_OFFSET UNITYSDK_OFFSET(0x10D755E0)

inline static constexpr unsigned int NFPPAKCBEDP_TypeDefinitionIndex = 69997;

class NFPPAKCBEDP : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x28; // 0x0
	::MoleMole::Battle::Entity* GKPDIKKBNFL; // 0x20
	::MoleMole::Battle::Entity* ALBCFGOBAEK; // 0x28
	::GKJJHDHELAH NPNGBCFHLJE; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFPPAKCBEDP__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPAKCBEDP__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPAKCBEDP_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPAKCBEDP_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPAKCBEDP_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPPAKCBEDP_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::MoleMole::Battle::Entity* MFMPICKHAMJ, ::MoleMole::Battle::Entity* JKELDNKGNDI, ::GKJJHDHELAH CKPHFFLFAIF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::GKJJHDHELAH))((::PBYTE)hIl2Cpp + NFPPAKCBEDP_CNHBDOMKKDE_OFFSET))(this, MFMPICKHAMJ, JKELDNKGNDI, CKPHFFLFAIF);
	}
};
