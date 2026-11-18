#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"

class AICIFAEJBPA;
class FBLCIMEDOLF;
class IKKDCFLLIOF;
namespace MoleMole::Battle { class Entity; }

#define JJAGBPGDCHL_AEAGPMCOGKN_OFFSET UNITYSDK_OFFSET(0x155804F0)
#define JJAGBPGDCHL_BJOILIHONMA_OFFSET UNITYSDK_OFFSET(0x15581180)
#define JJAGBPGDCHL_BPPFJDOMBKB_OFFSET UNITYSDK_OFFSET(0x15580FD0)
#define JJAGBPGDCHL_CFJNIOFAPKP_OFFSET UNITYSDK_OFFSET(0x155805E0)
#define JJAGBPGDCHL_DALEMNPAOOP_OFFSET UNITYSDK_OFFSET(0x15581610)
#define JJAGBPGDCHL_HOMALMGKJAD_OFFSET UNITYSDK_OFFSET(0x15581580)
#define JJAGBPGDCHL_IIKFLPAOPIF_OFFSET UNITYSDK_OFFSET(0x15581CB0)
#define JJAGBPGDCHL_MJFJAIMDHNF_OFFSET UNITYSDK_OFFSET(0x15580300)
#define JJAGBPGDCHL__CTOR_OFFSET UNITYSDK_OFFSET(0x155802B0)

inline static constexpr unsigned int JJAGBPGDCHL_TypeDefinitionIndex = 91419;

class JJAGBPGDCHL : public ::OAOOLPCNHKA
{
public:
	static ::MoleMole::Battle::Entity** StaticGet_AGNENIKFKII()
	{
		return (::MoleMole::Battle::Entity**)Il2CppClass::FromTypeDefinitionIndex(JJAGBPGDCHL_TypeDefinitionIndex)->GetStaticField(0x4BCC0);
	}
	::MoleMole::Battle::Entity* CJLOCBJHFCG; // 0x20
	::MoleMole::Battle::Entity* OPMHHMMLPIB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJAGBPGDCHL__CTOR_OFFSET))(this);
	}

	static ::System::Void MJFJAIMDHNF()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJAGBPGDCHL_MJFJAIMDHNF_OFFSET))();
	}

	static ::System::Void CFJNIOFAPKP(::System::Int32 EHDMGHBOJJM, ::MoleMole::Battle::Entity* KMHICJLIECP, ::MoleMole::Battle::Entity* HBKBNNKEEIA)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + JJAGBPGDCHL_CFJNIOFAPKP_OFFSET))(EHDMGHBOJJM, KMHICJLIECP, HBKBNNKEEIA);
	}

	static ::AICIFAEJBPA* BPPFJDOMBKB()
	{
		return ((::AICIFAEJBPA*(*)())((::PBYTE)hIl2Cpp + JJAGBPGDCHL_BPPFJDOMBKB_OFFSET))();
	}

	static ::System::Void BJOILIHONMA(::IKKDCFLLIOF* OEDEIANBGHL)
	{
		return ((::System::Void(*)(::IKKDCFLLIOF*))((::PBYTE)hIl2Cpp + JJAGBPGDCHL_BJOILIHONMA_OFFSET))(OEDEIANBGHL);
	}

	static ::IKKDCFLLIOF* HOMALMGKJAD(::MoleMole::Battle::Entity* DBMNDIPELPP)
	{
		return ((::IKKDCFLLIOF*(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + JJAGBPGDCHL_HOMALMGKJAD_OFFSET))(DBMNDIPELPP);
	}

	static ::MoleMole::Battle::Entity* DALEMNPAOOP(::IKKDCFLLIOF* OEDEIANBGHL)
	{
		return ((::MoleMole::Battle::Entity*(*)(::IKKDCFLLIOF*))((::PBYTE)hIl2Cpp + JJAGBPGDCHL_DALEMNPAOOP_OFFSET))(OEDEIANBGHL);
	}

	static ::FBLCIMEDOLF* AEAGPMCOGKN()
	{
		return ((::FBLCIMEDOLF*(*)())((::PBYTE)hIl2Cpp + JJAGBPGDCHL_AEAGPMCOGKN_OFFSET))();
	}

	static ::System::Void IIKFLPAOPIF(::MoleMole::Battle::Entity* KECKGDFIALJ, ::IKKDCFLLIOF* OEDEIANBGHL)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::IKKDCFLLIOF*))((::PBYTE)hIl2Cpp + JJAGBPGDCHL_IIKFLPAOPIF_OFFSET))(KECKGDFIALJ, OEDEIANBGHL);
	}
};
