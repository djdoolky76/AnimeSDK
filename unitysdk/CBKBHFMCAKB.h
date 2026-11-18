#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PJGGDJJPPJP_ALLPGHPMHHC.h"

class GEIHCPAOKKK;
class JCADHFOKIHK;
class PJGGDJJPPJP;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define CBKBHFMCAKB_AMEGHCHMIOD_OFFSET UNITYSDK_OFFSET(0x14C76600)
#define CBKBHFMCAKB_GIAOBHOJCDP_OFFSET UNITYSDK_OFFSET(0x14C76680)
#define CBKBHFMCAKB_IAHPLEHJFGB_OFFSET UNITYSDK_OFFSET(0x14C76A00)
#define CBKBHFMCAKB__CTOR_OFFSET UNITYSDK_OFFSET(0x14C76A60)

inline static constexpr unsigned int CBKBHFMCAKB_TypeDefinitionIndex = 84882;

class CBKBHFMCAKB
{
public:
	::System::String* BODECKIDFGF; // 0x10
	::System::UInt32 KEHECMCDLFC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBKBHFMCAKB__CTOR_OFFSET))(this);
	}

	::System::Void AMEGHCHMIOD(::PJGGDJJPPJP* DCGAHNLABEF, ::MoleMole::Battle::Entity* LIBPKNHDIGP, ::PJGGDJJPPJP_ALLPGHPMHHC& NHMNFCNJHKP, ::MoleMole::Battle::Entity* NGODDCIOJDP, ::JCADHFOKIHK* KADBFNFHENH)
	{
		return ((::System::Void(*)(::PVOID, ::PJGGDJJPPJP*, ::MoleMole::Battle::Entity*, ::PJGGDJJPPJP_ALLPGHPMHHC&, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + CBKBHFMCAKB_AMEGHCHMIOD_OFFSET))(this, DCGAHNLABEF, LIBPKNHDIGP, NHMNFCNJHKP, NGODDCIOJDP, KADBFNFHENH);
	}

	::System::Void GIAOBHOJCDP(::GEIHCPAOKKK* OHPJHPEOFLD, ::PJGGDJJPPJP* DCGAHNLABEF, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::GEIHCPAOKKK*, ::PJGGDJJPPJP*, ::System::Single))((::PBYTE)hIl2Cpp + CBKBHFMCAKB_GIAOBHOJCDP_OFFSET))(this, OHPJHPEOFLD, DCGAHNLABEF, PMNLNNGEIFM);
	}

	::System::Void IAHPLEHJFGB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBKBHFMCAKB_IAHPLEHJFGB_OFFSET))(this);
	}
};
