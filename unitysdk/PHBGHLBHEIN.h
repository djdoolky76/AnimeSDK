#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABLPDAPPABA.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/LFBBIECPOLF.h"
#include "unitysdk/MoleMole/Config/ConfigBuffMisc_EffectsByCharacterSize.h"
#include "unitysdk/MoleMole/Config/ConfigBuffMisc_MaterialPropertyModifiersByCharacterSize.h"

class DINHDHNHNMO;
class ENGKPGFGGLM;
class IHPPCIEFNOC;
class JBJGEKKHNCG;
class JCADHFOKIHK;
class JPNGABHONNG;
class KFHNCJALFJK;
class LNFCIBHFJHI;
class MHJDIPINMMF;
class OOHOOAFNBNF;
class PCPMMABDDBB;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigCatalysisBuff; }
namespace MoleMole::Config { class ConfigWindBuff; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PHBGHLBHEIN_ADKEPKBPBFK_OFFSET UNITYSDK_OFFSET(0x1846C7D0)
#define PHBGHLBHEIN_BBJHAJJPFKG_OFFSET UNITYSDK_OFFSET(0x1846C550)
#define PHBGHLBHEIN_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1846A6F0)
#define PHBGHLBHEIN_BPKNEKOKBCK_OFFSET UNITYSDK_OFFSET(0x1846D640)
#define PHBGHLBHEIN_CALHAJFCOHN_OFFSET UNITYSDK_OFFSET(0x1846BEE0)
#define PHBGHLBHEIN_DAKMFEFAIEO_OFFSET UNITYSDK_OFFSET(0x1846CFE0)
#define PHBGHLBHEIN_DIEPHAJCGOE_OFFSET UNITYSDK_OFFSET(0x1846B570)
#define PHBGHLBHEIN_EFFIBJJPKPO_OFFSET UNITYSDK_OFFSET(0x1846AA70)
#define PHBGHLBHEIN_EJGLAFHCJMH_OFFSET UNITYSDK_OFFSET(0x1846AEB0)
#define PHBGHLBHEIN_FCBKGNCLDKL_OFFSET UNITYSDK_OFFSET(0x1846CAE0)
#define PHBGHLBHEIN_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1846D6D0)
#define PHBGHLBHEIN_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1846C450)
#define PHBGHLBHEIN_GLPCHGOCGHH_OFFSET UNITYSDK_OFFSET(0x1846C860)
#define PHBGHLBHEIN_HNMCIBEMKJC_OFFSET UNITYSDK_OFFSET(0x1846C4F0)
#define PHBGHLBHEIN_IONMEDKDKDB_OFFSET UNITYSDK_OFFSET(0x1846CB70)
#define PHBGHLBHEIN_JACKONIIDAL_OFFSET UNITYSDK_OFFSET(0x1846B880)
#define PHBGHLBHEIN_JCOIBLNDFEK_OFFSET UNITYSDK_OFFSET(0x1846D210)
#define PHBGHLBHEIN_JDOELLFIFID_OFFSET UNITYSDK_OFFSET(0x1846AFB0)
#define PHBGHLBHEIN_JFIEIGINIFH_OFFSET UNITYSDK_OFFSET(0x1846CC70)
#define PHBGHLBHEIN_JGEANIBPGKJ_OFFSET UNITYSDK_OFFSET(0x1846D310)
#define PHBGHLBHEIN_JHMDJMNGMPM_OFFSET UNITYSDK_OFFSET(0x1846B0C0)
#define PHBGHLBHEIN_JPELKOKIGEJ_OFFSET UNITYSDK_OFFSET(0x1846D760)
#define PHBGHLBHEIN_LBCBMNCKDPG_OFFSET UNITYSDK_OFFSET(0x1846D7F0)
#define PHBGHLBHEIN_LMFCGJAEIFM_OFFSET UNITYSDK_OFFSET(0x1846B6C0)
#define PHBGHLBHEIN_MEDFGJKFKLG_OFFSET UNITYSDK_OFFSET(0x1846AC10)
#define PHBGHLBHEIN_MMGMBDMNCLF_OFFSET UNITYSDK_OFFSET(0x1846A8E0)
#define PHBGHLBHEIN_MNPPPEDKHAP_OFFSET UNITYSDK_OFFSET(0x1846CA50)
#define PHBGHLBHEIN_NAALBAEKLMH_OFFSET UNITYSDK_OFFSET(0x1846C5E0)
#define PHBGHLBHEIN_OBLPGGBBILL_OFFSET UNITYSDK_OFFSET(0x1846B650)
#define PHBGHLBHEIN_OIMOCKFMBBO_OFFSET UNITYSDK_OFFSET(0x1846D160)
#define PHBGHLBHEIN_PDGPEEFFCCC_OFFSET UNITYSDK_OFFSET(0x1846B520)
#define PHBGHLBHEIN_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x1846D150)
#define PHBGHLBHEIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1846C4E0)

inline static constexpr unsigned int PHBGHLBHEIN_TypeDefinitionIndex = 89967;

class PHBGHLBHEIN : public ::ABLPDAPPABA
{
public:
	::Il2CppArray<::System::String*>* IDFHBMIEGDF; // 0x50
	::IHPPCIEFNOC* JMAALHPGDBN; // 0x58
	::DINHDHNHNMO* DGGKCNDIDOE; // 0x60
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* CMFJIGPIIBB; // 0x68
	::JBJGEKKHNCG* PNBEHFLPMEC; // 0x70
	::MoleMole::Config::DamageElementType GIDKFIPFMIL; // 0x78
	::System::Int32 BMCKIMCAHGB; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHBGHLBHEIN__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::OOHOOAFNBNF* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::OOHOOAFNBNF*))((::PBYTE)hIl2Cpp + PHBGHLBHEIN_BBOMJDBNHIC_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, DFMKILICPFB);
	}

	::System::Void MMGMBDMNCLF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHBGHLBHEIN_MMGMBDMNCLF_OFFSET))(this);
	}

	::System::Void EFFIBJJPKPO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHBGHLBHEIN_EFFIBJJPKPO_OFFSET))(this);
	}

	::System::Void EJGLAFHCJMH(::LFBBIECPOLF& FIHAFNMKPIH)
	{
		return ((::System::Void(*)(::PVOID, ::LFBBIECPOLF&))((::PBYTE)hIl2Cpp + PHBGHLBHEIN_EJGLAFHCJMH_OFFSET))(this, FIHAFNMKPIH);
	}

	::System::Boolean JDOELLFIFID(::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + PHBGHLBHEIN_JDOELLFIFID_OFFSET))(this, FFNKDGGHBPP);
	}

	::System::Boolean DIEPHAJCGOE(::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + PHBGHLBHEIN_DIEPHAJCGOE_OFFSET))(this, FFNKDGGHBPP);
	}

	::System::Void LMFCGJAEIFM(::ENGKPGFGGLM* LIPFIBMPMKK)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + PHBGHLBHEIN_LMFCGJAEIFM_OFFSET))(this, LIPFIBMPMKK);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHBGHLBHEIN_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Boolean HNMCIBEMKJC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PHBGHLBHEIN_HNMCIBEMKJC_OFFSET))(this);
	}

	::System::Void BBJHAJJPFKG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHBGHLBHEIN_BBJHAJJPFKG_OFFSET))(this);
	}

	::Il2CppArray<::System::String*>* NAALBAEKLMH(::MoleMole::Config::ConfigBuffMisc_MaterialPropertyModifiersByCharacterSize DLHBPGFHPCO)
	{
		return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::MoleMole::Config::ConfigBuffMisc_MaterialPropertyModifiersByCharacterSize))((::PBYTE)hIl2Cpp + PHBGHLBHEIN_NAALBAEKLMH_OFFSET))(this, DLHBPGFHPCO);
	}

	::System::Void ADKEPKBPBFK(::ENGKPGFGGLM* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + PHBGHLBHEIN_ADKEPKBPBFK_OFFSET))(this, MIALFKCCCPI);
	}

	::Il2CppArray<::System::String*>* GLPCHGOCGHH(::MoleMole::Config::ConfigBuffMisc_EffectsByCharacterSize BBOJHBPGFGC)
	{
		return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::MoleMole::Config::ConfigBuffMisc_EffectsByCharacterSize))((::PBYTE)hIl2Cpp + PHBGHLBHEIN_GLPCHGOCGHH_OFFSET))(this, BBOJHBPGFGC);
	}

	static ::System::Boolean MNPPPEDKHAP(::MoleMole::Battle::Entity* MFMPICKHAMJ)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PHBGHLBHEIN_MNPPPEDKHAP_OFFSET))(MFMPICKHAMJ);
	}

	::System::Void FCBKGNCLDKL(::LFBBIECPOLF& MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LFBBIECPOLF&))((::PBYTE)hIl2Cpp + PHBGHLBHEIN_FCBKGNCLDKL_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void JACKONIIDAL(::ENGKPGFGGLM* LIPFIBMPMKK)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + PHBGHLBHEIN_JACKONIIDAL_OFFSET))(this, LIPFIBMPMKK);
	}

	static ::System::Boolean DAKMFEFAIEO()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PHBGHLBHEIN_DAKMFEFAIEO_OFFSET))();
	}

	::System::Void MEDFGJKFKLG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHBGHLBHEIN_MEDFGJKFKLG_OFFSET))(this);
	}

	::System::Void PNHPDOBPKKE(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::OOHOOAFNBNF* MPBJAGIKPJM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::OOHOOAFNBNF*))((::PBYTE)hIl2Cpp + PHBGHLBHEIN_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}

	::System::Boolean OIMOCKFMBBO(::MoleMole::Config::DamageElementType PADACGJMFDD, ::MoleMole::Config::DamageElementType FCGJNAOFIIM, ::MoleMole::Battle::Entity* MFMPICKHAMJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::DamageElementType, ::MoleMole::Config::DamageElementType, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PHBGHLBHEIN_OIMOCKFMBBO_OFFSET))(this, PADACGJMFDD, FCGJNAOFIIM, MFMPICKHAMJ);
	}

	::System::Void JFIEIGINIFH(::MoleMole::Config::DamageElementType EIILOAOBACD, ::System::Boolean JPJNKNJFFKG, ::MoleMole::Battle::Entity* MFMPICKHAMJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::DamageElementType, ::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PHBGHLBHEIN_JFIEIGINIFH_OFFSET))(this, EIILOAOBACD, JPJNKNJFFKG, MFMPICKHAMJ);
	}

	::System::Boolean BPKNEKOKBCK(::ENGKPGFGGLM* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + PHBGHLBHEIN_BPKNEKOKBCK_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHBGHLBHEIN_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CALHAJFCOHN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHBGHLBHEIN_CALHAJFCOHN_OFFSET))(this);
	}

	::System::Void OBLPGGBBILL(::JPNGABHONNG* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::JPNGABHONNG*))((::PBYTE)hIl2Cpp + PHBGHLBHEIN_OBLPGGBBILL_OFFSET))(this, FFNKDGGHBPP);
	}

	::System::Boolean JPELKOKIGEJ(::ENGKPGFGGLM* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + PHBGHLBHEIN_JPELKOKIGEJ_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void PDGPEEFFCCC(::PCPMMABDDBB* DMAMIOGEJIL)
	{
		return ((::System::Void(*)(::PVOID, ::PCPMMABDDBB*))((::PBYTE)hIl2Cpp + PHBGHLBHEIN_PDGPEEFFCCC_OFFSET))(this, DMAMIOGEJIL);
	}

	::System::Void JGEANIBPGKJ(::MoleMole::Config::DamageElementType EIILOAOBACD, ::MoleMole::Battle::Entity* MFMPICKHAMJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::DamageElementType, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PHBGHLBHEIN_JGEANIBPGKJ_OFFSET))(this, EIILOAOBACD, MFMPICKHAMJ);
	}

	::System::Void LBCBMNCKDPG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHBGHLBHEIN_LBCBMNCKDPG_OFFSET))(this);
	}

	::MoleMole::Config::ConfigWindBuff* JCOIBLNDFEK()
	{
		return ((::MoleMole::Config::ConfigWindBuff*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHBGHLBHEIN_JCOIBLNDFEK_OFFSET))(this);
	}

	::System::Void JHMDJMNGMPM(::MHJDIPINMMF* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::MHJDIPINMMF*))((::PBYTE)hIl2Cpp + PHBGHLBHEIN_JHMDJMNGMPM_OFFSET))(this, FFNKDGGHBPP);
	}

	::MoleMole::Config::ConfigCatalysisBuff* IONMEDKDKDB()
	{
		return ((::MoleMole::Config::ConfigCatalysisBuff*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHBGHLBHEIN_IONMEDKDKDB_OFFSET))(this);
	}
};
