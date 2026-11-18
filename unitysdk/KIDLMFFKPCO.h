#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABLPDAPPABA.h"
#include "unitysdk/MoleMole/Config/TeamRelationship.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/LFBBIECPOLF.h"
#include "unitysdk/UnityEngine/Vector3.h"

class DIAEPBNFKBO;
class ENGKPGFGGLM;
class FJGDLDIGJAE;
class GECDLDJODHD;
class HAFLGNENJDI;
class HJDNNLKBHBA;
class JCADHFOKIHK;
class KFHNCJALFJK;
class KIDLMFFKPCO_IMHMKHINCIJ;
class KPNIFGIKELE;
class LNFCIBHFJHI;
class LNODBDPJGFL;
class OEOMJLDOMGE;
class OOHOOAFNBNF;
namespace MoleMole { class MonoConfigurableCollider; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityAnimEvent; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KIDLMFFKPCO_AJLCBNGHPBN_OFFSET UNITYSDK_OFFSET(0x17714190)
#define KIDLMFFKPCO_AOHMKDKOGBI_OFFSET UNITYSDK_OFFSET(0x177140F0)
#define KIDLMFFKPCO_BBJHAJJPFKG_OFFSET UNITYSDK_OFFSET(0x17713A10)
#define KIDLMFFKPCO_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x17710230)
#define KIDLMFFKPCO_BFFGDDOFGNB_OFFSET UNITYSDK_OFFSET(0x177124C0)
#define KIDLMFFKPCO_BJBMHDBFPEK_OFFSET UNITYSDK_OFFSET(0x177115D0)
#define KIDLMFFKPCO_BMFDFPFNCIO_OFFSET UNITYSDK_OFFSET(0x17711870)
#define KIDLMFFKPCO_BPKNEKOKBCK_OFFSET UNITYSDK_OFFSET(0x17712720)
#define KIDLMFFKPCO_CPDDPELIFBG_OFFSET UNITYSDK_OFFSET(0x17712640)
#define KIDLMFFKPCO_DIEPHAJCGOE_OFFSET UNITYSDK_OFFSET(0x17711310)
#define KIDLMFFKPCO_EFFIBJJPKPO_OFFSET UNITYSDK_OFFSET(0x17710AB0)
#define KIDLMFFKPCO_EHIAEBALJLI_OFFSET UNITYSDK_OFFSET(0x177137D0)
#define KIDLMFFKPCO_EJGLAFHCJMH_OFFSET UNITYSDK_OFFSET(0x17710F90)
#define KIDLMFFKPCO_FCBKGNCLDKL_OFFSET UNITYSDK_OFFSET(0x17713AA0)
#define KIDLMFFKPCO_FGBJJGLDODB_OFFSET UNITYSDK_OFFSET(0x17711B60)
#define KIDLMFFKPCO_FHKJAPCCGEP_OFFSET UNITYSDK_OFFSET(0x17714320)
#define KIDLMFFKPCO_FHMIMCHHGBG_OFFSET UNITYSDK_OFFSET(0x17710C80)
#define KIDLMFFKPCO_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x17713650)
#define KIDLMFFKPCO_FNJCCBLGAFD_OFFSET UNITYSDK_OFFSET(0x17711BB0)
#define KIDLMFFKPCO_GBEACJBNIDA_OFFSET UNITYSDK_OFFSET(0x17714180)
#define KIDLMFFKPCO_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x17711F70)
#define KIDLMFFKPCO_GFIMIBOOBEO_OFFSET UNITYSDK_OFFSET(0x17713740)
#define KIDLMFFKPCO_GKPFCGFIPGB_OFFSET UNITYSDK_OFFSET(0x17712550)
#define KIDLMFFKPCO_HNDOLEAGGEB_OFFSET UNITYSDK_OFFSET(0x17713B30)
#define KIDLMFFKPCO_JAOMPDAMNKG_OFFSET UNITYSDK_OFFSET(0x177128E0)
#define KIDLMFFKPCO_JEFIPBPPNBK_OFFSET UNITYSDK_OFFSET(0x17713D60)
#define KIDLMFFKPCO_JGJFPLPCNGL_OFFSET UNITYSDK_OFFSET(0x177136E0)
#define KIDLMFFKPCO_KGLPMDPMNID_OFFSET UNITYSDK_OFFSET(0x177132B0)
#define KIDLMFFKPCO_KKNHIOGDOOD_OFFSET UNITYSDK_OFFSET(0x17713240)
#define KIDLMFFKPCO_KOLPCLEMHGJ_OFFSET UNITYSDK_OFFSET(0x17711110)
#define KIDLMFFKPCO_LBODGKNICHM_OFFSET UNITYSDK_OFFSET(0x177118D0)
#define KIDLMFFKPCO_LHLBNDFAMNE_OFFSET UNITYSDK_OFFSET(0x177135B0)
#define KIDLMFFKPCO_LMKCAMDCKBP_OFFSET UNITYSDK_OFFSET(0x17712450)
#define KIDLMFFKPCO_MFCIOFEAGEA_OFFSET UNITYSDK_OFFSET(0x177125E0)
#define KIDLMFFKPCO_MHPHFIHLFKI_OFFSET UNITYSDK_OFFSET(0x177114B0)
#define KIDLMFFKPCO_MIOJPDOCFHA_OFFSET UNITYSDK_OFFSET(0x17713880)
#define KIDLMFFKPCO_MNFCCJHJPLN_OFFSET UNITYSDK_OFFSET(0x177131D0)
#define KIDLMFFKPCO_NFJGKGLNCLD_OFFSET UNITYSDK_OFFSET(0x177127B0)
#define KIDLMFFKPCO_OOFDLGFHPKB_OFFSET UNITYSDK_OFFSET(0x177131C0)
#define KIDLMFFKPCO_PCPKOLFIBOA_OFFSET UNITYSDK_OFFSET(0x17712180)
#define KIDLMFFKPCO_PIGBBFFEPNB_OFFSET UNITYSDK_OFFSET(0x17713440)
#define KIDLMFFKPCO_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x17712710)
#define KIDLMFFKPCO__CCTOR_OFFSET UNITYSDK_OFFSET(0x17712090)
#define KIDLMFFKPCO__CTOR_OFFSET UNITYSDK_OFFSET(0x17712000)

inline static constexpr unsigned int KIDLMFFKPCO_TypeDefinitionIndex = 65717;

class KIDLMFFKPCO : public ::ABLPDAPPABA
{
public:
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_MINJKDIFLJH()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(KIDLMFFKPCO_TypeDefinitionIndex)->GetStaticField(0x38240);
	}
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_KJLGLAIABIB()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(KIDLMFFKPCO_TypeDefinitionIndex)->GetStaticField(0x38248);
	}
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_FOPEFJALFAC()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(KIDLMFFKPCO_TypeDefinitionIndex)->GetStaticField(0x38250);
	}
	static ::System::String** StaticGet_CNICIAODOMF()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KIDLMFFKPCO_TypeDefinitionIndex)->GetStaticField(0x38258);
	}
	static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_JJEDENDHABI()
	{
		return (::System::Collections::Generic::List_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(KIDLMFFKPCO_TypeDefinitionIndex)->GetStaticField(0x38260);
	}
	// static const ::System::Int32 AAGJDCAKHFF = 0x40; // 0x0
	::DIAEPBNFKBO* IMJFJEBDKAF; // 0x50
	::MoleMole::Config::ConfigEntityAnimEvent* EEJNIPLEKJM; // 0x58
	::OEOMJLDOMGE* _BBDJOCMBDDF_k__BackingField; // 0x60
	::HJDNNLKBHBA* POBADKEDFOE; // 0x68
	::GECDLDJODHD* DFMKILICPFB; // 0x70
	::MoleMole::Config::ConfigEntityAnimEvent* JGINLLKLHGM; // 0x78
	::HAFLGNENJDI* OALCOHFBEAB; // 0x80
	::MoleMole::Config::ConfigEntityAnimEvent* PKOAHDJLENH; // 0x88
	::System::Collections::Generic::List_1<::System::Object*>* IOCPNOHIIDK; // 0x90
	::MoleMole::Config::ConfigEntityAnimEvent* IGKDKLDKOGA; // 0x98
	::MoleMole::Config::ConfigEntityAnimEvent* LNBMEOMJKDL; // 0xA0
	::System::Collections::Generic::HashSet_1<::System::String*>* FNIMBNGHLFC; // 0xA8
	::System::Collections::Generic::HashSet_1<::System::String*>* OOLBMJBJIPN; // 0xB0
	::MoleMole::Config::ConfigEntityAnimEvent* APNFLCHCGGK; // 0xB8
	::System::Single GLKPHPGBPFB; // 0xC0
	::System::Boolean KKOFLCGNIKC; // 0xC4
	::System::Byte _padding0[0x3];
	::System::Int32 NAHOONGBABO; // 0xC8
	::System::Int32 AAKMONELBAL; // 0xCC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDLMFFKPCO__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIDLMFFKPCO__CCTOR_OFFSET))();
	}

	::System::Void BBOMJDBNHIC(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::OOHOOAFNBNF* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::OOHOOAFNBNF*))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_BBOMJDBNHIC_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, DFMKILICPFB);
	}

	::System::Void EFFIBJJPKPO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_EFFIBJJPKPO_OFFSET))(this);
	}

	::System::Void EJGLAFHCJMH(::LFBBIECPOLF& FIHAFNMKPIH)
	{
		return ((::System::Void(*)(::PVOID, ::LFBBIECPOLF&))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_EJGLAFHCJMH_OFFSET))(this, FIHAFNMKPIH);
	}

	::System::Boolean KOLPCLEMHGJ(::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_KOLPCLEMHGJ_OFFSET))(this, FFNKDGGHBPP);
	}

	::System::Boolean DIEPHAJCGOE(::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_DIEPHAJCGOE_OFFSET))(this, FFNKDGGHBPP);
	}

	::System::Void BJBMHDBFPEK(::FJGDLDIGJAE* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::FJGDLDIGJAE*))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_BJBMHDBFPEK_OFFSET))(this, FFNKDGGHBPP);
	}

	::System::Void LBODGKNICHM(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_LBODGKNICHM_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::UInt16& FGBJJGLDODB()
	{
		return ((::System::UInt16&(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_FGBJJGLDODB_OFFSET))(this);
	}

	::System::Void FNJCCBLGAFD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_FNJCCBLGAFD_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void PCPKOLFIBOA(::System::Collections::Generic::List_1<::LNODBDPJGFL*>* EHPDCCOABEE, ::KIDLMFFKPCO_IMHMKHINCIJ* DHEPCLNOILD, ::MoleMole::Battle::Entity* LIBPKNHDIGP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::LNODBDPJGFL*>*, ::KIDLMFFKPCO_IMHMKHINCIJ*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_PCPKOLFIBOA_OFFSET))(this, EHPDCCOABEE, DHEPCLNOILD, LIBPKNHDIGP);
	}

	::System::Void LMKCAMDCKBP(::KIDLMFFKPCO_IMHMKHINCIJ* DHEPCLNOILD)
	{
		return ((::System::Void(*)(::PVOID, ::KIDLMFFKPCO_IMHMKHINCIJ*))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_LMKCAMDCKBP_OFFSET))(this, DHEPCLNOILD);
	}

	::System::Void BFFGDDOFGNB(::FJGDLDIGJAE* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::FJGDLDIGJAE*))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_BFFGDDOFGNB_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean GKPFCGFIPGB(::ENGKPGFGGLM* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_GKPFCGFIPGB_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void MFCIOFEAGEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_MFCIOFEAGEA_OFFSET))(this);
	}

	::System::Boolean CPDDPELIFBG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_CPDDPELIFBG_OFFSET))(this);
	}

	::System::Void PNHPDOBPKKE(::KFHNCJALFJK* MIALFKCCCPI, ::JCADHFOKIHK* KMGKAIDEIBA, ::LNFCIBHFJHI* FDHMCIFPNCK, ::OOHOOAFNBNF* MPBJAGIKPJM)
	{
		return ((::System::Void(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::OOHOOAFNBNF*))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}

	::System::Boolean BPKNEKOKBCK(::ENGKPGFGGLM* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_BPKNEKOKBCK_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void NFJGKGLNCLD(::System::Boolean FMDOHNJOOLG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_NFJGKGLNCLD_OFFSET))(this, FMDOHNJOOLG);
	}

	static ::System::Int32 JAOMPDAMNKG(::MoleMole::MonoConfigurableCollider* EHHHMFKHNAI, ::UnityEngine::Vector3 AKAGDEFAGJA, ::UnityEngine::Vector3 DAAEHEHLLLD, ::Il2CppArray<::UnityEngine::RaycastHit>* IHFIDGEOMCK, ::System::Single OGIHENKICBP, ::System::Int32 FBNGKPGLADH)
	{
		return ((::System::Int32(*)(::MoleMole::MonoConfigurableCollider*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_JAOMPDAMNKG_OFFSET))(EHHHMFKHNAI, AKAGDEFAGJA, DAAEHEHLLLD, IHFIDGEOMCK, OGIHENKICBP, FBNGKPGLADH);
	}

	::System::UInt16& OOFDLGFHPKB()
	{
		return ((::System::UInt16&(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_OOFDLGFHPKB_OFFSET))(this);
	}

	::System::Void MNFCCJHJPLN(::KIDLMFFKPCO_IMHMKHINCIJ* DHEPCLNOILD)
	{
		return ((::System::Void(*)(::PVOID, ::KIDLMFFKPCO_IMHMKHINCIJ*))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_MNFCCJHJPLN_OFFSET))(this, DHEPCLNOILD);
	}

	::System::Void KKNHIOGDOOD(::KIDLMFFKPCO_IMHMKHINCIJ* DHEPCLNOILD)
	{
		return ((::System::Void(*)(::PVOID, ::KIDLMFFKPCO_IMHMKHINCIJ*))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_KKNHIOGDOOD_OFFSET))(this, DHEPCLNOILD);
	}

	static ::System::Void KGLPMDPMNID(::MoleMole::Battle::Entity* JMDHBJMNBCP)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_KGLPMDPMNID_OFFSET))(JMDHBJMNBCP);
	}

	::KPNIFGIKELE* PIGBBFFEPNB(::System::String* NHCJPNOKDNL)
	{
		return ((::KPNIFGIKELE*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_PIGBBFFEPNB_OFFSET))(this, NHCJPNOKDNL);
	}

	::System::Void LHLBNDFAMNE(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_LHLBNDFAMNE_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void JGJFPLPCNGL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_JGJFPLPCNGL_OFFSET))(this);
	}

	::System::Void GFIMIBOOBEO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_GFIMIBOOBEO_OFFSET))(this);
	}

	::System::Void EHIAEBALJLI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_EHIAEBALJLI_OFFSET))(this);
	}

	::System::Void BMFDFPFNCIO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_BMFDFPFNCIO_OFFSET))(this);
	}

	::System::Void MIOJPDOCFHA(::KIDLMFFKPCO_IMHMKHINCIJ* DHEPCLNOILD)
	{
		return ((::System::Void(*)(::PVOID, ::KIDLMFFKPCO_IMHMKHINCIJ*))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_MIOJPDOCFHA_OFFSET))(this, DHEPCLNOILD);
	}

	::System::Void BBJHAJJPFKG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_BBJHAJJPFKG_OFFSET))(this);
	}

	::System::Void MHPHFIHLFKI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_MHPHFIHLFKI_OFFSET))(this);
	}

	::System::Void FCBKGNCLDKL(::LFBBIECPOLF& MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LFBBIECPOLF&))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_FCBKGNCLDKL_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void HNDOLEAGGEB(::System::UInt32 NJNCGJLHLKC)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_HNDOLEAGGEB_OFFSET))(this, NJNCGJLHLKC);
	}

	::System::Void JEFIPBPPNBK(::KIDLMFFKPCO_IMHMKHINCIJ* DHEPCLNOILD)
	{
		return ((::System::Void(*)(::PVOID, ::KIDLMFFKPCO_IMHMKHINCIJ*))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_JEFIPBPPNBK_OFFSET))(this, DHEPCLNOILD);
	}

	::System::Void FHMIMCHHGBG(::System::Boolean IOKNPLAMIKB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_FHMIMCHHGBG_OFFSET))(this, IOKNPLAMIKB);
	}

	::System::Void AOHMKDKOGBI(::KIDLMFFKPCO_IMHMKHINCIJ* DHEPCLNOILD, ::MoleMole::Battle::Entity* LIBPKNHDIGP)
	{
		return ((::System::Void(*)(::PVOID, ::KIDLMFFKPCO_IMHMKHINCIJ*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_AOHMKDKOGBI_OFFSET))(this, DHEPCLNOILD, LIBPKNHDIGP);
	}

	::OEOMJLDOMGE* GBEACJBNIDA()
	{
		return ((::OEOMJLDOMGE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_GBEACJBNIDA_OFFSET))(this);
	}

	::System::String* AJLCBNGHPBN(::MoleMole::Config::TeamRelationship HBFCMHHDOEP, ::MoleMole::Config::ConfigEntityAnimEvent*& KMDPFGMPOCI, ::System::Boolean NIJGJLKOHNC)
	{
		return ((::System::String*(*)(::PVOID, ::MoleMole::Config::TeamRelationship, ::MoleMole::Config::ConfigEntityAnimEvent*&, ::System::Boolean))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_AJLCBNGHPBN_OFFSET))(this, HBFCMHHDOEP, KMDPFGMPOCI, NIJGJLKOHNC);
	}

	::System::Void FHKJAPCCGEP(::OEOMJLDOMGE* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::OEOMJLDOMGE*))((::PBYTE)hIl2Cpp + KIDLMFFKPCO_FHKJAPCCGEP_OFFSET))(this, EGEGIMGMJHN);
	}
};
