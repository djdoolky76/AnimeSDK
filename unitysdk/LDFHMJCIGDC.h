#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGELKBLKFHE.h"
#include "unitysdk/LDFHMJCIGDC_GJMLEEJMBOG.h"
#include "unitysdk/LDFHMJCIGDC_MFNEBGOOHNM.h"
#include "unitysdk/LDFINMINMCL.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/ValueTuple_2.h"

class CLGEOOJGIMO;
class DLLONMKGCBH;
class DLOICFALMNK;
class FEPCPAOJGKI;
class FGCOIBFFCHB;
class FJIFILPGMCF;
class GHOEJMIDJCI;
class HGAJKHIMKJP;
class IBENDELLLAO;
class JACGGANOHEN;
class MDPAGGGKMJM;
class MFEKBBCCCFE;
namespace MoleMole { class UIBaseController; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class DFDEIDBBGHG_1;

#define LDFHMJCIGDC_ABHILCDMDJM_OFFSET UNITYSDK_OFFSET(0x12550910)
#define LDFHMJCIGDC_ACBNMFNCIBC_OFFSET UNITYSDK_OFFSET(0x125511D0)
#define LDFHMJCIGDC_ACNBELOMGFB_OFFSET UNITYSDK_OFFSET(0x12556B00)
#define LDFHMJCIGDC_AECLPBIMHGF_OFFSET UNITYSDK_OFFSET(0x12551F30)
#define LDFHMJCIGDC_AEIAAEDBHMM_OFFSET UNITYSDK_OFFSET(0x12550180)
#define LDFHMJCIGDC_AGHDNDLLPFH_OFFSET UNITYSDK_OFFSET(0x12551CE0)
#define LDFHMJCIGDC_ALFOIFGFBJP_OFFSET UNITYSDK_OFFSET(0x1255A100)
#define LDFHMJCIGDC_BIHAAMGNIBD_OFFSET UNITYSDK_OFFSET(0x12555760)
#define LDFHMJCIGDC_CDMNJHGGNJM_OFFSET UNITYSDK_OFFSET(0x12558E40)
#define LDFHMJCIGDC_CJJIEGAMKJA_OFFSET UNITYSDK_OFFSET(0x12552C90)
#define LDFHMJCIGDC_CNIKAMOAANF_OFFSET UNITYSDK_OFFSET(0x12559A00)
#define LDFHMJCIGDC_DDDKMDIPCIA_OFFSET UNITYSDK_OFFSET(0x12559BE0)
#define LDFHMJCIGDC_DEBOMKKFJPA_OFFSET UNITYSDK_OFFSET(0x12558910)
#define LDFHMJCIGDC_DEFAJCMDKHJ_OFFSET UNITYSDK_OFFSET(0x12554490)
#define LDFHMJCIGDC_DMBKFCNGJPP_OFFSET UNITYSDK_OFFSET(0x12557AD0)
#define LDFHMJCIGDC_DOPGAFCKMNF_OFFSET UNITYSDK_OFFSET(0x12559730)
#define LDFHMJCIGDC_EFODGLLNMHF_OFFSET UNITYSDK_OFFSET(0x12558A00)
#define LDFHMJCIGDC_ENICOIMBDHF_OFFSET UNITYSDK_OFFSET(0x12555300)
#define LDFHMJCIGDC_EOKBIEKCDDE_OFFSET UNITYSDK_OFFSET(0x12556040)
#define LDFHMJCIGDC_FBCAODCFOBB_OFFSET UNITYSDK_OFFSET(0x12556910)
#define LDFHMJCIGDC_FFGJEFODOAN_OFFSET UNITYSDK_OFFSET(0x12550B50)
#define LDFHMJCIGDC_FGDNMACABEH_OFFSET UNITYSDK_OFFSET(0x12553A90)
#define LDFHMJCIGDC_FICLPHIOBMD_OFFSET UNITYSDK_OFFSET(0x12556F10)
#define LDFHMJCIGDC_FPLBKMCDLPF_OFFSET UNITYSDK_OFFSET(0x12559560)
#define LDFHMJCIGDC_GGKDHBNOJGE_OFFSET UNITYSDK_OFFSET(0x125597D0)
#define LDFHMJCIGDC_GKFMHPACANO_OFFSET UNITYSDK_OFFSET(0x12553820)
#define LDFHMJCIGDC_GNBHKEMLGEK_OFFSET UNITYSDK_OFFSET(0x125507D0)
#define LDFHMJCIGDC_GPMKEHIKDFJ_OFFSET UNITYSDK_OFFSET(0x12554200)
#define LDFHMJCIGDC_HEEHGMDCAKL_OFFSET UNITYSDK_OFFSET(0x1255A0F0)
#define LDFHMJCIGDC_HHHFCACDOMA_OFFSET UNITYSDK_OFFSET(0x12553F20)
#define LDFHMJCIGDC_HHJGHIKLDBL_OFFSET UNITYSDK_OFFSET(0x12557250)
#define LDFHMJCIGDC_HMHNHPDKOHF_OFFSET UNITYSDK_OFFSET(0x12554420)
#define LDFHMJCIGDC_HOEOLEMCIDH_OFFSET UNITYSDK_OFFSET(0x12555930)
#define LDFHMJCIGDC_HPPOMIEEMML_OFFSET UNITYSDK_OFFSET(0x12557A70)
#define LDFHMJCIGDC_IDFKGLKDKIL_OFFSET UNITYSDK_OFFSET(0x125595A0)
#define LDFHMJCIGDC_IJFOCBJDIIP_OFFSET UNITYSDK_OFFSET(0x125535D0)
#define LDFHMJCIGDC_IOIHNMDIMAP_OFFSET UNITYSDK_OFFSET(0x12551400)
#define LDFHMJCIGDC_IOMPMBGBJPC_OFFSET UNITYSDK_OFFSET(0x12554050)
#define LDFHMJCIGDC_JBDOEODPHBL_OFFSET UNITYSDK_OFFSET(0x12554980)
#define LDFHMJCIGDC_JHKKJMGNDBN_OFFSET UNITYSDK_OFFSET(0x12550680)
#define LDFHMJCIGDC_JNOFEHFAEIA_OFFSET UNITYSDK_OFFSET(0x125543C0)
#define LDFHMJCIGDC_JOKIOGHEJDM_OFFSET UNITYSDK_OFFSET(0x12550BA0)
#define LDFHMJCIGDC_KBJKEMJGGBJ_OFFSET UNITYSDK_OFFSET(0x12558FF0)
#define LDFHMJCIGDC_KGLNIDJPLJC_OFFSET UNITYSDK_OFFSET(0x125523A0)
#define LDFHMJCIGDC_LBDHGNDFFMK_OFFSET UNITYSDK_OFFSET(0x12554620)
#define LDFHMJCIGDC_LKBJPPBKEND_OFFSET UNITYSDK_OFFSET(0x125525F0)
#define LDFHMJCIGDC_LLAGKPEGLKE_OFFSET UNITYSDK_OFFSET(0x12551020)
#define LDFHMJCIGDC_LPGLHCJEALP_OFFSET UNITYSDK_OFFSET(0x125597C0)
#define LDFHMJCIGDC_MEHFMMCEIDA_OFFSET UNITYSDK_OFFSET(0x12556400)
#define LDFHMJCIGDC_NGDLNAEEPHC_OFFSET UNITYSDK_OFFSET(0x125561D0)
#define LDFHMJCIGDC_NGJCOAIDPCO_OFFSET UNITYSDK_OFFSET(0x1254FD70)
#define LDFHMJCIGDC_NHAOBNMDOIL_OFFSET UNITYSDK_OFFSET(0x12550620)
#define LDFHMJCIGDC_NINNLOLCEEC_OFFSET UNITYSDK_OFFSET(0x12559950)
#define LDFHMJCIGDC_NMPLBJECIGN_OFFSET UNITYSDK_OFFSET(0x12551E20)
#define LDFHMJCIGDC_NNEEBNDCBKJ_OFFSET UNITYSDK_OFFSET(0x125579B0)
#define LDFHMJCIGDC_OIFEMDDPLBM_OFFSET UNITYSDK_OFFSET(0x12551520)
#define LDFHMJCIGDC_OLCODNKINGB_OFFSET UNITYSDK_OFFSET(0x125572A0)
#define LDFHMJCIGDC_ONSHUTDOWN_OFFSET UNITYSDK_OFFSET(0x1254F730)
#define LDFHMJCIGDC_ONSTART_OFFSET UNITYSDK_OFFSET(0x1254F460)
#define LDFHMJCIGDC_PAKFEACPCNE_OFFSET UNITYSDK_OFFSET(0x12559C40)
#define LDFHMJCIGDC_PBGHKLNJEDD_OFFSET UNITYSDK_OFFSET(0x12559E60)
#define LDFHMJCIGDC_PMEEFOBAMFA_OFFSET UNITYSDK_OFFSET(0x12550830)
#define LDFHMJCIGDC_PPCLOGNGKBF_OFFSET UNITYSDK_OFFSET(0x12559000)
#define LDFHMJCIGDC_PPGNILIPGHC_OFFSET UNITYSDK_OFFSET(0x12559A90)
#define LDFHMJCIGDC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1254FD30)
#define LDFHMJCIGDC__CTOR_OFFSET UNITYSDK_OFFSET(0x1254FA00)

inline static constexpr unsigned int LDFHMJCIGDC_TypeDefinitionIndex = 49141;

class LDFHMJCIGDC : public ::JGELKBLKFHE
{
public:
	static ::System::String** StaticGet_ALFLJLEJBNO()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(LDFHMJCIGDC_TypeDefinitionIndex)->GetStaticField(0x41500);
	}
	::System::Collections::Generic::List_1<::System::UInt32>* NFGCJAAOLEN; // 0x18
	::MFEKBBCCCFE* KCLMNNOHJFM; // 0x20
	::System::Collections::Generic::List_1<::System::UInt32>* HLDKJLCMIGL; // 0x28
	::System::Collections::Generic::List_1<::DLLONMKGCBH*>* NOLCMNFAAPG; // 0x30
	::System::Collections::Generic::List_1<::System::Int32>* PONCBJFKGLN; // 0x38
	::System::Collections::Generic::List_1<::System::UInt32>* OLAEKCIJAEF; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::DLOICFALMNK*>*>* OONGNOIJOAB; // 0x48
	::System::Collections::Generic::List_1<::FEPCPAOJGKI*>* DMDFMBEGJMD; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::DLOICFALMNK*>* NGBFMMBBMPC; // 0x58
	::System::Collections::Generic::List_1<::System::UInt32>* MNICPNPINHB; // 0x60
	::System::Threading::CancellationToken HNGBKOCIDPE; // 0x68
	::System::Collections::Generic::List_1<::FJIFILPGMCF*>* EBADAPLPAEI; // 0x70
	::System::Collections::Generic::List_1<::System::UInt32>* ACLEEHJCNLM; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::DLOICFALMNK*>*>* JAFEEHEPJDH; // 0x80
	::System::Boolean KKBBFELJAKO; // 0x88
	::System::Boolean ADAHMOFALCF; // 0x89
	::System::Boolean IOPGOIHDBFG; // 0x8A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFHMJCIGDC__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDFHMJCIGDC__CCTOR_OFFSET))();
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_ONSTART_OFFSET))(this);
	}

	::System::Void OnShutDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_ONSHUTDOWN_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* NGJCOAIDPCO()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_NGJCOAIDPCO_OFFSET))(this);
	}

	::System::Void AEIAAEDBHMM(::System::Int32 APNDOFOMPCJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_AEIAAEDBHMM_OFFSET))(this, APNDOFOMPCJ);
	}

	::System::Boolean JHKKJMGNDBN(::System::UInt32 KOHMMEGHGGL)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_JHKKJMGNDBN_OFFSET))(this, KOHMMEGHGGL);
	}

	::System::Boolean NHAOBNMDOIL(::System::Int32 EIHJFFOMCHD)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_NHAOBNMDOIL_OFFSET))(this, EIHJFFOMCHD);
	}

	::DLOICFALMNK* PMEEFOBAMFA(::System::Int32 CGPIGIAJKNP)
	{
		return ((::DLOICFALMNK*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_PMEEFOBAMFA_OFFSET))(this, CGPIGIAJKNP);
	}

	::System::Boolean ABHILCDMDJM(::System::Int32 PAEEEHKILOC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_ABHILCDMDJM_OFFSET))(this, PAEEEHKILOC);
	}

	::System::Boolean FFGJEFODOAN(::System::Int32 FOICKJNLGLB)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_FFGJEFODOAN_OFFSET))(this, FOICKJNLGLB);
	}

	::System::Void JOKIOGHEJDM(::System::Int32 FOICKJNLGLB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_JOKIOGHEJDM_OFFSET))(this, FOICKJNLGLB);
	}

	::System::Boolean LLAGKPEGLKE(::System::Int32 KOHMMEGHGGL)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_LLAGKPEGLKE_OFFSET))(this, KOHMMEGHGGL);
	}

	::System::Collections::Generic::List_1<::CLGEOOJGIMO*>* ACBNMFNCIBC(::System::Int32 OLLCOEKKMDO, ::System::Int32 AELLPLBJELA)
	{
		return ((::System::Collections::Generic::List_1<::CLGEOOJGIMO*>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_ACBNMFNCIBC_OFFSET))(this, OLLCOEKKMDO, AELLPLBJELA);
	}

	::System::Int32 IOIHNMDIMAP(::FJIFILPGMCF* DPGFPHIMDEL, ::FJIFILPGMCF* DLJPLHKELCO)
	{
		return ((::System::Int32(*)(::PVOID, ::FJIFILPGMCF*, ::FJIFILPGMCF*))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_IOIHNMDIMAP_OFFSET))(this, DPGFPHIMDEL, DLJPLHKELCO);
	}

	::System::Void OIFEMDDPLBM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_OIFEMDDPLBM_OFFSET))(this);
	}

	::System::Boolean AECLPBIMHGF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_AECLPBIMHGF_OFFSET))(this);
	}

	::System::Void KGLNIDJPLJC(::System::Int32 PAEEEHKILOC, ::System::Collections::Generic::List_1<::FJIFILPGMCF*>* CDGBKLPKIBA, ::System::Int32 EGKAKMOLHEJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::FJIFILPGMCF*>*, ::System::Int32))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_KGLNIDJPLJC_OFFSET))(this, PAEEEHKILOC, CDGBKLPKIBA, EGKAKMOLHEJ);
	}

	::System::Void LKBJPPBKEND()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_LKBJPPBKEND_OFFSET))(this);
	}

	::System::Boolean GKFMHPACANO(::System::Int32 FOICKJNLGLB)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_GKFMHPACANO_OFFSET))(this, FOICKJNLGLB);
	}

	::System::Void FGDNMACABEH(::System::Int32 KOHMMEGHGGL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_FGDNMACABEH_OFFSET))(this, KOHMMEGHGGL);
	}

	::System::Int32 HHHFCACDOMA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_HHHFCACDOMA_OFFSET))(this);
	}

	::System::Void IOMPMBGBJPC(::LDFINMINMCL CJECGFFLFGH, ::System::Collections::Generic::List_1<::System::Int32>* BKCKCBKJNKK, ::System::Action_1<::System::Boolean>* EFGDHJCMKMG)
	{
		return ((::System::Void(*)(::PVOID, ::LDFINMINMCL, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_IOMPMBGBJPC_OFFSET))(this, CJECGFFLFGH, BKCKCBKJNKK, EFGDHJCMKMG);
	}

	::System::Boolean GNBHKEMLGEK(::System::UInt32 KOHMMEGHGGL)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_GNBHKEMLGEK_OFFSET))(this, KOHMMEGHGGL);
	}

	::System::Collections::Generic::List_1<::System::Int32>* GPMKEHIKDFJ(::System::Int32 NACGJJKHEJE)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_GPMKEHIKDFJ_OFFSET))(this, NACGJJKHEJE);
	}

	::System::Boolean JNOFEHFAEIA(::CLGEOOJGIMO* DFMKILICPFB)
	{
		return ((::System::Boolean(*)(::PVOID, ::CLGEOOJGIMO*))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_JNOFEHFAEIA_OFFSET))(this, DFMKILICPFB);
	}

	::System::Boolean AGHDNDLLPFH(::System::Int32 PAEEEHKILOC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_AGHDNDLLPFH_OFFSET))(this, PAEEEHKILOC);
	}

	::System::Collections::Generic::List_1<::MDPAGGGKMJM*>* DEFAJCMDKHJ(::System::Int32 OBNIAHNMHPF)
	{
		return ((::System::Collections::Generic::List_1<::MDPAGGGKMJM*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_DEFAJCMDKHJ_OFFSET))(this, OBNIAHNMHPF);
	}

	::System::Void LBDHGNDFFMK(::System::UInt32 NACGJJKHEJE, ::DFDEIDBBGHG_1<::FEPCPAOJGKI*>* AJJHGBFJEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::DFDEIDBBGHG_1<::FEPCPAOJGKI*>*))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_LBDHGNDFFMK_OFFSET))(this, NACGJJKHEJE, AJJHGBFJEGM);
	}

	::System::Collections::Generic::List_1<::System::Object*>* JBDOEODPHBL(::System::Int32 PAEEEHKILOC, ::LDFHMJCIGDC_MFNEBGOOHNM LHCBCLICEMA)
	{
		return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID, ::System::Int32, ::LDFHMJCIGDC_MFNEBGOOHNM))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_JBDOEODPHBL_OFFSET))(this, PAEEEHKILOC, LHCBCLICEMA);
	}

	::System::Int32 ENICOIMBDHF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_ENICOIMBDHF_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::FJIFILPGMCF*>* BIHAAMGNIBD()
	{
		return ((::System::Collections::Generic::List_1<::FJIFILPGMCF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_BIHAAMGNIBD_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* IJFOCBJDIIP()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_IJFOCBJDIIP_OFFSET))(this);
	}

	::System::Void HOEOLEMCIDH(::System::Int32 CGPIGIAJKNP, ::System::Func_2<::System::Int32, ::System::Int32>* JDPGICMGOEM, ::System::Collections::Generic::List_1<::System::Int32>* DJLOKMMLFJC, ::System::Func_2<::System::Int32, ::System::Boolean>* DBBIDCBDBDB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Func_2<::System::Int32, ::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Func_2<::System::Int32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_HOEOLEMCIDH_OFFSET))(this, CGPIGIAJKNP, JDPGICMGOEM, DJLOKMMLFJC, DBBIDCBDBDB);
	}

	::DLOICFALMNK* EOKBIEKCDDE(::System::Int32 CGPIGIAJKNP, ::System::Int32 BMBBLCBKBIO)
	{
		return ((::DLOICFALMNK*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_EOKBIEKCDDE_OFFSET))(this, CGPIGIAJKNP, BMBBLCBKBIO);
	}

	::System::ValueTuple_2<::System::Int32, ::System::Int32> NGDLNAEEPHC()
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_NGDLNAEEPHC_OFFSET))(this);
	}

	::System::Void MEHFMMCEIDA(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_MEHFMMCEIDA_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Collections::Generic::List_1<::MDPAGGGKMJM*>* FBCAODCFOBB()
	{
		return ((::System::Collections::Generic::List_1<::MDPAGGGKMJM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_FBCAODCFOBB_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* ACNBELOMGFB()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_ACNBELOMGFB_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* FICLPHIOBMD(::System::Int32 PAEEEHKILOC)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_FICLPHIOBMD_OFFSET))(this, PAEEEHKILOC);
	}

	::System::Boolean HHJGHIKLDBL(::System::Int32 GAFOFKCDMCF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_HHJGHIKLDBL_OFFSET))(this, GAFOFKCDMCF);
	}

	::System::Void CJJIEGAMKJA(::IBENDELLLAO* LDBJENJOKAC, ::System::Int32 CGPIGIAJKNP, ::System::Func_2<::System::Int32, ::System::Int32>* JDPGICMGOEM, ::System::Collections::Generic::List_1<::System::Int32>* DJLOKMMLFJC, ::System::Func_2<::System::Int32, ::System::Boolean>* DBBIDCBDBDB)
	{
		return ((::System::Void(*)(::PVOID, ::IBENDELLLAO*, ::System::Int32, ::System::Func_2<::System::Int32, ::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Func_2<::System::Int32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_CJJIEGAMKJA_OFFSET))(this, LDBJENJOKAC, CGPIGIAJKNP, JDPGICMGOEM, DJLOKMMLFJC, DBBIDCBDBDB);
	}

	::System::Void OLCODNKINGB(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_OLCODNKINGB_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Collections::Generic::List_1<::Foundation::AssetPath>* HPPOMIEEMML(::System::Int32 NACGJJKHEJE)
	{
		return ((::System::Collections::Generic::List_1<::Foundation::AssetPath>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_HPPOMIEEMML_OFFSET))(this, NACGJJKHEJE);
	}

	::System::Void DMBKFCNGJPP(::System::Int32 NGMBOBALIDK, ::System::Int32 KFAOEFNCLHP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_DMBKFCNGJPP_OFFSET))(this, NGMBOBALIDK, KFAOEFNCLHP);
	}

	::System::Void DEBOMKKFJPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_DEBOMKKFJPA_OFFSET))(this);
	}

	::System::Void EFODGLLNMHF(::LDFHMJCIGDC_GJMLEEJMBOG AGEFPKLIFGB, ::System::Int32 PFFCJEGKDBH, ::System::Int32 PAEEEHKILOC, ::System::Int32 KIBPCOABMCG)
	{
		return ((::System::Void(*)(::PVOID, ::LDFHMJCIGDC_GJMLEEJMBOG, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_EFODGLLNMHF_OFFSET))(this, AGEFPKLIFGB, PFFCJEGKDBH, PAEEEHKILOC, KIBPCOABMCG);
	}

	::System::Boolean CDMNJHGGNJM(::System::Int32 APNDOFOMPCJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_CDMNJHGGNJM_OFFSET))(this, APNDOFOMPCJ);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* KBJKEMJGGBJ()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_KBJKEMJGGBJ_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::Int32, ::System::Int32> PPCLOGNGKBF()
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_PPCLOGNGKBF_OFFSET))(this);
	}

	::System::Boolean FPLBKMCDLPF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_FPLBKMCDLPF_OFFSET))(this);
	}

	::System::Void NNEEBNDCBKJ(::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* GLOIMHAJJIE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HGAJKHIMKJP*>*))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_NNEEBNDCBKJ_OFFSET))(this, GLOIMHAJJIE);
	}

	::System::String* IDFKGLKDKIL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_IDFKGLKDKIL_OFFSET))(this);
	}

	::System::Void DOPGAFCKMNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_DOPGAFCKMNF_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::DLLONMKGCBH*>* LPGLHCJEALP()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::DLLONMKGCBH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_LPGLHCJEALP_OFFSET))(this);
	}

	::DLOICFALMNK* GGKDHBNOJGE(::System::Int32 CGPIGIAJKNP, ::System::Int32 MGMDLMBEDJF)
	{
		return ((::DLOICFALMNK*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_GGKDHBNOJGE_OFFSET))(this, CGPIGIAJKNP, MGMDLMBEDJF);
	}

	static ::System::Void NINNLOLCEEC(::MoleMole::UIBaseController* JOLDOMEIKEF, ::FGCOIBFFCHB* CGJEBPGPIHO)
	{
		return ((::System::Void(*)(::MoleMole::UIBaseController*, ::FGCOIBFFCHB*))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_NINNLOLCEEC_OFFSET))(JOLDOMEIKEF, CGJEBPGPIHO);
	}

	::System::Void CNIKAMOAANF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_CNIKAMOAANF_OFFSET))(this);
	}

	::System::Void PPGNILIPGHC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_PPGNILIPGHC_OFFSET))(this);
	}

	::System::Boolean DDDKMDIPCIA(::CLGEOOJGIMO* DFMKILICPFB)
	{
		return ((::System::Boolean(*)(::PVOID, ::CLGEOOJGIMO*))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_DDDKMDIPCIA_OFFSET))(this, DFMKILICPFB);
	}

	::System::Boolean HMHNHPDKOHF(::System::Int32 PAEEEHKILOC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_HMHNHPDKOHF_OFFSET))(this, PAEEEHKILOC);
	}

	::System::Void PBGHKLNJEDD(::GHOEJMIDJCI* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::GHOEJMIDJCI*))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_PBGHKLNJEDD_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Collections::Generic::IReadOnlyList_1<::FEPCPAOJGKI*>* HEEHGMDCAKL()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::FEPCPAOJGKI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_HEEHGMDCAKL_OFFSET))(this);
	}

	::System::Void ALFOIFGFBJP(::JACGGANOHEN* GDINHGLCODO)
	{
		return ((::System::Void(*)(::PVOID, ::JACGGANOHEN*))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_ALFOIFGFBJP_OFFSET))(this, GDINHGLCODO);
	}

	::System::Boolean NMPLBJECIGN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_NMPLBJECIGN_OFFSET))(this);
	}

	::System::Boolean PAKFEACPCNE(::System::Int32 PAEEEHKILOC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_PAKFEACPCNE_OFFSET))(this, PAEEEHKILOC);
	}
};
