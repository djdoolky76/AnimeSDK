#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EEIMJFKNHLF.h"
#include "unitysdk/IKJKMDGGGDP.h"
#include "unitysdk/MCKJMKBPMCC_LLKEPNDKGAD.h"
#include "unitysdk/MKAGDKBEPLI.h"
#include "unitysdk/MoleMole/Config/CameraDitherLayerData.h"
#include "unitysdk/MECPGCBLFAE_JKIOJGIINAO.h"
#include "unitysdk/MoleMole/CharacterCameraDitheringData.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/Vector3.h"

class BPADMIKHMMC;
class MMCBNPJAFNL;
namespace MoleMole { class MonoRenderHandler; }
namespace MoleMole { class MonoSkipDitherCollider; }
namespace MoleMole::Battle { class Entity; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define MECPGCBLFAE_AHPECPGANNN_OFFSET UNITYSDK_OFFSET(0x177A5310)
#define MECPGCBLFAE_AMKJFBAEGCF_OFFSET UNITYSDK_OFFSET(0x177A5580)
#define MECPGCBLFAE_BCFFBIDNIDM_OFFSET UNITYSDK_OFFSET(0x177A8C00)
#define MECPGCBLFAE_BGOLKCKCPAN_OFFSET UNITYSDK_OFFSET(0x177A56B0)
#define MECPGCBLFAE_BJOLLDLIBIF_OFFSET UNITYSDK_OFFSET(0x177A9900)
#define MECPGCBLFAE_BKEJOPAAJAF_OFFSET UNITYSDK_OFFSET(0x177AB8B0)
#define MECPGCBLFAE_CFDCINFJCCI_OFFSET UNITYSDK_OFFSET(0x177AB9E0)
#define MECPGCBLFAE_DANLBIADNAM_OFFSET UNITYSDK_OFFSET(0x177A6710)
#define MECPGCBLFAE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x177A4570)
#define MECPGCBLFAE_DOCIDHPGKAK_1_OFFSET UNITYSDK_OFFSET(0x177A8DF0)
#define MECPGCBLFAE_DOCIDHPGKAK_OFFSET UNITYSDK_OFFSET(0x177A50D0)
#define MECPGCBLFAE_EEKGNNIKGJL_OFFSET UNITYSDK_OFFSET(0x177A65C0)
#define MECPGCBLFAE_EHCIAJEGCPN_OFFSET UNITYSDK_OFFSET(0x177A92E0)
#define MECPGCBLFAE_FAEKBMEPFDD_OFFSET UNITYSDK_OFFSET(0x177A8BF0)
#define MECPGCBLFAE_FIAOIPCAFJP_OFFSET UNITYSDK_OFFSET(0x177AADB0)
#define MECPGCBLFAE_GGAMFJFJGOG_OFFSET UNITYSDK_OFFSET(0x177AA760)
#define MECPGCBLFAE_GNCPPDNKDPL_OFFSET UNITYSDK_OFFSET(0x177A6D10)
#define MECPGCBLFAE_GOENMJDMIDD_OFFSET UNITYSDK_OFFSET(0x177AB840)
#define MECPGCBLFAE_GOGOKKEDBLK_OFFSET UNITYSDK_OFFSET(0x177ABC00)
#define MECPGCBLFAE_HAKILJNFLHA_OFFSET UNITYSDK_OFFSET(0x177AB560)
#define MECPGCBLFAE_HBPBHMAJNBP_OFFSET UNITYSDK_OFFSET(0x177A8E90)
#define MECPGCBLFAE_HGOOPAFBPAL_OFFSET UNITYSDK_OFFSET(0x177ABCF0)
#define MECPGCBLFAE_HHCMANPBBKJ_OFFSET UNITYSDK_OFFSET(0x177AA7B0)
#define MECPGCBLFAE_HINHNAGCDNG_OFFSET UNITYSDK_OFFSET(0x177A7030)
#define MECPGCBLFAE_HKCNHFMPNAD_OFFSET UNITYSDK_OFFSET(0x177A6990)
#define MECPGCBLFAE_HKLNKAIGAKI_OFFSET UNITYSDK_OFFSET(0x177A73A0)
#define MECPGCBLFAE_IHDCPLPHKHC_OFFSET UNITYSDK_OFFSET(0x177A9B30)
#define MECPGCBLFAE_IIKMFNNEEDH_OFFSET UNITYSDK_OFFSET(0x177A9A10)
#define MECPGCBLFAE_IPIEGMHBCLB_OFFSET UNITYSDK_OFFSET(0x177AAC90)
#define MECPGCBLFAE_JALFFBAOLPE_OFFSET UNITYSDK_OFFSET(0x177A6AF0)
#define MECPGCBLFAE_JBELPGGBKLF_1_OFFSET UNITYSDK_OFFSET(0x177A91B0)
#define MECPGCBLFAE_JBELPGGBKLF_OFFSET UNITYSDK_OFFSET(0x177A6550)
#define MECPGCBLFAE_JDOAIPHADBD_OFFSET UNITYSDK_OFFSET(0x177A63E0)
#define MECPGCBLFAE_JEMGCLBNGHL_OFFSET UNITYSDK_OFFSET(0x177AA910)
#define MECPGCBLFAE_JODIOIKCOLE_OFFSET UNITYSDK_OFFSET(0x177AA900)
#define MECPGCBLFAE_KDDABJKEJMP_OFFSET UNITYSDK_OFFSET(0x177A4A30)
#define MECPGCBLFAE_KONHJKHBCEP_OFFSET UNITYSDK_OFFSET(0x177A9840)
#define MECPGCBLFAE_LDKFMEAJNJB_OFFSET UNITYSDK_OFFSET(0x177A6860)
#define MECPGCBLFAE_MIAAHFHFBDC_OFFSET UNITYSDK_OFFSET(0x177A6FE0)
#define MECPGCBLFAE_NBIGPDGNGPL_OFFSET UNITYSDK_OFFSET(0x177A5260)
#define MECPGCBLFAE_NCFKJFOBKMO_OFFSET UNITYSDK_OFFSET(0x177A6F30)
#define MECPGCBLFAE_NCPFOCACGHD_OFFSET UNITYSDK_OFFSET(0x177A4C90)
#define MECPGCBLFAE_OBKJODDJLGF_OFFSET UNITYSDK_OFFSET(0x177AB4A0)
#define MECPGCBLFAE_OEFJBODKOJK_OFFSET UNITYSDK_OFFSET(0x177AAC80)
#define MECPGCBLFAE_OFOMJHICIJK_OFFSET UNITYSDK_OFFSET(0x177A9350)
#define MECPGCBLFAE_ONCREATE_OFFSET UNITYSDK_OFFSET(0x177A3CE0)
#define MECPGCBLFAE_PAMIKCCBAHE_OFFSET UNITYSDK_OFFSET(0x177A9010)
#define MECPGCBLFAE_PEMMCNGOBDH_OFFSET UNITYSDK_OFFSET(0x177A9530)
#define MECPGCBLFAE_PLCJNBHECGC_OFFSET UNITYSDK_OFFSET(0x177A7340)
#define MECPGCBLFAE__CCTOR_OFFSET UNITYSDK_OFFSET(0x177A5040)
#define MECPGCBLFAE__CTOR_OFFSET UNITYSDK_OFFSET(0x177A4F40)

inline static constexpr unsigned int MECPGCBLFAE_TypeDefinitionIndex = 79170;

class MECPGCBLFAE
{
public:
	static ::System::Action_2<::UnityEngine::Collider*, ::System::Object*>** StaticGet_LHLMIGAHHAL()
	{
		return (::System::Action_2<::UnityEngine::Collider*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MECPGCBLFAE_TypeDefinitionIndex)->GetStaticField(0x417E0);
	}
	static ::System::Action_2<::UnityEngine::Collider*, ::System::Object*>** StaticGet_DNHLEGJDCHL()
	{
		return (::System::Action_2<::UnityEngine::Collider*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MECPGCBLFAE_TypeDefinitionIndex)->GetStaticField(0x417E8);
	}
	// static const ::System::String* GFIECBJKANM; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::String*>*>* FBEKKONAJLJ; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* DDFKJCMBPPO; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* JIMHNKIECJG; // 0x20
	::MKAGDKBEPLI MIMFDLBGEFC; // 0x28
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Single>* BEFMNHFAGEK; // 0x48
	::System::Collections::Generic::HashSet_1<::UnityEngine::Material*>* OMGCNKOGENL; // 0x50
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* PGLIEFLBPGJ; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* CHAICDOIEHB; // 0x60
	::System::Collections::Generic::List_1<::System::Func_2<::MoleMole::Battle::Entity*, ::System::Boolean>*>* BFJCKCCPJCJ; // 0x68
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Single>* MKCGFONKMIN; // 0x70
	::System::String* HOLFNBBCFIN; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MMCBNPJAFNL*>* AOLIIACLFJN; // 0x80
	::System::Int32 HKHHNJPHIDH; // 0x88
	::MoleMole::Config::CameraDitherLayerData EJMGADEICFA; // 0x8C
	::System::Int32 HFHLOALEEEM; // 0x94
	::System::Boolean JBLPCFOOGNN; // 0x98
	::System::Byte _padding0[0x3];
	::System::Single BMLEIPDBGBM; // 0x9C
	::System::Int32 KIIPDHBDNFG; // 0xA0
	::System::Single MMHEHBLGPMH; // 0xA4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MECPGCBLFAE__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MECPGCBLFAE__CCTOR_OFFSET))();
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MECPGCBLFAE_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MECPGCBLFAE_DISPOSE_OFFSET))(this);
	}

	::System::Void DOCIDHPGKAK(::UnityEngine::Collider* JLDPLBFEBNC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MECPGCBLFAE_DOCIDHPGKAK_OFFSET))(this, JLDPLBFEBNC);
	}

	::System::Void NCPFOCACGHD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MECPGCBLFAE_NCPFOCACGHD_OFFSET))(this);
	}

	::System::Void NBIGPDGNGPL(::MECPGCBLFAE_JKIOJGIINAO PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::MECPGCBLFAE_JKIOJGIINAO))((::PBYTE)hIl2Cpp + MECPGCBLFAE_NBIGPDGNGPL_OFFSET))(this, PHHDHIBOCKA);
	}

	::System::Void AHPECPGANNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MECPGCBLFAE_AHPECPGANNN_OFFSET))(this);
	}

	static ::System::Void AMKJFBAEGCF(::UnityEngine::Collider* EHHHMFKHNAI, ::MCKJMKBPMCC_LLKEPNDKGAD JAJCIOHJFBI)
	{
		return ((::System::Void(*)(::UnityEngine::Collider*, ::MCKJMKBPMCC_LLKEPNDKGAD))((::PBYTE)hIl2Cpp + MECPGCBLFAE_AMKJFBAEGCF_OFFSET))(EHHHMFKHNAI, JAJCIOHJFBI);
	}

	::System::Void JDOAIPHADBD(::System::UInt32 NJNCGJLHLKC, ::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + MECPGCBLFAE_JDOAIPHADBD_OFFSET))(this, NJNCGJLHLKC, AELLPLBJELA);
	}

	::System::Void JBELPGGBKLF(::IKJKMDGGGDP FKMHMOELCIO, ::System::Boolean FPKGHKLJEIL)
	{
		return ((::System::Void(*)(::PVOID, ::IKJKMDGGGDP, ::System::Boolean))((::PBYTE)hIl2Cpp + MECPGCBLFAE_JBELPGGBKLF_OFFSET))(this, FKMHMOELCIO, FPKGHKLJEIL);
	}

	::System::Void EEKGNNIKGJL(::UnityEngine::Ray LIEHHEAGKAB, ::System::Single BDEDDEGJFKL, ::System::Action_2<::UnityEngine::Collider*, ::System::Object*>* LCHHKALKCGP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Ray, ::System::Single, ::System::Action_2<::UnityEngine::Collider*, ::System::Object*>*))((::PBYTE)hIl2Cpp + MECPGCBLFAE_EEKGNNIKGJL_OFFSET))(this, LIEHHEAGKAB, BDEDDEGJFKL, LCHHKALKCGP);
	}

	::System::Int32 DANLBIADNAM(::System::Func_2<::MoleMole::Battle::Entity*, ::System::Boolean>* PNPMMLNCDNK)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Func_2<::MoleMole::Battle::Entity*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + MECPGCBLFAE_DANLBIADNAM_OFFSET))(this, PNPMMLNCDNK);
	}

	static ::System::Void LDKFMEAJNJB(::UnityEngine::Collider* EHHHMFKHNAI, ::MCKJMKBPMCC_LLKEPNDKGAD JAJCIOHJFBI)
	{
		return ((::System::Void(*)(::UnityEngine::Collider*, ::MCKJMKBPMCC_LLKEPNDKGAD))((::PBYTE)hIl2Cpp + MECPGCBLFAE_LDKFMEAJNJB_OFFSET))(EHHHMFKHNAI, JAJCIOHJFBI);
	}

	::System::Boolean HKCNHFMPNAD(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MECPGCBLFAE_HKCNHFMPNAD_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void JALFFBAOLPE(::UnityEngine::Material* AEIHFBNNLBP, ::System::Single LEFHBNBFIFK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Single))((::PBYTE)hIl2Cpp + MECPGCBLFAE_JALFFBAOLPE_OFFSET))(this, AEIHFBNNLBP, LEFHBNBFIFK);
	}

	::System::Void GNCPPDNKDPL(::System::UInt32 NJNCGJLHLKC, ::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + MECPGCBLFAE_GNCPPDNKDPL_OFFSET))(this, NJNCGJLHLKC, AELLPLBJELA);
	}

	::System::Boolean NCFKJFOBKMO(::System::UInt32 NJNCGJLHLKC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MECPGCBLFAE_NCFKJFOBKMO_OFFSET))(this, NJNCGJLHLKC);
	}

	::System::Void MIAAHFHFBDC(::System::EventArgs* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MECPGCBLFAE_MIAAHFHFBDC_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Single HINHNAGCDNG(::UnityEngine::Vector3 MOJKMIAKGDF, ::MoleMole::CharacterCameraDitheringData HBMPDJDGDLN)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::MoleMole::CharacterCameraDitheringData))((::PBYTE)hIl2Cpp + MECPGCBLFAE_HINHNAGCDNG_OFFSET))(this, MOJKMIAKGDF, HBMPDJDGDLN);
	}

	::System::Void PLCJNBHECGC(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MECPGCBLFAE_PLCJNBHECGC_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void FAEKBMEPFDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MECPGCBLFAE_FAEKBMEPFDD_OFFSET))(this);
	}

	::System::Void BCFFBIDNIDM(::MoleMole::MonoRenderHandler* PLJJFDBNAIN, ::Il2CppArray<::UnityEngine::Material*>* OKFHHLJFHII)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoRenderHandler*, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + MECPGCBLFAE_BCFFBIDNIDM_OFFSET))(this, PLJJFDBNAIN, OKFHHLJFHII);
	}

	::System::Void DOCIDHPGKAK_1(::Il2CppArray<::UnityEngine::Collider*>* JLDPLBFEBNC)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + MECPGCBLFAE_DOCIDHPGKAK_1_OFFSET))(this, JLDPLBFEBNC);
	}

	::System::Void HBPBHMAJNBP(::MMCBNPJAFNL* JLDPLBFEBNC, ::System::Single PMNLNNGEIFM, ::System::Boolean& KJDNDFCONCN)
	{
		return ((::System::Void(*)(::PVOID, ::MMCBNPJAFNL*, ::System::Single, ::System::Boolean&))((::PBYTE)hIl2Cpp + MECPGCBLFAE_HBPBHMAJNBP_OFFSET))(this, JLDPLBFEBNC, PMNLNNGEIFM, KJDNDFCONCN);
	}

	::System::Void HKLNKAIGAKI(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MECPGCBLFAE_HKLNKAIGAKI_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void JBELPGGBKLF_1(::IKJKMDGGGDP FKMHMOELCIO, ::System::Boolean FPKGHKLJEIL, ::System::Single JOFGIANGHMK)
	{
		return ((::System::Void(*)(::PVOID, ::IKJKMDGGGDP, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MECPGCBLFAE_JBELPGGBKLF_1_OFFSET))(this, FKMHMOELCIO, FPKGHKLJEIL, JOFGIANGHMK);
	}

	::System::Void EHCIAJEGCPN(::EEIMJFKNHLF KKMENMCMMBN, ::System::Boolean KALOJFPPAGO)
	{
		return ((::System::Void(*)(::PVOID, ::EEIMJFKNHLF, ::System::Boolean))((::PBYTE)hIl2Cpp + MECPGCBLFAE_EHCIAJEGCPN_OFFSET))(this, KKMENMCMMBN, KALOJFPPAGO);
	}

	::System::Void BGOLKCKCPAN(::UnityEngine::Collider* JLDPLBFEBNC, ::System::Boolean COGLEANIPPJ, ::System::Boolean BEOFALKOIMC, ::System::Boolean CJHABKPMBMI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MECPGCBLFAE_BGOLKCKCPAN_OFFSET))(this, JLDPLBFEBNC, COGLEANIPPJ, BEOFALKOIMC, CJHABKPMBMI);
	}

	::System::Single BJOLLDLIBIF(::System::Int32 FDGJAHLCIME)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MECPGCBLFAE_BJOLLDLIBIF_OFFSET))(this, FDGJAHLCIME);
	}

	::System::Boolean IIKMFNNEEDH(::UnityEngine::Material* AEIHFBNNLBP, ::System::Single& LEFHBNBFIFK)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*, ::System::Single&))((::PBYTE)hIl2Cpp + MECPGCBLFAE_IIKMFNNEEDH_OFFSET))(this, AEIHFBNNLBP, LEFHBNBFIFK);
	}

	::UnityEngine::Vector3 PEMMCNGOBDH(::UnityEngine::Collider* EIFONLCJOPG)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MECPGCBLFAE_PEMMCNGOBDH_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Void IHDCPLPHKHC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MECPGCBLFAE_IHDCPLPHKHC_OFFSET))(this);
	}

	::System::Boolean GGAMFJFJGOG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MECPGCBLFAE_GGAMFJFJGOG_OFFSET))(this);
	}

	::System::Void HHCMANPBBKJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MECPGCBLFAE_HHCMANPBBKJ_OFFSET))(this);
	}

	::System::Void JODIOIKCOLE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MECPGCBLFAE_JODIOIKCOLE_OFFSET))(this);
	}

	::System::Boolean OFOMJHICIJK(::UnityEngine::Collider* EIFONLCJOPG, ::BPADMIKHMMC*& HMMMOCJAEOA)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*, ::BPADMIKHMMC*&))((::PBYTE)hIl2Cpp + MECPGCBLFAE_OFOMJHICIJK_OFFSET))(this, EIFONLCJOPG, HMMMOCJAEOA);
	}

	::System::Void JEMGCLBNGHL(::UnityEngine::Vector3 LHDHLAEPFBH, ::UnityEngine::Vector3 CFJFMMGPGKE)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MECPGCBLFAE_JEMGCLBNGHL_OFFSET))(this, LHDHLAEPFBH, CFJFMMGPGKE);
	}

	::MECPGCBLFAE_JKIOJGIINAO OEFJBODKOJK(::System::Func_2<::MoleMole::Battle::Entity*, ::System::Boolean>* PNPMMLNCDNK)
	{
		return ((::MECPGCBLFAE_JKIOJGIINAO(*)(::PVOID, ::System::Func_2<::MoleMole::Battle::Entity*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + MECPGCBLFAE_OEFJBODKOJK_OFFSET))(this, PNPMMLNCDNK);
	}

	::System::Void IPIEGMHBCLB(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MECPGCBLFAE_IPIEGMHBCLB_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void FIAOIPCAFJP(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MECPGCBLFAE_FIAOIPCAFJP_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void OBKJODDJLGF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MECPGCBLFAE_OBKJODDJLGF_OFFSET))(this);
	}

	::System::Void HAKILJNFLHA(::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MECPGCBLFAE_HAKILJNFLHA_OFFSET))(this, AELLPLBJELA);
	}

	::System::Void GOENMJDMIDD(::System::EventArgs* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MECPGCBLFAE_GOENMJDMIDD_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Single PAMIKCCBAHE(::UnityEngine::Vector3 MOJKMIAKGDF, ::MoleMole::CharacterCameraDitheringData& HBMPDJDGDLN)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::MoleMole::CharacterCameraDitheringData&))((::PBYTE)hIl2Cpp + MECPGCBLFAE_PAMIKCCBAHE_OFFSET))(this, MOJKMIAKGDF, HBMPDJDGDLN);
	}

	::System::Single BKEJOPAAJAF(::UnityEngine::Collider* JLDPLBFEBNC)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MECPGCBLFAE_BKEJOPAAJAF_OFFSET))(this, JLDPLBFEBNC);
	}

	::System::Void CFDCINFJCCI(::System::String* AELLPLBJELA, ::MECPGCBLFAE_JKIOJGIINAO FKEIBPMALOD)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MECPGCBLFAE_JKIOJGIINAO))((::PBYTE)hIl2Cpp + MECPGCBLFAE_CFDCINFJCCI_OFFSET))(this, AELLPLBJELA, FKEIBPMALOD);
	}

	::System::Boolean KONHJKHBCEP(::UnityEngine::Collider* EIFONLCJOPG, ::MoleMole::MonoSkipDitherCollider*& HAEOFFAEFHI)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*, ::MoleMole::MonoSkipDitherCollider*&))((::PBYTE)hIl2Cpp + MECPGCBLFAE_KONHJKHBCEP_OFFSET))(this, EIFONLCJOPG, HAEOFFAEFHI);
	}

	::System::Boolean GOGOKKEDBLK(::Il2CppArray<::UnityEngine::Renderer*>* AEPONOJONAA)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + MECPGCBLFAE_GOGOKKEDBLK_OFFSET))(this, AEPONOJONAA);
	}

	::System::Void HGOOPAFBPAL(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MECPGCBLFAE_HGOOPAFBPAL_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void KDDABJKEJMP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MECPGCBLFAE_KDDABJKEJMP_OFFSET))(this);
	}
};
