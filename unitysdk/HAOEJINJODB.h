#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABLPDAPPABA.h"
#include "unitysdk/EFOEOKBFJPJ.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class DIAEPBNFKBO;
class FJGDLDIGJAE;
class HAFLGNENJDI;
class HJDNNLKBHBA;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
class OANBGELDOHI;
class OOHOOAFNBNF;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityAnimEvent; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Collider; }

#define HAOEJINJODB_ABGLCJNKNCJ_OFFSET UNITYSDK_OFFSET(0x16F1D8E0)
#define HAOEJINJODB_BBJHAJJPFKG_OFFSET UNITYSDK_OFFSET(0x16F1ECB0)
#define HAOEJINJODB_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x16F1BE50)
#define HAOEJINJODB_BFFGDDOFGNB_OFFSET UNITYSDK_OFFSET(0x16F1ED40)
#define HAOEJINJODB_BJBMHDBFPEK_OFFSET UNITYSDK_OFFSET(0x16F1C440)
#define HAOEJINJODB_COHEOKOGGDP_OFFSET UNITYSDK_OFFSET(0x16F1D9F0)
#define HAOEJINJODB_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x16F1C500)
#define HAOEJINJODB_EFFIBJJPKPO_OFFSET UNITYSDK_OFFSET(0x16F1C550)
#define HAOEJINJODB_EGEBDFOLLMH_OFFSET UNITYSDK_OFFSET(0x16F1E190)
#define HAOEJINJODB_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x16F1EE70)
#define HAOEJINJODB_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x16F1C5D0)
#define HAOEJINJODB_JEFGMEDENNB_OFFSET UNITYSDK_OFFSET(0x16F1E8B0)
#define HAOEJINJODB_JEIBNBIHEII_OFFSET UNITYSDK_OFFSET(0x16F1DD70)
#define HAOEJINJODB_KEOMOLOEKCM_OFFSET UNITYSDK_OFFSET(0x16F1E7A0)
#define HAOEJINJODB_KGGIPODAIIJ_OFFSET UNITYSDK_OFFSET(0x16F1E650)
#define HAOEJINJODB_LBODGKNICHM_OFFSET UNITYSDK_OFFSET(0x16F1BF40)
#define HAOEJINJODB_LHLBNDFAMNE_OFFSET UNITYSDK_OFFSET(0x16F1EDD0)
#define HAOEJINJODB_NIMGDOPJGDO_OFFSET UNITYSDK_OFFSET(0x16F1C670)
#define HAOEJINJODB_PGBBJPIMFFP_OFFSET UNITYSDK_OFFSET(0x16F1E910)
#define HAOEJINJODB_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x16F1BFD0)
#define HAOEJINJODB_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x16F1E8A0)
#define HAOEJINJODB__CTOR_OFFSET UNITYSDK_OFFSET(0x16F1C660)

inline static constexpr unsigned int HAOEJINJODB_TypeDefinitionIndex = 74569;

