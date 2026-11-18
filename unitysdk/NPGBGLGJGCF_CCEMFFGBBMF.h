#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/NPGBGLGJGCF_CCEMFFGBBMF_EJNKFJOIKIJ.h"
#include "unitysdk/NPGBGLGJGCF_CCEMFFGBBMF_NJGMAAGPODN.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AI/NavMeshPathStatus.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/MoleMole/Config/GuidePoint_AutoGenStrategy.h"
#include "unitysdk/NPGBGLGJGCF_CCEMFFGBBMF_CLPHDFOFABO.h"
#include "unitysdk/NPGBGLGJGCF_CCEMFFGBBMF_KGHNCICOMGF_ODGPOMDILID.h"
#include "unitysdk/NPGBGLGJGCF_CCEMFFGBBMF_KOIEGDOKOFE_JCHFIINKKAP.h"
#include "unitysdk/System/ValueTuple_2.h"

class BJJNEGIJGNN;
class IIMHFNMMBEA;
class KKILCHMCBMI;
class NPGBGLGJGCF_CCEMFFGBBMF_KGHNCICOMGF;
class NPGBGLGJGCF_CCEMFFGBBMF_KOIEGDOKOFE;
class NPGBGLGJGCF_IJLKILALPMK;
class OCLIHFICGGG;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPGBGLGJGCF_CCEMFFGBBMF_AEHKKJOCLCG_OFFSET UNITYSDK_OFFSET(0x11FC91A0)
#define NPGBGLGJGCF_CCEMFFGBBMF_APHOMOCIANO_OFFSET UNITYSDK_OFFSET(0xFB37090)
#define NPGBGLGJGCF_CCEMFFGBBMF_BAAGOLOGNEF_OFFSET UNITYSDK_OFFSET(0x11FCC520)
#define NPGBGLGJGCF_CCEMFFGBBMF_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0xFB37000)
#define NPGBGLGJGCF_CCEMFFGBBMF_BBPCNKLHLBI_OFFSET UNITYSDK_OFFSET(0x11FC8FE0)
#define NPGBGLGJGCF_CCEMFFGBBMF_BFLBDDKABBA_OFFSET UNITYSDK_OFFSET(0x11FC6780)
#define NPGBGLGJGCF_CCEMFFGBBMF_BGNKPIDDJBL_OFFSET UNITYSDK_OFFSET(0x11FCA640)
#define NPGBGLGJGCF_CCEMFFGBBMF_BKOLPJIIEJK_OFFSET UNITYSDK_OFFSET(0xFB36F60)
#define NPGBGLGJGCF_CCEMFFGBBMF_BNFBEOFBIFL_OFFSET UNITYSDK_OFFSET(0x11FC8500)
#define NPGBGLGJGCF_CCEMFFGBBMF_BNFCPHOLFJA_OFFSET UNITYSDK_OFFSET(0x11FD11D0)
#define NPGBGLGJGCF_CCEMFFGBBMF_CAAEAHLGEMN_1_OFFSET UNITYSDK_OFFSET(0x11FCC840)
#define NPGBGLGJGCF_CCEMFFGBBMF_CAAEAHLGEMN_OFFSET UNITYSDK_OFFSET(0x11FC86F0)
#define NPGBGLGJGCF_CCEMFFGBBMF_CBGMAFILILP_OFFSET UNITYSDK_OFFSET(0x11FCA400)
#define NPGBGLGJGCF_CCEMFFGBBMF_CCFLMIOAEJB_OFFSET UNITYSDK_OFFSET(0x11FCCA80)
#define NPGBGLGJGCF_CCEMFFGBBMF_CFJPJLKBPID_OFFSET UNITYSDK_OFFSET(0x11FCCA20)
#define NPGBGLGJGCF_CCEMFFGBBMF_CKHHPBIGAJB_OFFSET UNITYSDK_OFFSET(0x11FC75C0)
#define NPGBGLGJGCF_CCEMFFGBBMF_CNABHCDBAPE_OFFSET UNITYSDK_OFFSET(0x11FCA890)
#define NPGBGLGJGCF_CCEMFFGBBMF_CNKODKOJPHH_OFFSET UNITYSDK_OFFSET(0x11FC8820)
#define NPGBGLGJGCF_CCEMFFGBBMF_DGKJHMIFAFC_OFFSET UNITYSDK_OFFSET(0x11FC8F10)
#define NPGBGLGJGCF_CCEMFFGBBMF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11FC5940)
#define NPGBGLGJGCF_CCEMFFGBBMF_DKIPLHGIDFP_OFFSET UNITYSDK_OFFSET(0x11FCA560)
#define NPGBGLGJGCF_CCEMFFGBBMF_DOCOEHHCEMI_OFFSET UNITYSDK_OFFSET(0x11FCCED0)
#define NPGBGLGJGCF_CCEMFFGBBMF_ECKJKNOOHGP_OFFSET UNITYSDK_OFFSET(0x11FCC730)
#define NPGBGLGJGCF_CCEMFFGBBMF_EGGMEAGKBHA_OFFSET UNITYSDK_OFFSET(0x11FC5CD0)
#define NPGBGLGJGCF_CCEMFFGBBMF_EIADIPEKFGB_OFFSET UNITYSDK_OFFSET(0xFB37190)
#define NPGBGLGJGCF_CCEMFFGBBMF_EJIJKLPNCAP_OFFSET UNITYSDK_OFFSET(0x11FC6460)
#define NPGBGLGJGCF_CCEMFFGBBMF_EKGMGLAPOGJ_OFFSET UNITYSDK_OFFSET(0x11FC97A0)
#define NPGBGLGJGCF_CCEMFFGBBMF_FGAAIAEOEGL_OFFSET UNITYSDK_OFFSET(0x11FC5CC0)
#define NPGBGLGJGCF_CCEMFFGBBMF_FINJHHFFABD_OFFSET UNITYSDK_OFFSET(0x11FCBDA0)
#define NPGBGLGJGCF_CCEMFFGBBMF_GAPNAKFMGNK_OFFSET UNITYSDK_OFFSET(0x11FC60A0)
#define NPGBGLGJGCF_CCEMFFGBBMF_GDPHDKFDMOE_OFFSET UNITYSDK_OFFSET(0x11FCAD20)
#define NPGBGLGJGCF_CCEMFFGBBMF_GEEIMPPMKMB_OFFSET UNITYSDK_OFFSET(0x11FCBFE0)
#define NPGBGLGJGCF_CCEMFFGBBMF_HEFMBEDGPCH_OFFSET UNITYSDK_OFFSET(0x11FD09E0)
#define NPGBGLGJGCF_CCEMFFGBBMF_HJJFEALNOGH_OFFSET UNITYSDK_OFFSET(0x11FC5DB0)
#define NPGBGLGJGCF_CCEMFFGBBMF_HOOKBPCBLBG_OFFSET UNITYSDK_OFFSET(0x11FC5AA0)
#define NPGBGLGJGCF_CCEMFFGBBMF_IGJPIMGPEAL_OFFSET UNITYSDK_OFFSET(0xFB36860)
#define NPGBGLGJGCF_CCEMFFGBBMF_IHHPMLLIMGK_OFFSET UNITYSDK_OFFSET(0x11FCC1C0)
#define NPGBGLGJGCF_CCEMFFGBBMF_IIMJMPAKBFL_OFFSET UNITYSDK_OFFSET(0x11FCB3F0)
#define NPGBGLGJGCF_CCEMFFGBBMF_IKKPHEABIFN_OFFSET UNITYSDK_OFFSET(0xFB37410)
#define NPGBGLGJGCF_CCEMFFGBBMF_JCHPKKKANLK_OFFSET UNITYSDK_OFFSET(0x11FC5F10)
#define NPGBGLGJGCF_CCEMFFGBBMF_JGACLNHJKGF_OFFSET UNITYSDK_OFFSET(0x11FCFE30)
#define NPGBGLGJGCF_CCEMFFGBBMF_JMLNHNPHEIH_OFFSET UNITYSDK_OFFSET(0x11FD1030)
#define NPGBGLGJGCF_CCEMFFGBBMF_KAAJPKGMCID_OFFSET UNITYSDK_OFFSET(0x11FC5EC0)
#define NPGBGLGJGCF_CCEMFFGBBMF_KBOOANJPBCN_OFFSET UNITYSDK_OFFSET(0x11FC5FF0)
#define NPGBGLGJGCF_CCEMFFGBBMF_KGBEBEDOLKM_OFFSET UNITYSDK_OFFSET(0x11FCA4C0)
#define NPGBGLGJGCF_CCEMFFGBBMF_KPIOHADPJGL_OFFSET UNITYSDK_OFFSET(0x11FD0E80)
#define NPGBGLGJGCF_CCEMFFGBBMF_LCJOOPFMEBB_OFFSET UNITYSDK_OFFSET(0x11FD1040)
#define NPGBGLGJGCF_CCEMFFGBBMF_LLOHMBAMBOC_OFFSET UNITYSDK_OFFSET(0x11FC5D20)
#define NPGBGLGJGCF_CCEMFFGBBMF_LNGJPGALAKB_OFFSET UNITYSDK_OFFSET(0x11FCAC70)
#define NPGBGLGJGCF_CCEMFFGBBMF_MIHHLKHDJGI_OFFSET UNITYSDK_OFFSET(0x11FC9950)
#define NPGBGLGJGCF_CCEMFFGBBMF_MKCONJBEAIB_OFFSET UNITYSDK_OFFSET(0x11FCBEF0)
#define NPGBGLGJGCF_CCEMFFGBBMF_NAKHOHGGODI_OFFSET UNITYSDK_OFFSET(0x11FCF940)
#define NPGBGLGJGCF_CCEMFFGBBMF_NJDKLKKCOLH_OFFSET UNITYSDK_OFFSET(0x11FCB480)
#define NPGBGLGJGCF_CCEMFFGBBMF_OEBNHKELACH_OFFSET UNITYSDK_OFFSET(0x11FC85A0)
#define NPGBGLGJGCF_CCEMFFGBBMF_OGDODHEGAHN_OFFSET UNITYSDK_OFFSET(0xFB36900)
#define NPGBGLGJGCF_CCEMFFGBBMF_OLDKANLNKLJ_OFFSET UNITYSDK_OFFSET(0x11FCAD90)
#define NPGBGLGJGCF_CCEMFFGBBMF_ONCBABDHMKC_OFFSET UNITYSDK_OFFSET(0x11FC96B0)
#define NPGBGLGJGCF_CCEMFFGBBMF_PBGLGKBMHFA_OFFSET UNITYSDK_OFFSET(0x11FD0880)
#define NPGBGLGJGCF_CCEMFFGBBMF_PGNJMBAOODP_OFFSET UNITYSDK_OFFSET(0x11FC6A00)
#define NPGBGLGJGCF_CCEMFFGBBMF__CCTOR_OFFSET UNITYSDK_OFFSET(0x11FC5B10)
#define NPGBGLGJGCF_CCEMFFGBBMF__CTOR_OFFSET UNITYSDK_OFFSET(0x11FC5640)

