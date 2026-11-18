#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PJGGDJJPPJP_ALLPGHPMHHC.h"

class GEIHCPAOKKK;
class JCADHFOKIHK;
class PJGGDJJPPJP;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define CDNBHMPGGOH_AMEGHCHMIOD_OFFSET UNITYSDK_OFFSET(0x159BD420)
#define CDNBHMPGGOH_GIAOBHOJCDP_OFFSET UNITYSDK_OFFSET(0x159BD4A0)
#define CDNBHMPGGOH_IAHPLEHJFGB_OFFSET UNITYSDK_OFFSET(0x159BD810)
#define CDNBHMPGGOH__CTOR_OFFSET UNITYSDK_OFFSET(0x159BD870)

inline static constexpr unsigned int CDNBHMPGGOH_TypeDefinitionIndex = 63037;

class CDNBHMPGGOH
{
public:
	::System::String* BODECKIDFGF; // 0x10
	::System::UInt32 KEHECMCDLFC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNBHMPGGOH__CTOR_OFFSET))(this);
	}

	::System::Void AMEGHCHMIOD(::PJGGDJJPPJP* DCGAHNLABEF, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::PJGGDJJPPJP_ALLPGHPMHHC& NHMNFCNJHKP, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::JCADHFOKIHK* KADBFNFHENH)
	{
		return ((::System::Void(*)(::PVOID, ::PJGGDJJPPJP*, ::MoleMole::Battle::Entity*, ::PJGGDJJPPJP_ALLPGHPMHHC&, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + CDNBHMPGGOH_AMEGHCHMIOD_OFFSET))(this, DCGAHNLABEF, LIBPKNHDIGP, NHMNFCNJHKP, NGODDCIOJDP, KADBFNFHENH);
	}

	::System::Void GIAOBHOJCDP(::GEIHCPAOKKK* OHPJHPEOFLD, ::PJGGDJJPPJP* DCGAHNLABEF, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::GEIHCPAOKKK*, ::PJGGDJJPPJP*, ::System::Single))((::PBYTE)hIl2Cpp + CDNBHMPGGOH_GIAOBHOJCDP_OFFSET))(this, OHPJHPEOFLD, DCGAHNLABEF, PMNLNNGEIFM);
	}

	::System::Void IAHPLEHJFGB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNBHMPGGOH_IAHPLEHJFGB_OFFSET))(this);
	}
};
