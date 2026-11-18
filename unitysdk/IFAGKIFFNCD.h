#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABLPDAPPABA.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AAPFAPGNNHJ;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
class OOHOOAFNBNF;
namespace MoleMole { class PinballSubsystem; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicFloat; }

#define IFAGKIFFNCD_BBJHAJJPFKG_OFFSET UNITYSDK_OFFSET(0x160A0470)
#define IFAGKIFFNCD_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1609E3A0)
#define IFAGKIFFNCD_BECDGPDKCGF_OFFSET UNITYSDK_OFFSET(0x1609F700)
#define IFAGKIFFNCD_BOGKKOBGHGE_OFFSET UNITYSDK_OFFSET(0x160A00B0)
#define IFAGKIFFNCD_EFFIBJJPKPO_OFFSET UNITYSDK_OFFSET(0x1609E510)
#define IFAGKIFFNCD_EPNPCFALCDG_OFFSET UNITYSDK_OFFSET(0x1609EED0)
#define IFAGKIFFNCD_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x160A03D0)
#define IFAGKIFFNCD_FMAEPDGJPDN_OFFSET UNITYSDK_OFFSET(0x160A0170)
#define IFAGKIFFNCD_FMBADBKPIBK_OFFSET UNITYSDK_OFFSET(0x1609FDF0)
#define IFAGKIFFNCD_GBELHNDALNC_OFFSET UNITYSDK_OFFSET(0x1609F7F0)
#define IFAGKIFFNCD_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1609FC70)
#define IFAGKIFFNCD_GHFJFEMNLIP_OFFSET UNITYSDK_OFFSET(0x1609FD10)
#define IFAGKIFFNCD_IGAMDHACECC_OFFSET UNITYSDK_OFFSET(0x1609EB50)
#define IFAGKIFFNCD_INEGOEGIOKM_OFFSET UNITYSDK_OFFSET(0x160A0340)
#define IFAGKIFFNCD_IPEPMMCKIBE_OFFSET UNITYSDK_OFFSET(0x1609E580)
#define IFAGKIFFNCD_KHPBBOMJGLE_OFFSET UNITYSDK_OFFSET(0x1609ED10)
#define IFAGKIFFNCD_LEJBCJKEHPH_OFFSET UNITYSDK_OFFSET(0x1609F2E0)
#define IFAGKIFFNCD_OJFBBOMGIEN_OFFSET UNITYSDK_OFFSET(0x1609E760)
#define IFAGKIFFNCD_PBPEFAOLNBD_OFFSET UNITYSDK_OFFSET(0x1609F4D0)
#define IFAGKIFFNCD_PLCJDDAKEAJ_OFFSET UNITYSDK_OFFSET(0x1609F250)
#define IFAGKIFFNCD_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x160A0460)
#define IFAGKIFFNCD__CTOR_OFFSET UNITYSDK_OFFSET(0x1609FD00)

inline static constexpr unsigned int IFAGKIFFNCD_TypeDefinitionIndex = 48638;

