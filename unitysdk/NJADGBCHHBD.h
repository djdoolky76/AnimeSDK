#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PJGGDJJPPJP_ALLPGHPMHHC.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GEIHCPAOKKK;
class JCADHFOKIHK;
class PJGGDJJPPJP;
namespace MoleMole::Battle { class Entity; }

#define NJADGBCHHBD_AMEGHCHMIOD_OFFSET UNITYSDK_OFFSET(0x11599370)
#define NJADGBCHHBD_GIAOBHOJCDP_OFFSET UNITYSDK_OFFSET(0x115993F0)
#define NJADGBCHHBD_IAHPLEHJFGB_OFFSET UNITYSDK_OFFSET(0x11599660)
#define NJADGBCHHBD__CTOR_OFFSET UNITYSDK_OFFSET(0x115996C0)

inline static constexpr unsigned int NJADGBCHHBD_TypeDefinitionIndex = 57544;

class NJADGBCHHBD
{
public:
	::UnityEngine::Vector3 BHFAGMPDIGJ; // 0x10
	::System::Single IAKPGBCAAKM; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJADGBCHHBD__CTOR_OFFSET))(this);
	}

	::System::Void AMEGHCHMIOD(::PJGGDJJPPJP* DCGAHNLABEF, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::PJGGDJJPPJP_ALLPGHPMHHC& NHMNFCNJHKP, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::JCADHFOKIHK* KADBFNFHENH)
	{
		return ((::System::Void(*)(::PVOID, ::PJGGDJJPPJP*, ::MoleMole::Battle::Entity*, ::PJGGDJJPPJP_ALLPGHPMHHC&, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + NJADGBCHHBD_AMEGHCHMIOD_OFFSET))(this, DCGAHNLABEF, LIBPKNHDIGP, NHMNFCNJHKP, NGODDCIOJDP, KADBFNFHENH);
	}

	::System::Void GIAOBHOJCDP(::GEIHCPAOKKK* OHPJHPEOFLD, ::PJGGDJJPPJP* DCGAHNLABEF, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::GEIHCPAOKKK*, ::PJGGDJJPPJP*, ::System::Single))((::PBYTE)hIl2Cpp + NJADGBCHHBD_GIAOBHOJCDP_OFFSET))(this, OHPJHPEOFLD, DCGAHNLABEF, PMNLNNGEIFM);
	}

	::System::Void IAHPLEHJFGB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJADGBCHHBD_IAHPLEHJFGB_OFFSET))(this);
	}
};