inline static constexpr unsigned int NPGBGLGJGCF_CCEMFFGBBMF_TypeDefinitionIndex = 59304;

class NPGBGLGJGCF_CCEMFFGBBMF : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::UnityEngine::Color>** StaticGet_MLIJIJCLJNL()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(NPGBGLGJGCF_CCEMFFGBBMF_TypeDefinitionIndex)->GetStaticField(0x35FD0);
	}
	static ::NPGBGLGJGCF_CCEMFFGBBMF_EJNKFJOIKIJ* StaticGet_LNIGGIJANAM()
	{
		return (::NPGBGLGJGCF_CCEMFFGBBMF_EJNKFJOIKIJ*)Il2CppClass::FromTypeDefinitionIndex(NPGBGLGJGCF_CCEMFFGBBMF_TypeDefinitionIndex)->GetStaticField(0xC050);
	}
	static ::System::Int32* StaticGet_CGCOOMLAKNK()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NPGBGLGJGCF_CCEMFFGBBMF_TypeDefinitionIndex)->GetStaticField(0xC064);
	}
	static ::System::Int32* StaticGet_KMMPDCIPIJD()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NPGBGLGJGCF_CCEMFFGBBMF_TypeDefinitionIndex)->GetStaticField(0xC068);
	}
	static ::System::Boolean* StaticGet_FOEANBLKNDN()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPGBGLGJGCF_CCEMFFGBBMF_TypeDefinitionIndex)->GetStaticField(0xC06C);
	}
	static ::System::Boolean* StaticGet_GGIIMACDAJJ()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPGBGLGJGCF_CCEMFFGBBMF_TypeDefinitionIndex)->GetStaticField(0xC06D);
	}
	static ::System::Boolean* StaticGet_JHAFKFJKIGH()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPGBGLGJGCF_CCEMFFGBBMF_TypeDefinitionIndex)->GetStaticField(0xC06E);
	}
	static ::System::UInt32* StaticGet_LKLBEBDEOAD()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(NPGBGLGJGCF_CCEMFFGBBMF_TypeDefinitionIndex)->GetStaticField(0xC070);
	}
	// static const ::System::Int32 JPJNLKAGHNC = 0x5; // 0x0
	// static const ::System::Single NEGBMANLEEJ; // 0x0
	// static const ::System::Single MMKCDCGDDIC; // 0x0
	// static const ::System::String* DKEHDKBLEOL; // 0x0
	// static const ::System::Single KLJFLKIAICC; // 0x0
	::NPGBGLGJGCF_IJLKILALPMK* LBKCIHFGHKJ; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* HBKMMAGAHPL; // 0x18
	::BJJNEGIJGNN* _MOKOENBNALP_k__BackingField; // 0x20
	::System::Collections::Generic::List_1<::System::Object*>* LGHCFPFOFLO; // 0x28
	::System::String* KNJDAPLJMPM; // 0x30
	::KKILCHMCBMI* CLPKCAONADD; // 0x38
	::IIMHFNMMBEA* DHCPFFNAHKD; // 0x40
	::NPGBGLGJGCF_CCEMFFGBBMF_KOIEGDOKOFE* FBMKDCOOHCF; // 0x48
	::System::Collections::Generic::List_1<::System::Int32>* IGAAKDOIPNN; // 0x50
	::System::Collections::Generic::List_1<::System::Single>* OLGEHKGLELH; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* AGACFPAICBA; // 0x60
	::NPGBGLGJGCF_CCEMFFGBBMF_KGHNCICOMGF* CMHAKOJIMFG; // 0x68
	::OCLIHFICGGG* LLNMIPIMMOL; // 0x70
	::System::Collections::Generic::List_1<::System::String*>* LFOEAMJDBHD; // 0x78
	::System::Object* JOOIPIDPHPH; // 0x80
	::Foundation::Coroutine::CoroutineHandle CKFLEGBIPGB; // 0x88
	::System::Boolean IOGOMILBGNE; // 0x8C
	::System::Boolean JCJADAHILMM; // 0x8D
	::System::Boolean DBGKKMPHCFK; // 0x8E
	::System::Boolean CMHCAGJCJLN; // 0x8F
	::System::Boolean DDLBFOOPKDB; // 0x90
	::System::Boolean PACCDKKOAIO; // 0x91
	::System::Boolean OFPOIPGJDAC; // 0x92
	::System::Byte _padding0[0x1];
	::System::Single FDLBJOKDCBB; // 0x94
	::System::Int32 MCFMMEINLKP; // 0x98
	::System::Single AEPOBEFGDMK; // 0x9C
	::System::Int32 JLLLEEPANNG; // 0xA0
	::UnityEngine::Vector3 CDHACGLCPBK; // 0xA4
	::System::Int32 HELGMJEMPBJ; // 0xB0
	::System::Int32 PGLEDBFBPOC; // 0xB4
	::System::Single DJMAMFEPACI; // 0xB8
	::System::Int32 MNOIDLLBMLG; // 0xBC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_DISPOSE_OFFSET))(this);
	}

	::System::Void FGAAIAEOEGL(::BJJNEGIJGNN* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::BJJNEGIJGNN*))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_FGAAIAEOEGL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EGGMEAGKBHA(::System::String* PPGLBDELEBF)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_EGGMEAGKBHA_OFFSET))(this, PPGLBDELEBF);
	}

	::System::Boolean LLOHMBAMBOC(::System::Int32 DFPJIBPFIKM)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_LLOHMBAMBOC_OFFSET))(this, DFPJIBPFIKM);
	}

	::System::Void HJJFEALNOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_HJJFEALNOGH_OFFSET))(this);
	}

	::System::Boolean JCHPKKKANLK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_JCHPKKKANLK_OFFSET))(this);
	}

	::System::Boolean GAPNAKFMGNK(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* EMNEIEIHABN, ::UnityEngine::Vector3 IACKHFCLPJI, ::Il2CppArray<::UnityEngine::Vector3>* EBNCEJPGLDC, ::NPGBGLGJGCF_CCEMFFGBBMF_CLPHDFOFABO& MIDHFGMEOEC, ::System::Int32 LIMNECOMDOM, ::MoleMole::Config::GuidePoint_AutoGenStrategy OKONIJEGJOM)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Vector3>*, ::NPGBGLGJGCF_CCEMFFGBBMF_CLPHDFOFABO&, ::System::Int32, ::MoleMole::Config::GuidePoint_AutoGenStrategy))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_GAPNAKFMGNK_OFFSET))(this, EMNEIEIHABN, IACKHFCLPJI, EBNCEJPGLDC, MIDHFGMEOEC, LIMNECOMDOM, OKONIJEGJOM);
	}

	::System::Boolean BFLBDDKABBA(::System::Int32 DFPJIBPFIKM, ::NPGBGLGJGCF_CCEMFFGBBMF_CLPHDFOFABO& MIDHFGMEOEC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NPGBGLGJGCF_CCEMFFGBBMF_CLPHDFOFABO&))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_BFLBDDKABBA_OFFSET))(this, DFPJIBPFIKM, MIDHFGMEOEC);
	}

	::MoleMole::Config::GuidePoint_AutoGenStrategy KBOOANJPBCN()
	{
		return ((::MoleMole::Config::GuidePoint_AutoGenStrategy(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_KBOOANJPBCN_OFFSET))(this);
	}

	::System::Boolean PGNJMBAOODP(::UnityEngine::Vector3 GBAHDKCCELK, ::System::Boolean& IDGPLIBGLGK, ::UnityEngine::Vector3& IBIFOIKNICM)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_PGNJMBAOODP_OFFSET))(this, GBAHDKCCELK, IDGPLIBGLGK, IBIFOIKNICM);
	}

	::System::Int32 BNFBEOFBIFL(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_BNFBEOFBIFL_OFFSET))(this, ABHBKFJKINO);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::Object*> OEBNHKELACH(::NPGBGLGJGCF_CCEMFFGBBMF_KOIEGDOKOFE_JCHFIINKKAP CCKFAJDPCCF, ::System::Int32 LIMNECOMDOM)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Object*>(*)(::PVOID, ::NPGBGLGJGCF_CCEMFFGBBMF_KOIEGDOKOFE_JCHFIINKKAP, ::System::Int32))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_OEBNHKELACH_OFFSET))(this, CCKFAJDPCCF, LIMNECOMDOM);
	}

	::System::Void CAAEAHLGEMN(::NPGBGLGJGCF_CCEMFFGBBMF_CLPHDFOFABO PJMFAPDGKIK, ::System::Int32 HBJOLKHGGDD)
	{
		return ((::System::Void(*)(::PVOID, ::NPGBGLGJGCF_CCEMFFGBBMF_CLPHDFOFABO, ::System::Int32))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_CAAEAHLGEMN_OFFSET))(this, PJMFAPDGKIK, HBJOLKHGGDD);
	}

	::System::Void CNKODKOJPHH(::System::Collections::Generic::List_1<::System::String*>* IDLCDOPMALL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_CNKODKOJPHH_OFFSET))(this, IDLCDOPMALL);
	}

	::System::Boolean DGKJHMIFAFC(::NPGBGLGJGCF_CCEMFFGBBMF_KGHNCICOMGF_ODGPOMDILID CCKFAJDPCCF)
	{
		return ((::System::Boolean(*)(::PVOID, ::NPGBGLGJGCF_CCEMFFGBBMF_KGHNCICOMGF_ODGPOMDILID))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_DGKJHMIFAFC_OFFSET))(this, CCKFAJDPCCF);
	}

	::System::Int32 BBPCNKLHLBI(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* JDAMBHDGAJL, ::System::Int32 FHMOCCKBJFD, ::System::Single JOELNNECAID, ::UnityEngine::Vector3 GBAHDKCCELK, ::System::Int32 KKIOBLFKGGL)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Int32, ::System::Single, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_BBPCNKLHLBI_OFFSET))(this, JDAMBHDGAJL, FHMOCCKBJFD, JOELNNECAID, GBAHDKCCELK, KKIOBLFKGGL);
	}

	::System::Boolean AEHKKJOCLCG(::UnityEngine::Vector3& IACKHFCLPJI, ::System::Int32 LIMNECOMDOM)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::System::Int32))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_AEHKKJOCLCG_OFFSET))(this, IACKHFCLPJI, LIMNECOMDOM);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* ONCBABDHMKC(::System::Collections::Generic::List_1<::System::String*>* IDLCDOPMALL, ::System::Collections::Generic::List_1<::System::String*>* LHBKDBNHMNA, ::System::Single KFHLBFHOBDE, ::System::Single NCCDJLDKFGA, ::System::Boolean BJJKHJKGBAH)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_ONCBABDHMKC_OFFSET))(this, IDLCDOPMALL, LHBKDBNHMNA, KFHLBFHOBDE, NCCDJLDKFGA, BJJKHJKGBAH);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::System::Boolean, ::System::Int32>> EKGMGLAPOGJ(::System::Int32 DFPJIBPFIKM, ::NPGBGLGJGCF_CCEMFFGBBMF_CLPHDFOFABO MIDHFGMEOEC, ::System::Int32 FHMOCCKBJFD, ::System::Single JOELNNECAID, ::UnityEngine::Vector3 GBAHDKCCELK, ::System::Int32 LIMNECOMDOM)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::System::Boolean, ::System::Int32>>(*)(::PVOID, ::System::Int32, ::NPGBGLGJGCF_CCEMFFGBBMF_CLPHDFOFABO, ::System::Int32, ::System::Single, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_EKGMGLAPOGJ_OFFSET))(this, DFPJIBPFIKM, MIDHFGMEOEC, FHMOCCKBJFD, JOELNNECAID, GBAHDKCCELK, LIMNECOMDOM);
	}

	::System::Boolean EJIJKLPNCAP(::UnityEngine::Vector3 KDEHMPGOCEP, ::UnityEngine::Vector3 PADJNMGMGHO, ::Il2CppArray<::UnityEngine::Vector3>* GLHGOPJOEBF, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* PJCLMOLEOEJ, ::System::Single AMDGNAMFBGF, ::System::Single FAOPCOHPEBL, ::System::Int32 LIMNECOMDOM, ::UnityEngine::AI::NavMeshPathStatus& IAPEIEHDAMI)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Single, ::System::Single, ::System::Int32, ::UnityEngine::AI::NavMeshPathStatus&))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_EJIJKLPNCAP_OFFSET))(this, KDEHMPGOCEP, PADJNMGMGHO, GLHGOPJOEBF, PJCLMOLEOEJ, AMDGNAMFBGF, FAOPCOHPEBL, LIMNECOMDOM, IAPEIEHDAMI);
	}

	::System::Collections::Generic::List_1<::System::Int32>* MIHHLKHDJGI(::System::Collections::Generic::List_1<::System::Object*>* GELAHPDNFHD, ::System::Collections::Generic::List_1<::System::String*>* OICBOAJJIIK, ::System::Boolean NMLACDONPHG, ::System::Single OFAMPNAKPOA, ::System::String* BGJNFPMNCEN, ::System::Boolean DOIJHABLMEK)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean, ::System::Single, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_MIHHLKHDJGI_OFFSET))(this, GELAHPDNFHD, OICBOAJJIIK, NMLACDONPHG, OFAMPNAKPOA, BGJNFPMNCEN, DOIJHABLMEK);
	}

	static ::System::Void CBGMAFILILP(::NPGBGLGJGCF_CCEMFFGBBMF_CLPHDFOFABO& MIDHFGMEOEC, ::NPGBGLGJGCF_CCEMFFGBBMF_NJGMAAGPODN DICPEDGFHBH, ::System::String* FFHGOCHPFIH, ::System::String* KBELLDFHDKK, ::System::String* LNEFGICFNEN, ::UnityEngine::Vector3 GILKDLIAPIO)
	{
		return ((::System::Void(*)(::NPGBGLGJGCF_CCEMFFGBBMF_CLPHDFOFABO&, ::NPGBGLGJGCF_CCEMFFGBBMF_NJGMAAGPODN, ::System::String*, ::System::String*, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_CBGMAFILILP_OFFSET))(MIDHFGMEOEC, DICPEDGFHBH, FFHGOCHPFIH, KBELLDFHDKK, LNEFGICFNEN, GILKDLIAPIO);
	}

	::Cysharp::Threading::Tasks::UniTask KGBEBEDOLKM()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_KGBEBEDOLKM_OFFSET))(this);
	}

	::System::Void DKIPLHGIDFP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_DKIPLHGIDFP_OFFSET))(this);
	}

	::System::Boolean BGNKPIDDJBL(::System::String* AOBFAKHNGCO, ::NPGBGLGJGCF_CCEMFFGBBMF_CLPHDFOFABO& MIDHFGMEOEC, ::UnityEngine::Vector3& GILKDLIAPIO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::NPGBGLGJGCF_CCEMFFGBBMF_CLPHDFOFABO&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_BGNKPIDDJBL_OFFSET))(this, AOBFAKHNGCO, MIDHFGMEOEC, GILKDLIAPIO);
	}

	::System::Void LNGJPGALAKB(::System::Boolean CAAFEGLOALC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_LNGJPGALAKB_OFFSET))(this, CAAFEGLOALC);
	}

	::System::Void HOOKBPCBLBG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_HOOKBPCBLBG_OFFSET))(this);
	}

	static ::System::Boolean GDPHDKFDMOE(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* CJBJONJDOLI, ::System::Int32 OJAHNGPOBNF)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Int32))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_GDPHDKFDMOE_OFFSET))(CJBJONJDOLI, OJAHNGPOBNF);
	}

	::System::Collections::Generic::List_1<::System::Int32>* OLDKANLNKLJ(::System::Collections::Generic::List_1<::System::String*>* KPIJGPJKBAI, ::System::Collections::Generic::List_1<::System::String*>* OICBOAJJIIK, ::System::Single AFIKJAIPLNG, ::System::Single BILBJAAPCJH, ::System::Boolean LHIAAGOBFMN, ::System::Boolean LAGNLIBDMEL, ::UnityEngine::Vector3 PMEDKLPFIFF, ::System::Boolean DGIEDJLHGNG)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_OLDKANLNKLJ_OFFSET))(this, KPIJGPJKBAI, OICBOAJJIIK, AFIKJAIPLNG, BILBJAAPCJH, LHIAAGOBFMN, LAGNLIBDMEL, PMEDKLPFIFF, DGIEDJLHGNG);
	}

	::System::Boolean FINJHHFFABD(::NPGBGLGJGCF_CCEMFFGBBMF_KGHNCICOMGF_ODGPOMDILID& CCKFAJDPCCF)
	{
		return ((::System::Boolean(*)(::PVOID, ::NPGBGLGJGCF_CCEMFFGBBMF_KGHNCICOMGF_ODGPOMDILID&))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_FINJHHFFABD_OFFSET))(this, CCKFAJDPCCF);
	}

	::System::Boolean MKCONJBEAIB(::System::Int32 ABHBKFJKINO, ::UnityEngine::Vector3& IACKHFCLPJI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_MKCONJBEAIB_OFFSET))(this, ABHBKFJKINO, IACKHFCLPJI);
	}

	::Cysharp::Threading::Tasks::UniTask GEEIMPPMKMB(::UnityEngine::Vector3 GBAHDKCCELK, ::MoleMole::Config::GuidePoint_AutoGenStrategy PIBBHNMPBKK, ::System::Int32 LIMNECOMDOM, ::System::Boolean IDGPLIBGLGK, ::UnityEngine::Vector3 IBIFOIKNICM)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::UnityEngine::Vector3, ::MoleMole::Config::GuidePoint_AutoGenStrategy, ::System::Int32, ::System::Boolean, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_GEEIMPPMKMB_OFFSET))(this, GBAHDKCCELK, PIBBHNMPBKK, LIMNECOMDOM, IDGPLIBGLGK, IBIFOIKNICM);
	}

	::System::Boolean IHHPMLLIMGK(::UnityEngine::Vector3 GBAHDKCCELK, ::NPGBGLGJGCF_CCEMFFGBBMF_CLPHDFOFABO& MIDHFGMEOEC, ::UnityEngine::Vector3& GILKDLIAPIO)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::NPGBGLGJGCF_CCEMFFGBBMF_CLPHDFOFABO&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_IHHPMLLIMGK_OFFSET))(this, GBAHDKCCELK, MIDHFGMEOEC, GILKDLIAPIO);
	}

	::System::Boolean ECKJKNOOHGP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_ECKJKNOOHGP_OFFSET))(this);
	}

	::System::Void CAAEAHLGEMN_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_CAAEAHLGEMN_1_OFFSET))(this);
	}

	static ::System::UInt32 CFJPJLKBPID()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_CFJPJLKBPID_OFFSET))();
	}

	::System::Void NJDKLKKCOLH(::System::Collections::Generic::List_1<::System::String*>* IDLCDOPMALL, ::System::Collections::Generic::List_1<::System::String*>* LHBKDBNHMNA, ::System::Single NCCDJLDKFGA, ::System::Boolean BJJKHJKGBAH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_NJDKLKKCOLH_OFFSET))(this, IDLCDOPMALL, LHBKDBNHMNA, NCCDJLDKFGA, BJJKHJKGBAH);
	}

	::System::Void CCFLMIOAEJB(::System::Int32 DFPJIBPFIKM, ::NPGBGLGJGCF_CCEMFFGBBMF_CLPHDFOFABO MIDHFGMEOEC, ::UnityEngine::Vector3 GBAHDKCCELK, ::System::Int32 LIMNECOMDOM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::NPGBGLGJGCF_CCEMFFGBBMF_CLPHDFOFABO, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_CCFLMIOAEJB_OFFSET))(this, DFPJIBPFIKM, MIDHFGMEOEC, GBAHDKCCELK, LIMNECOMDOM);
	}

	::System::Void DOCOEHHCEMI(::UnityEngine::Vector3 GBAHDKCCELK, ::MoleMole::Config::GuidePoint_AutoGenStrategy PIBBHNMPBKK, ::System::Boolean FOJEPIPBBOF, ::System::Int32 LIMNECOMDOM, ::System::Boolean& IDGPLIBGLGK, ::UnityEngine::Vector3& IBIFOIKNICM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::MoleMole::Config::GuidePoint_AutoGenStrategy, ::System::Boolean, ::System::Int32, ::System::Boolean&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_DOCOEHHCEMI_OFFSET))(this, GBAHDKCCELK, PIBBHNMPBKK, FOJEPIPBBOF, LIMNECOMDOM, IDGPLIBGLGK, IBIFOIKNICM);
	}

	::System::Boolean PBGLGKBMHFA(::NPGBGLGJGCF_CCEMFFGBBMF_CLPHDFOFABO MIDHFGMEOEC, ::MoleMole::Config::GuidePoint_AutoGenStrategy OKONIJEGJOM)
	{
		return ((::System::Boolean(*)(::PVOID, ::NPGBGLGJGCF_CCEMFFGBBMF_CLPHDFOFABO, ::MoleMole::Config::GuidePoint_AutoGenStrategy))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_PBGLGKBMHFA_OFFSET))(this, MIDHFGMEOEC, OKONIJEGJOM);
	}

	::System::Void KAAJPKGMCID()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_KAAJPKGMCID_OFFSET))(this);
	}

	::System::Void JGACLNHJKGF(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* DJLOKMMLFJC, ::System::Boolean JLBFPMFMHDM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_JGACLNHJKGF_OFFSET))(this, DJLOKMMLFJC, JLBFPMFMHDM);
	}

	static ::System::Boolean CNABHCDBAPE(::System::String* FFHGOCHPFIH, ::Foundation::ViewObject::GroupMemberIdentifier HEJALBPEPCN, ::UnityEngine::Vector3& AJNHONDEBGB)
	{
		return ((::System::Boolean(*)(::System::String*, ::Foundation::ViewObject::GroupMemberIdentifier, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_CNABHCDBAPE_OFFSET))(FFHGOCHPFIH, HEJALBPEPCN, AJNHONDEBGB);
	}

	::System::Boolean BAAGOLOGNEF(::System::String* BKGIMGEBHAF, ::System::String* AOBFAKHNGCO, ::NPGBGLGJGCF_CCEMFFGBBMF_CLPHDFOFABO& MIDHFGMEOEC, ::UnityEngine::Vector3& GILKDLIAPIO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::NPGBGLGJGCF_CCEMFFGBBMF_CLPHDFOFABO&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_BAAGOLOGNEF_OFFSET))(this, BKGIMGEBHAF, AOBFAKHNGCO, MIDHFGMEOEC, GILKDLIAPIO);
	}

	::System::Void HEFMBEDGPCH(::NPGBGLGJGCF_CCEMFFGBBMF_CLPHDFOFABO& MIDHFGMEOEC, ::System::Int32 GCCIGDBAPFL)
	{
		return ((::System::Void(*)(::PVOID, ::NPGBGLGJGCF_CCEMFFGBBMF_CLPHDFOFABO&, ::System::Int32))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_HEFMBEDGPCH_OFFSET))(this, MIDHFGMEOEC, GCCIGDBAPFL);
	}

	::BJJNEGIJGNN* JMLNHNPHEIH()
	{
		return ((::BJJNEGIJGNN*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_JMLNHNPHEIH_OFFSET))(this);
	}

	::System::Void LCJOOPFMEBB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_LCJOOPFMEBB_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* IIMJMPAKBFL(::System::Single JELNBCANIKG)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_IIMJMPAKBFL_OFFSET))(this, JELNBCANIKG);
	}

	::System::Boolean NAKHOHGGODI(::UnityEngine::Vector3 GBAHDKCCELK, ::UnityEngine::Vector3 IACKHFCLPJI, ::Il2CppArray<::UnityEngine::Vector3>* GLHGOPJOEBF, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* EMNEIEIHABN, ::NPGBGLGJGCF_CCEMFFGBBMF_CLPHDFOFABO& MIDHFGMEOEC, ::MoleMole::Config::GuidePoint_AutoGenStrategy OKONIJEGJOM, ::System::Int32 LIMNECOMDOM)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::NPGBGLGJGCF_CCEMFFGBBMF_CLPHDFOFABO&, ::MoleMole::Config::GuidePoint_AutoGenStrategy, ::System::Int32))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_NAKHOHGGODI_OFFSET))(this, GBAHDKCCELK, IACKHFCLPJI, GLHGOPJOEBF, EMNEIEIHABN, MIDHFGMEOEC, OKONIJEGJOM, LIMNECOMDOM);
	}

	::System::Void BNFCPHOLFJA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_BNFCPHOLFJA_OFFSET))(this);
	}

	static ::System::Single KPIOHADPJGL(::UnityEngine::Vector3 JNDDJMAHNAI, ::UnityEngine::Vector3 EJCBEJMGFAJ, ::UnityEngine::Vector3 EBFCACIEKBC)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_KPIOHADPJGL_OFFSET))(JNDDJMAHNAI, EJCBEJMGFAJ, EBFCACIEKBC);
	}

	::System::Void CKHHPBIGAJB(::UnityEngine::Vector3 GBAHDKCCELK, ::MoleMole::Config::GuidePoint_AutoGenStrategy OKONIJEGJOM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::MoleMole::Config::GuidePoint_AutoGenStrategy))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_CKHHPBIGAJB_OFFSET))(this, GBAHDKCCELK, OKONIJEGJOM);
	}

	::Cysharp::Threading::Tasks::UniTask IGJPIMGPEAL()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_IGJPIMGPEAL_OFFSET))(this);
	}

	::System::Boolean OGDODHEGAHN(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* EMNEIEIHABN, ::UnityEngine::Vector3 IACKHFCLPJI, ::Il2CppArray<::UnityEngine::Vector3>* EBNCEJPGLDC, ::NPGBGLGJGCF_CCEMFFGBBMF_CLPHDFOFABO& MIDHFGMEOEC, ::System::Int32 LIMNECOMDOM, ::MoleMole::Config::GuidePoint_AutoGenStrategy OKONIJEGJOM)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Vector3>*, ::NPGBGLGJGCF_CCEMFFGBBMF_CLPHDFOFABO&, ::System::Int32, ::MoleMole::Config::GuidePoint_AutoGenStrategy))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_OGDODHEGAHN_OFFSET))(this, EMNEIEIHABN, IACKHFCLPJI, EBNCEJPGLDC, MIDHFGMEOEC, LIMNECOMDOM, OKONIJEGJOM);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* BKOLPJIIEJK(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_BKOLPJIIEJK_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void BBOMJDBNHIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_BBOMJDBNHIC_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask APHOMOCIANO(::NPGBGLGJGCF_CCEMFFGBBMF_KGHNCICOMGF_ODGPOMDILID CCKFAJDPCCF, ::System::Int32 LIMNECOMDOM)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::NPGBGLGJGCF_CCEMFFGBBMF_KGHNCICOMGF_ODGPOMDILID, ::System::Int32))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_APHOMOCIANO_OFFSET))(this, CCKFAJDPCCF, LIMNECOMDOM);
	}

	::System::Void EIADIPEKFGB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_EIADIPEKFGB_OFFSET))(this);
	}

	::System::Void IKKPHEABIFN(::System::String* GGNCOAPMEDN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_IKKPHEABIFN_OFFSET))(this, GGNCOAPMEDN);
	}
};