class IFAGKIFFNCD : public ::ABLPDAPPABA
{
public:
	// static const ::System::Single EDOCDOOOOBL; // 0x0
	::MoleMole::EntityHandle OCNHLMMPKAG; // 0x50
	::AAPFAPGNNHJ* CEJENBBHBBG; // 0x60
	::System::Boolean IBFLPDDAHOK; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFAGKIFFNCD__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::OOHOOAFNBNF* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::OOHOOAFNBNF*))((::PBYTE)hIl2Cpp + IFAGKIFFNCD_BBOMJDBNHIC_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, DFMKILICPFB);
	}

	::System::Void EFFIBJJPKPO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFAGKIFFNCD_EFFIBJJPKPO_OFFSET))(this);
	}

	::System::Void OJFBBOMGIEN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFAGKIFFNCD_OJFBBOMGIEN_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFAGKIFFNCD_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Single BECDGPDKCGF(::System::Single FAIKLGCEFIM, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IFAGKIFFNCD_BECDGPDKCGF_OFFSET))(this, FAIKLGCEFIM, PMNLNNGEIFM);
	}

	static ::System::Boolean LEJBCJKEHPH(::MoleMole::Battle::Entity* KHGFAKJKDGG, ::UnityEngine::Vector3 OIKMICDBAPP, ::UnityEngine::Vector3& JBCNPOHMGPE)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + IFAGKIFFNCD_LEJBCJKEHPH_OFFSET))(KHGFAKJKDGG, OIKMICDBAPP, JBCNPOHMGPE);
	}

	::System::Boolean IGAMDHACECC(::MoleMole::PinballSubsystem* HIIBPEFJLII, ::MoleMole::Battle::Entity*& HODAIDNDKHD, ::UnityEngine::Vector3& OIKMICDBAPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::PinballSubsystem*, ::MoleMole::Battle::Entity*&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + IFAGKIFFNCD_IGAMDHACECC_OFFSET))(this, HIIBPEFJLII, HODAIDNDKHD, OIKMICDBAPP);
	}

	::System::Boolean EPNPCFALCDG(::MoleMole::Battle::Entity* HODAIDNDKHD, ::UnityEngine::Vector3 OIKMICDBAPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IFAGKIFFNCD_EPNPCFALCDG_OFFSET))(this, HODAIDNDKHD, OIKMICDBAPP);
	}

	static ::System::Boolean BOGKKOBGHGE(::UnityEngine::Vector3 GOEADLFHLEJ, ::UnityEngine::Vector3 OIKMICDBAPP, ::System::Single FFHHIHEGBEI)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + IFAGKIFFNCD_BOGKKOBGHGE_OFFSET))(GOEADLFHLEJ, OIKMICDBAPP, FFHHIHEGBEI);
	}

	::System::Single GHFJFEMNLIP(::MoleMole::Config::DynamicFloat* EGEGIMGMJHN)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::Config::DynamicFloat*))((::PBYTE)hIl2Cpp + IFAGKIFFNCD_GHFJFEMNLIP_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::System::Boolean FMAEPDGJPDN(::UnityEngine::Vector3 GOEADLFHLEJ, ::UnityEngine::Vector3 OIKMICDBAPP, ::UnityEngine::Vector3 CEAPBHFAODG, ::System::Single NGOIGCGCEPE, ::System::Single& AHAFNGEDPLI)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + IFAGKIFFNCD_FMAEPDGJPDN_OFFSET))(GOEADLFHLEJ, OIKMICDBAPP, CEAPBHFAODG, NGOIGCGCEPE, AHAFNGEDPLI);
	}

	::System::Void IPEPMMCKIBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFAGKIFFNCD_IPEPMMCKIBE_OFFSET))(this);
	}

	::System::Single PLCJDDAKEAJ()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IFAGKIFFNCD_PLCJDDAKEAJ_OFFSET))(this);
	}

	::System::Void INEGOEGIOKM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFAGKIFFNCD_INEGOEGIOKM_OFFSET))(this);
	}

	::System::Void KHPBBOMJGLE(::MoleMole::Battle::Entity* HODAIDNDKHD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + IFAGKIFFNCD_KHPBBOMJGLE_OFFSET))(this, HODAIDNDKHD);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFAGKIFFNCD_FIGPAOKNJLN_OFFSET))(this);
	}

	::UnityEngine::Vector3 GBELHNDALNC(::UnityEngine::Vector3 OIKMICDBAPP, ::UnityEngine::Vector3 FMJGOHNLJNA, ::System::Single PMNLNNGEIFM)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + IFAGKIFFNCD_GBELHNDALNC_OFFSET))(this, OIKMICDBAPP, FMJGOHNLJNA, PMNLNNGEIFM);
	}

	::UnityEngine::Vector3 PBPEFAOLNBD(::UnityEngine::Vector3 EMGFKEOCFOG, ::UnityEngine::Vector3 PHHJCIHKIKH, ::System::Single PMNLNNGEIFM)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + IFAGKIFFNCD_PBPEFAOLNBD_OFFSET))(this, EMGFKEOCFOG, PHHJCIHKIKH, PMNLNNGEIFM);
	}

	::System::Void PNHPDOBPKKE(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::OOHOOAFNBNF* MPBJAGIKPJM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::OOHOOAFNBNF*))((::PBYTE)hIl2Cpp + IFAGKIFFNCD_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}

	::System::Void BBJHAJJPFKG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFAGKIFFNCD_BBJHAJJPFKG_OFFSET))(this);
	}

	::System::Boolean FMBADBKPIBK(::MoleMole::Battle::Entity*& HODAIDNDKHD, ::UnityEngine::Vector3& OIKMICDBAPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + IFAGKIFFNCD_FMBADBKPIBK_OFFSET))(this, HODAIDNDKHD, OIKMICDBAPP);
	}
};