class HAOEJINJODB : public ::ABLPDAPPABA
{
public:
	::OANBGELDOHI* POEKCLBPLGE; // 0x50
	::System::Single HACJFKBLODH; // 0x58
	::System::Boolean LLFGKDAOHIE; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOEJINJODB__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::OOHOOAFNBNF* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::OOHOOAFNBNF*))((::PBYTE)hIl2Cpp + HAOEJINJODB_BBOMJDBNHIC_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, DFMKILICPFB);
	}

	::System::Void LBODGKNICHM(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HAOEJINJODB_LBODGKNICHM_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void BJBMHDBFPEK(::FJGDLDIGJAE* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::FJGDLDIGJAE*))((::PBYTE)hIl2Cpp + HAOEJINJODB_BJBMHDBFPEK_OFFSET))(this, FFNKDGGHBPP);
	}

	::System::Void EFFIBJJPKPO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOEJINJODB_EFFIBJJPKPO_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOEJINJODB_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void NIMGDOPJGDO(::System::Single BJBMMBNENHL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HAOEJINJODB_NIMGDOPJGDO_OFFSET))(this, BJBMMBNENHL);
	}

	::System::Boolean EGEBDFOLLMH(::MoleMole::Battle::Entity* OMPHGGCEIBD, ::UnityEngine::Vector3 AKAGDEFAGJA, ::UnityEngine::Vector3 KPLGFGLGLPD, ::Il2CppArray<::UnityEngine::RaycastHit>* GAIGLPOGJOE)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*))((::PBYTE)hIl2Cpp + HAOEJINJODB_EGEBDFOLLMH_OFFSET))(this, OMPHGGCEIBD, AKAGDEFAGJA, KPLGFGLGLPD, GAIGLPOGJOE);
	}

	::System::Void PNHPDOBPKKE(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::OOHOOAFNBNF* MPBJAGIKPJM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::OOHOOAFNBNF*))((::PBYTE)hIl2Cpp + HAOEJINJODB_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}

	::System::Void PLPONJAKNEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOEJINJODB_PLPONJAKNEB_OFFSET))(this);
	}

	::System::Boolean KEOMOLOEKCM(::MoleMole::Battle::Entity* CBCNBLOFPLO, ::UnityEngine::Collider* LNPGKDOBBFJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + HAOEJINJODB_KEOMOLOEKCM_OFFSET))(this, CBCNBLOFPLO, LNPGKDOBBFJ);
	}

	::System::Boolean JEFGMEDENNB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOEJINJODB_JEFGMEDENNB_OFFSET))(this);
	}

	::System::Void BBJHAJJPFKG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOEJINJODB_BBJHAJJPFKG_OFFSET))(this);
	}

	::System::Void JEIBNBIHEII(::HJDNNLKBHBA* ABMGKBFMFFD, ::DIAEPBNFKBO* DLFOBFANLOF, ::HAFLGNENJDI* OALCOHFBEAB, ::UnityEngine::Vector3 LPOIBLLILAA, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::EFOEOKBFJPJ>* IGECAGKFMJG, ::MoleMole::Battle::Entity* JKELDNKGNDI, ::MoleMole::Config::ConfigEntityAnimEvent* JGINLLKLHGM, ::System::UInt32 KPBCENDNNDC)
	{
		return ((::System::Void(*)(::PVOID, ::HJDNNLKBHBA*, ::DIAEPBNFKBO*, ::HAFLGNENJDI*, ::UnityEngine::Vector3, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::EFOEOKBFJPJ>*, ::MoleMole::Battle::Entity*, ::MoleMole::Config::ConfigEntityAnimEvent*, ::System::UInt32))((::PBYTE)hIl2Cpp + HAOEJINJODB_JEIBNBIHEII_OFFSET))(this, ABMGKBFMFFD, DLFOBFANLOF, OALCOHFBEAB, LPOIBLLILAA, IGECAGKFMJG, JKELDNKGNDI, JGINLLKLHGM, KPBCENDNNDC);
	}

	::System::Void BFFGDDOFGNB(::FJGDLDIGJAE* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::FJGDLDIGJAE*))((::PBYTE)hIl2Cpp + HAOEJINJODB_BFFGDDOFGNB_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean KGGIPODAIIJ(::UnityEngine::Collider* LNPGKDOBBFJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + HAOEJINJODB_KGGIPODAIIJ_OFFSET))(this, LNPGKDOBBFJ);
	}

	::System::Void LHLBNDFAMNE(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HAOEJINJODB_LHLBNDFAMNE_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean COHEOKOGGDP(::MoleMole::Battle::Entity* KECKGDFIALJ, ::UnityEngine::Vector3 IACKHFCLPJI)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HAOEJINJODB_COHEOKOGGDP_OFFSET))(this, KECKGDFIALJ, IACKHFCLPJI);
	}

	::System::Void EDEFLFIKNFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOEJINJODB_EDEFLFIKNFK_OFFSET))(this);
	}

	::System::Single ABGLCJNKNCJ(::System::Single BJBMMBNENHL, ::System::Single IAKPGBCAAKM, ::System::Single FBBDCDNPMAA)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HAOEJINJODB_ABGLCJNKNCJ_OFFSET))(this, BJBMMBNENHL, IAKPGBCAAKM, FBBDCDNPMAA);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOEJINJODB_FIGPAOKNJLN_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* PGBBJPIMFFP()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOEJINJODB_PGBBJPIMFFP_OFFSET))(this);
	}
};
