#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CIMIDOAKPCB.h"
#include "unitysdk/DJDDGKFCNAJ_IGOPHLMOGAO.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/IIOIAJMBLNG.h"
#include "unitysdk/IKPCCMOBEOP.h"
#include "unitysdk/LHNPGEJGFNJ.h"
#include "unitysdk/LPJCBPNLBOJ.h"
#include "unitysdk/MNMIFBONDHH.h"
#include "unitysdk/MoleMole/CinemaCameraPosEnum.h"
#include "unitysdk/NCDODLPOLDM.h"
#include "unitysdk/OAJJCNFKIBI.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/ICOLOFOBLBC.h"

class BIJKDAKGODG;
class DKEGIJGBNDP;
class FNGOPHAFNAC;
class HCDDIPKLECL;
class HKCFFHDPLNJ;
class IOEFCGGLDKK;
class JGNCILNLFEE;
class JKHPFBPPPGP;
class KHIDMOFPHNI;
class LIKLHNAMIIN;
class MFBKLAENAEC;
class NABBKNJOMHE;
class NDJMMOGDHMK;
class OAEFGCLEHHO;
class PAFHPDMDDJD;
class PFFCCMJALCO;
namespace MoleMole { class PerformerPositionData; }
namespace MoleMole { class UICinemaDatePlayWidgetController; }
namespace MoleMole { class UIInLevelPauseDialogPopWindowController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define NOHGMPIMCEF_ABEFEJMLMBE_OFFSET UNITYSDK_OFFSET(0xED4A970)
#define NOHGMPIMCEF_ABLOMBBICKK_OFFSET UNITYSDK_OFFSET(0xED4D650)
#define NOHGMPIMCEF_AFPDMPLOPMK_OFFSET UNITYSDK_OFFSET(0xED43680)
#define NOHGMPIMCEF_AHPNHIGCKIL_OFFSET UNITYSDK_OFFSET(0xED4D210)
#define NOHGMPIMCEF_AODIIPBHJFL_OFFSET UNITYSDK_OFFSET(0xED46E60)
#define NOHGMPIMCEF_AODOGOJFDEF_OFFSET UNITYSDK_OFFSET(0xED4C8C0)
#define NOHGMPIMCEF_AOKJADPDAPA_OFFSET UNITYSDK_OFFSET(0xED46500)
#define NOHGMPIMCEF_APDGOPPLMIJ_OFFSET UNITYSDK_OFFSET(0xED478D0)
#define NOHGMPIMCEF_APEBCPMNDJD_OFFSET UNITYSDK_OFFSET(0xED48850)
#define NOHGMPIMCEF_APNHCGCANDP_OFFSET UNITYSDK_OFFSET(0xED49820)
#define NOHGMPIMCEF_BBIKBNKJMIK_OFFSET UNITYSDK_OFFSET(0xED46BE0)
#define NOHGMPIMCEF_BCKNKBFAJFM_OFFSET UNITYSDK_OFFSET(0xED47DF0)
#define NOHGMPIMCEF_BMPNPJFIFDN_OFFSET UNITYSDK_OFFSET(0xED42700)
#define NOHGMPIMCEF_BPOALDKMFAB_OFFSET UNITYSDK_OFFSET(0xED44020)
#define NOHGMPIMCEF_CLAJHLJICJG_OFFSET UNITYSDK_OFFSET(0xED4D480)
#define NOHGMPIMCEF_CMPOFNDKNPM_OFFSET UNITYSDK_OFFSET(0xED46190)
#define NOHGMPIMCEF_CNGAJLFKPOL_OFFSET UNITYSDK_OFFSET(0xED455D0)
#define NOHGMPIMCEF_CNPCEFJOCKN_OFFSET UNITYSDK_OFFSET(0xED4C8D0)
#define NOHGMPIMCEF_CPMBJPAHHPG_OFFSET UNITYSDK_OFFSET(0xED42890)
#define NOHGMPIMCEF_DCEAPPEJBHM_OFFSET UNITYSDK_OFFSET(0xED44D10)
#define NOHGMPIMCEF_DFFLGABIDJE_OFFSET UNITYSDK_OFFSET(0xED4C760)
#define NOHGMPIMCEF_DHFPPBFCEPH_OFFSET UNITYSDK_OFFSET(0xED4D220)
#define NOHGMPIMCEF_DJDJMIAKGFN_OFFSET UNITYSDK_OFFSET(0xED4C3F0)
#define NOHGMPIMCEF_DJOHCNNLMIJ_OFFSET UNITYSDK_OFFSET(0xED4A180)
#define NOHGMPIMCEF_DMCIKAMIKDJ_OFFSET UNITYSDK_OFFSET(0xED471A0)
#define NOHGMPIMCEF_DMLHBGCJLFJ_OFFSET UNITYSDK_OFFSET(0xED4CCB0)
#define NOHGMPIMCEF_DPCNNIDAIIO_OFFSET UNITYSDK_OFFSET(0xED4BDC0)
#define NOHGMPIMCEF_EAIMKFHDCHC_OFFSET UNITYSDK_OFFSET(0xED47100)
#define NOHGMPIMCEF_EBKKPMHIMBE_OFFSET UNITYSDK_OFFSET(0xED4CDD0)
#define NOHGMPIMCEF_EBLGIEPLKCP_OFFSET UNITYSDK_OFFSET(0xED4C030)
#define NOHGMPIMCEF_ECDDFLBDOCJ_OFFSET UNITYSDK_OFFSET(0xED44640)
#define NOHGMPIMCEF_ECLHDBDNBKJ_OFFSET UNITYSDK_OFFSET(0xED48B60)
#define NOHGMPIMCEF_EEFKGNKALBL_OFFSET UNITYSDK_OFFSET(0xED47570)
#define NOHGMPIMCEF_EELJIOJEFMJ_OFFSET UNITYSDK_OFFSET(0xED49F60)
#define NOHGMPIMCEF_EELJNPJNHNG_OFFSET UNITYSDK_OFFSET(0xED4A050)
#define NOHGMPIMCEF_EHDFIODFDGE_OFFSET UNITYSDK_OFFSET(0xED43330)
#define NOHGMPIMCEF_EHMEJGJHGCJ_OFFSET UNITYSDK_OFFSET(0xED4AB90)
#define NOHGMPIMCEF_EJDHGEMOJLE_OFFSET UNITYSDK_OFFSET(0xED4CEC0)
#define NOHGMPIMCEF_EKEFFOAPDJN_OFFSET UNITYSDK_OFFSET(0xED441F0)
#define NOHGMPIMCEF_EPFGLOKPGCL_OFFSET UNITYSDK_OFFSET(0xED46CC0)
#define NOHGMPIMCEF_EPOCECGFNLO_OFFSET UNITYSDK_OFFSET(0xED4CE40)
#define NOHGMPIMCEF_FAILEGJPCLP_OFFSET UNITYSDK_OFFSET(0xED43F90)
#define NOHGMPIMCEF_FANCAILDKNL_OFFSET UNITYSDK_OFFSET(0xED472E0)
#define NOHGMPIMCEF_FJMAGJGNFII_OFFSET UNITYSDK_OFFSET(0xED3FF00)
#define NOHGMPIMCEF_FPONALLDMHB_OFFSET UNITYSDK_OFFSET(0xED41E60)
#define NOHGMPIMCEF_GAKCPODKFKN_OFFSET UNITYSDK_OFFSET(0xED4A3B0)
#define NOHGMPIMCEF_GGACJNDOPOM_OFFSET UNITYSDK_OFFSET(0xED44DA0)
#define NOHGMPIMCEF_GJLNNOBCKPI_OFFSET UNITYSDK_OFFSET(0xED47250)
#define NOHGMPIMCEF_GLEPGOIAJOI_OFFSET UNITYSDK_OFFSET(0xED48620)
#define NOHGMPIMCEF_GLFOAILKMIK_OFFSET UNITYSDK_OFFSET(0xED46550)
#define NOHGMPIMCEF_GOGLJCDPIID_OFFSET UNITYSDK_OFFSET(0xED47E50)
#define NOHGMPIMCEF_HEMKKELDJFP_OFFSET UNITYSDK_OFFSET(0xED4B4C0)
#define NOHGMPIMCEF_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0xED42C40)
#define NOHGMPIMCEF_HNHMPIBNACM_OFFSET UNITYSDK_OFFSET(0xED45220)
#define NOHGMPIMCEF_HOHEKIIGLJO_OFFSET UNITYSDK_OFFSET(0xED48E50)
#define NOHGMPIMCEF_HOLOCFNNECI_OFFSET UNITYSDK_OFFSET(0xED48400)
#define NOHGMPIMCEF_HPBMPJOMPDJ_OFFSET UNITYSDK_OFFSET(0xED47CE0)
#define NOHGMPIMCEF_HPDBEOMFANK_OFFSET UNITYSDK_OFFSET(0xED4A1D0)
#define NOHGMPIMCEF_IBOOFPKLAAH_OFFSET UNITYSDK_OFFSET(0xED41700)
#define NOHGMPIMCEF_ICMLJOAMCJP_OFFSET UNITYSDK_OFFSET(0xED41DD0)
#define NOHGMPIMCEF_ICPKFAAIJBA_OFFSET UNITYSDK_OFFSET(0xED40E40)
#define NOHGMPIMCEF_IDGAGMBHEJJ_OFFSET UNITYSDK_OFFSET(0xED49420)
#define NOHGMPIMCEF_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0xED4CD40)
#define NOHGMPIMCEF_IHFICDJOFOD_OFFSET UNITYSDK_OFFSET(0xED4A130)
#define NOHGMPIMCEF_ILOKBDNPFBP_OFFSET UNITYSDK_OFFSET(0xED48DB0)
#define NOHGMPIMCEF_IMIOGKAHLOC_OFFSET UNITYSDK_OFFSET(0xED44190)
#define NOHGMPIMCEF_IMOMELLKIKA_OFFSET UNITYSDK_OFFSET(0xED45870)
#define NOHGMPIMCEF_IMPAGBMILON_OFFSET UNITYSDK_OFFSET(0xED4D160)
#define NOHGMPIMCEF_IOAODGHOOCN_OFFSET UNITYSDK_OFFSET(0xED49D30)
#define NOHGMPIMCEF_IOBDPEDOBCP_OFFSET UNITYSDK_OFFSET(0xED461E0)
#define NOHGMPIMCEF_IOPOBOPJLGD_OFFSET UNITYSDK_OFFSET(0xED41400)
#define NOHGMPIMCEF_IPAFCHOFJEJ_OFFSET UNITYSDK_OFFSET(0xED499A0)
#define NOHGMPIMCEF_JFHOBAOPKLE_OFFSET UNITYSDK_OFFSET(0xED43030)
#define NOHGMPIMCEF_JIGAJBMJNEN_OFFSET UNITYSDK_OFFSET(0xED46C70)
#define NOHGMPIMCEF_JKPDFKKPBPN_OFFSET UNITYSDK_OFFSET(0xED43800)
#define NOHGMPIMCEF_KCLHMMPCHBM_OFFSET UNITYSDK_OFFSET(0xED46960)
#define NOHGMPIMCEF_KFODDGFEBMP_OFFSET UNITYSDK_OFFSET(0xED4BB50)
#define NOHGMPIMCEF_KGKDIGDABMC_OFFSET UNITYSDK_OFFSET(0xED434A0)
#define NOHGMPIMCEF_KHMNPOMJFIJ_OFFSET UNITYSDK_OFFSET(0xED4A290)
#define NOHGMPIMCEF_KLBCBKIPJAO_OFFSET UNITYSDK_OFFSET(0xED446F0)
#define NOHGMPIMCEF_KOAEDAEPKNL_OFFSET UNITYSDK_OFFSET(0xED443F0)
#define NOHGMPIMCEF_KOEGIFJLEKG_OFFSET UNITYSDK_OFFSET(0xED485B0)
#define NOHGMPIMCEF_KPDDHLMJDEH_OFFSET UNITYSDK_OFFSET(0xED459D0)
#define NOHGMPIMCEF_LAAJOGHHPMH_OFFSET UNITYSDK_OFFSET(0xED4A320)
#define NOHGMPIMCEF_LBLAJINGLEC_OFFSET UNITYSDK_OFFSET(0xED427C0)
#define NOHGMPIMCEF_LCELFLIKGGN_OFFSET UNITYSDK_OFFSET(0xED4CC60)
#define NOHGMPIMCEF_LGPLMIEBHMM_OFFSET UNITYSDK_OFFSET(0xED44BE0)
#define NOHGMPIMCEF_LHJNCJAAOFJ_OFFSET UNITYSDK_OFFSET(0xED4AA50)
#define NOHGMPIMCEF_LKJCBLDHMBJ_OFFSET UNITYSDK_OFFSET(0xED4A880)
#define NOHGMPIMCEF_LKOBCKAKDBO_OFFSET UNITYSDK_OFFSET(0xED47C30)
#define NOHGMPIMCEF_LLDBKCIMOEH_OFFSET UNITYSDK_OFFSET(0xED4B7E0)
#define NOHGMPIMCEF_LLJBIHPGJGO_OFFSET UNITYSDK_OFFSET(0xED49290)
#define NOHGMPIMCEF_LLPACDPAACF_OFFSET UNITYSDK_OFFSET(0xED40760)
#define NOHGMPIMCEF_LMIAPIPMHGM_OFFSET UNITYSDK_OFFSET(0xED497C0)
#define NOHGMPIMCEF_LNDBOHFEIBI_OFFSET UNITYSDK_OFFSET(0xED4B070)
#define NOHGMPIMCEF_MBOIEFKAIMN_OFFSET UNITYSDK_OFFSET(0xED4D430)
#define NOHGMPIMCEF_MCHEEDICOAH_OFFSET UNITYSDK_OFFSET(0xED4B470)
#define NOHGMPIMCEF_MDHPPJGDMBC_OFFSET UNITYSDK_OFFSET(0xED43440)
#define NOHGMPIMCEF_MDMKMKAKEMA_OFFSET UNITYSDK_OFFSET(0xED42BD0)
#define NOHGMPIMCEF_MFGADGEPMNL_OFFSET UNITYSDK_OFFSET(0xED47370)
#define NOHGMPIMCEF_MLDBKDEBBCP_OFFSET UNITYSDK_OFFSET(0xED46D70)
#define NOHGMPIMCEF_MNIIGCMJMNG_OFFSET UNITYSDK_OFFSET(0xED4A820)
#define NOHGMPIMCEF_NBFIEPLJOCM_OFFSET UNITYSDK_OFFSET(0xED40CA0)
#define NOHGMPIMCEF_NCAGFMCGJGF_OFFSET UNITYSDK_OFFSET(0xED486D0)
#define NOHGMPIMCEF_NCIGFCCICPE_OFFSET UNITYSDK_OFFSET(0xED4B160)
#define NOHGMPIMCEF_NJKGHGCOHJJ_OFFSET UNITYSDK_OFFSET(0xED40D90)
#define NOHGMPIMCEF_NKIIMPHMGLM_OFFSET UNITYSDK_OFFSET(0xED44970)
#define NOHGMPIMCEF_NLGAODCGJHG_OFFSET UNITYSDK_OFFSET(0xED494B0)
#define NOHGMPIMCEF_NMGEMCJPCDC_OFFSET UNITYSDK_OFFSET(0xED47D30)
#define NOHGMPIMCEF_OAKIMELHGBL_OFFSET UNITYSDK_OFFSET(0xED4B790)
#define NOHGMPIMCEF_OEJCKJHPACL_OFFSET UNITYSDK_OFFSET(0xED421B0)
#define NOHGMPIMCEF_OGAMMAEHJFB_OFFSET UNITYSDK_OFFSET(0xED469E0)
#define NOHGMPIMCEF_OGBECDFKPKH_OFFSET UNITYSDK_OFFSET(0xED487C0)
#define NOHGMPIMCEF_OHDBCKOOMHK_OFFSET UNITYSDK_OFFSET(0xED404F0)
#define NOHGMPIMCEF_OHGEAFIALDJ_OFFSET UNITYSDK_OFFSET(0xED48140)
#define NOHGMPIMCEF_OJKGNOBFCDH_OFFSET UNITYSDK_OFFSET(0xED48990)
#define NOHGMPIMCEF_OKEGMHFOOPG_OFFSET UNITYSDK_OFFSET(0xED42A30)
#define NOHGMPIMCEF_OLOONKOGPHJ_OFFSET UNITYSDK_OFFSET(0xED48EA0)
#define NOHGMPIMCEF_ONEKFJPLGIE_OFFSET UNITYSDK_OFFSET(0xED4B6D0)
#define NOHGMPIMCEF_ONGIKPAPNDE_OFFSET UNITYSDK_OFFSET(0xED4AA60)
#define NOHGMPIMCEF_ONPHOIECIEC_OFFSET UNITYSDK_OFFSET(0xED45450)
#define NOHGMPIMCEF_PCMJBCNNPFM_OFFSET UNITYSDK_OFFSET(0xED47600)
#define NOHGMPIMCEF_PHOBOKLFLOA_OFFSET UNITYSDK_OFFSET(0xED47400)
#define NOHGMPIMCEF_PHPPNIHKAPN_OFFSET UNITYSDK_OFFSET(0xED40280)
#define NOHGMPIMCEF_PKBMELDKHBH_OFFSET UNITYSDK_OFFSET(0xED4BAF0)
#define NOHGMPIMCEF_PKKEFAJKPCP_OFFSET UNITYSDK_OFFSET(0xED4ACD0)
#define NOHGMPIMCEF_PNJNICDCCNF_OFFSET UNITYSDK_OFFSET(0xED41C50)
#define NOHGMPIMCEF_PNKANGFOAJA_OFFSET UNITYSDK_OFFSET(0xED48B10)
#define NOHGMPIMCEF_POAJMHKLECG_OFFSET UNITYSDK_OFFSET(0xED48300)
#define NOHGMPIMCEF__CTOR_OFFSET UNITYSDK_OFFSET(0xED43CA0)

inline static constexpr unsigned int NOHGMPIMCEF_TypeDefinitionIndex = 90743;

class NOHGMPIMCEF : public ::IKPCCMOBEOP
{
public:
	::BIJKDAKGODG* FAMGDHDCHEL; // 0x20
	::OAJJCNFKIBI JKHIHIBHDPH; // 0x28
	::IOEFCGGLDKK* GBMLHHANFFN; // 0x38
	::MoleMole::PerformerPositionData* DOIJECJEOEF; // 0x40
	::System::Threading::CancellationTokenSource* BKBFOHKINOC; // 0x48
	::MFBKLAENAEC* KAJMLHHCCEO; // 0x50
	::JKHPFBPPPGP* DEPMNLCHDIK; // 0x58
	::System::Collections::Generic::List_1<::DKEGIJGBNDP*>* EMLEJEIGHHI; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::PAFHPDMDDJD*>* AKBHOFIOEKI; // 0x68
	::HCDDIPKLECL* NNFOBEFOHHL; // 0x70
	::System::Collections::Generic::Dictionary_2<::LHNPGEJGFNJ, ::UnityEngine::GameObject*>* CCPGLGNNFDD; // 0x78
	::System::Collections::Generic::List_1<::LPJCBPNLBOJ>* LIIOKABPHNI; // 0x80
	::CIMIDOAKPCB HOPAAPNJLBD; // 0x88
	::System::Collections::Generic::List_1<::System::Int32>* IPPEIICEPBO; // 0xA8
	::FNGOPHAFNAC* FKJDBKDMIIO; // 0xB0
	::System::Threading::CancellationTokenSource* LMNBEANDABK; // 0xB8
	::System::Action* IONDJJBPPFI; // 0xC0
	::System::Threading::CancellationTokenSource* NPFAOLHOBLB; // 0xC8
	::System::Action* DKBEBJKDKDB; // 0xD0
	::System::Action* MGAKJHJAGJI; // 0xD8
	::System::Collections::Generic::List_1<::System::Int32>* GIOALFEFEPE; // 0xE0
	::MoleMole::UICinemaDatePlayWidgetController* CBMHEOLJLKO; // 0xE8
	::KHIDMOFPHNI* HJPMOKMGMLP; // 0xF0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::LIKLHNAMIIN*>* DEFLELOMFLD; // 0xF8
	::NDJMMOGDHMK* GGBEEBHAMMK; // 0x100
	::IOEFCGGLDKK* ECKMPOAABAL; // 0x108
	::PFFCCMJALCO* LCNKFFOMOHN; // 0x110
	::System::Collections::Generic::List_1<::LIKLHNAMIIN*>* HPCDDMILDBO; // 0x118
	::HKCFFHDPLNJ* NCAMEGEFOKA; // 0x120
	::System::Collections::Generic::List_1<::System::Int32>* CDCDHBOPAEG; // 0x128
	::System::Collections::Generic::HashSet_1<::System::Action*>* KGJPFPIPAFF; // 0x130
	::NABBKNJOMHE* GKDMHDGMJLM; // 0x138
	::System::Action* HELEGEJDMGE; // 0x140
	::MoleMole::UIInLevelPauseDialogPopWindowController* ABFEDNJJPIC; // 0x148
	::System::Int32 FIGJPLIHGIF; // 0x150
	::System::Int32 LALPKBGEGPN; // 0x154
	::System::Int32 OOONCDPCCDL; // 0x158
	::Foundation::Coroutine::CoroutineHandle KNOKDCDPKHO; // 0x15C
	::System::Int32 ENMENDNPLNE; // 0x160
	::System::Boolean JKDKLAGNKKL; // 0x164
	::System::Boolean FNIPJFGENOB; // 0x165
	::System::Boolean KLNLGHMMNGM; // 0x166
	::System::Boolean HPEAGNOJPPB; // 0x167
	::System::Boolean IHPCMIHOEPD; // 0x168
	::System::Boolean PDJFGIKNOGK; // 0x169
	::System::Boolean GEPKKCGGKKA; // 0x16A
	::System::Boolean NKFIAADINGH; // 0x16B
	::System::Int32 EJAHBJHMEEO; // 0x16C
	::System::Int32 LIGLDFCPPOI; // 0x170
	::System::Single BNDGLFCBFMP; // 0x174
	::UnityEngine::Vector3 GPGBNLFPINM; // 0x178
	::System::Boolean NOLBECKFLEK; // 0x184
	::System::Boolean EDGDCKOGIMJ; // 0x185
	::System::Boolean PABKOHBDMPJ; // 0x186
	::System::Boolean MDLBFIIFPIN; // 0x187
	::NCDODLPOLDM PGGABNDCJLP; // 0x188
	::UnityEngine::Vector3 IHKLJEJBAJL; // 0x190
	::System::Boolean HDDJCDCMHHF; // 0x19C
	::System::Boolean AGMLLNGFOJM; // 0x19D
	::System::Boolean PFFDOIBHIEC; // 0x19E
	::System::Boolean AIMECOIEIFA; // 0x19F

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF__CTOR_OFFSET))(this);
	}

	::System::Void FJMAGJGNFII()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_FJMAGJGNFII_OFFSET))(this);
	}

	::System::Void PHPPNIHKAPN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_PHPPNIHKAPN_OFFSET))(this);
	}

	::System::Void OHDBCKOOMHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_OHDBCKOOMHK_OFFSET))(this);
	}

	::System::Void LLPACDPAACF(::System::Boolean KLNLGHMMNGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_LLPACDPAACF_OFFSET))(this, KLNLGHMMNGM);
	}

	::System::Void ICPKFAAIJBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_ICPKFAAIJBA_OFFSET))(this);
	}

	::System::Void OKEGMHFOOPG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_OKEGMHFOOPG_OFFSET))(this);
	}

	::System::Void MDMKMKAKEMA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_MDMKMKAKEMA_OFFSET))(this);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void EHDFIODFDGE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_EHDFIODFDGE_OFFSET))(this);
	}

	::System::Void MDHPPJGDMBC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_MDHPPJGDMBC_OFFSET))(this);
	}

	::System::Void FAILEGJPCLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_FAILEGJPCLP_OFFSET))(this);
	}

	::System::Void LBLAJINGLEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_LBLAJINGLEC_OFFSET))(this);
	}

	::System::Void BPOALDKMFAB(::System::Int32 BIOCCLCHKLJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_BPOALDKMFAB_OFFSET))(this, BIOCCLCHKLJ);
	}

	::System::Void IMIOGKAHLOC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_IMIOGKAHLOC_OFFSET))(this);
	}

	::System::Void KOAEDAEPKNL(::IIOIAJMBLNG IGNINAECFDG, ::LHNPGEJGFNJ EFFLBFCKOKC, ::LHNPGEJGFNJ OKOGHHLBHPC)
	{
		return ((::System::Void(*)(::PVOID, ::IIOIAJMBLNG, ::LHNPGEJGFNJ, ::LHNPGEJGFNJ))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_KOAEDAEPKNL_OFFSET))(this, IGNINAECFDG, EFFLBFCKOKC, OKOGHHLBHPC);
	}

	::System::Void KLBCBKIPJAO(::DKEGIJGBNDP* INKGAPMPBCB)
	{
		return ((::System::Void(*)(::PVOID, ::DKEGIJGBNDP*))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_KLBCBKIPJAO_OFFSET))(this, INKGAPMPBCB);
	}

	::System::Void DCEAPPEJBHM(::MoleMole::CinemaCameraPosEnum ILMDKECDGCP)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CinemaCameraPosEnum))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_DCEAPPEJBHM_OFFSET))(this, ILMDKECDGCP);
	}

	::System::Void ONPHOIECIEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_ONPHOIECIEC_OFFSET))(this);
	}

	::System::Void CNGAJLFKPOL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_CNGAJLFKPOL_OFFSET))(this);
	}

	::System::Void EKEFFOAPDJN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_EKEFFOAPDJN_OFFSET))(this);
	}

	::System::Void CMPOFNDKNPM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_CMPOFNDKNPM_OFFSET))(this);
	}

	::System::Void IOBDPEDOBCP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_IOBDPEDOBCP_OFFSET))(this);
	}

	::System::Void AOKJADPDAPA(::System::Int32 KIHNHPOFAML)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_AOKJADPDAPA_OFFSET))(this, KIHNHPOFAML);
	}

	::System::Void GLFOAILKMIK(::System::Int32 KIHNHPOFAML, ::System::Boolean DHNMCMNEILH, ::System::Action* PABLEDCGDGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_GLFOAILKMIK_OFFSET))(this, KIHNHPOFAML, DHNMCMNEILH, PABLEDCGDGM);
	}

	::System::Void KCLHMMPCHBM(::LHNPGEJGFNJ EFFLBFCKOKC)
	{
		return ((::System::Void(*)(::PVOID, ::LHNPGEJGFNJ))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_KCLHMMPCHBM_OFFSET))(this, EFFLBFCKOKC);
	}

	::System::Void JKPDFKKPBPN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_JKPDFKKPBPN_OFFSET))(this);
	}

	::System::Void KPDDHLMJDEH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_KPDDHLMJDEH_OFFSET))(this);
	}

	::System::Void EPFGLOKPGCL(::System::Int32 NJEMNLDCHNN, ::System::Single NHLCCIEKEPD, ::System::Boolean OLBGLDIJBMB, ::System::Action* JLNLECDGGMI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_EPFGLOKPGCL_OFFSET))(this, NJEMNLDCHNN, NHLCCIEKEPD, OLBGLDIJBMB, JLNLECDGGMI);
	}

	::System::Void AODIIPBHJFL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_AODIIPBHJFL_OFFSET))(this);
	}

	::System::Void EAIMKFHDCHC(::System::Single NOMIOBKBOMH, ::System::Int32 IBMBJKBDAID, ::System::Boolean AGMLLNGFOJM, ::System::Action* DKBEBJKDKDB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_EAIMKFHDCHC_OFFSET))(this, NOMIOBKBOMH, IBMBJKBDAID, AGMLLNGFOJM, DKBEBJKDKDB);
	}

	::System::Void DMCIKAMIKDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_DMCIKAMIKDJ_OFFSET))(this);
	}

	::System::Void GJLNNOBCKPI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_GJLNNOBCKPI_OFFSET))(this);
	}

	::System::Void FANCAILDKNL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_FANCAILDKNL_OFFSET))(this);
	}

	::System::Void MFGADGEPMNL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_MFGADGEPMNL_OFFSET))(this);
	}

	::System::Void PHOBOKLFLOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_PHOBOKLFLOA_OFFSET))(this);
	}

	::System::Void EEFKGNKALBL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_EEFKGNKALBL_OFFSET))(this);
	}

	::System::Void PCMJBCNNPFM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_PCMJBCNNPFM_OFFSET))(this);
	}

	::System::Void APDGOPPLMIJ(::CIMIDOAKPCB HNOPAJLDCFB)
	{
		return ((::System::Void(*)(::PVOID, ::CIMIDOAKPCB))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_APDGOPPLMIJ_OFFSET))(this, HNOPAJLDCFB);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid LKOBCKAKDBO(::System::String* ONOAGAPJNCG, ::System::String* NGHLLDAJJJE, ::System::Single FNIOPKPHDEH)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_LKOBCKAKDBO_OFFSET))(this, ONOAGAPJNCG, NGHLLDAJJJE, FNIOPKPHDEH);
	}

	::System::Void MLDBKDEBBCP(::System::Int32 NJEMNLDCHNN, ::System::Single NHLCCIEKEPD, ::System::Boolean OLBGLDIJBMB, ::System::Action* JLNLECDGGMI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_MLDBKDEBBCP_OFFSET))(this, NJEMNLDCHNN, NHLCCIEKEPD, OLBGLDIJBMB, JLNLECDGGMI);
	}

	::System::Void HPBMPJOMPDJ(::System::Boolean LBPIPEAKPDG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_HPBMPJOMPDJ_OFFSET))(this, LBPIPEAKPDG);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid NMGEMCJPCDC(::System::Single FNIOPKPHDEH, ::System::Action* MGAKJHJAGJI)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_NMGEMCJPCDC_OFFSET))(this, FNIOPKPHDEH, MGAKJHJAGJI);
	}

	::System::Void BCKNKBFAJFM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_BCKNKBFAJFM_OFFSET))(this);
	}

	::System::Void CPMBJPAHHPG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_CPMBJPAHHPG_OFFSET))(this);
	}

	::System::Void OHGEAFIALDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_OHGEAFIALDJ_OFFSET))(this);
	}

	::System::Void POAJMHKLECG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_POAJMHKLECG_OFFSET))(this);
	}

	::System::Void HOLOCFNNECI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_HOLOCFNNECI_OFFSET))(this);
	}

	::System::Void GLEPGOIAJOI(::IOEFCGGLDKK* ELEIACDBIPL, ::System::Boolean IIHOFLIFHNB)
	{
		return ((::System::Void(*)(::PVOID, ::IOEFCGGLDKK*, ::System::Boolean))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_GLEPGOIAJOI_OFFSET))(this, ELEIACDBIPL, IIHOFLIFHNB);
	}

	::System::Void NCAGFMCGJGF(::UnityEngine::Transform* KDCDGPFAGFC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_NCAGFMCGJGF_OFFSET))(this, KDCDGPFAGFC);
	}

	::System::Void OGBECDFKPKH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_OGBECDFKPKH_OFFSET))(this);
	}

	::System::Void APEBCPMNDJD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_APEBCPMNDJD_OFFSET))(this);
	}

	::System::Void OJKGNOBFCDH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_OJKGNOBFCDH_OFFSET))(this);
	}

	::System::Void LGPLMIEBHMM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_LGPLMIEBHMM_OFFSET))(this);
	}

	::System::Void PNKANGFOAJA(::DJDDGKFCNAJ_IGOPHLMOGAO FKMHMOELCIO)
	{
		return ((::System::Void(*)(::PVOID, ::DJDDGKFCNAJ_IGOPHLMOGAO))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_PNKANGFOAJA_OFFSET))(this, FKMHMOELCIO);
	}

	::System::Void ILOKBDNPFBP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_ILOKBDNPFBP_OFFSET))(this);
	}

	::System::Void OGAMMAEHJFB(::System::Boolean MBJDMKCGOCK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_OGAMMAEHJFB_OFFSET))(this, MBJDMKCGOCK);
	}

	::System::Void ECDDFLBDOCJ(::System::Action* ILHKIDFOGAA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_ECDDFLBDOCJ_OFFSET))(this, ILHKIDFOGAA);
	}

	::System::Void HOHEKIIGLJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_HOHEKIIGLJO_OFFSET))(this);
	}

	::System::Void KGKDIGDABMC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_KGKDIGDABMC_OFFSET))(this);
	}

	::System::Void BMPNPJFIFDN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_BMPNPJFIFDN_OFFSET))(this);
	}

	::System::Void OLOONKOGPHJ(::System::Single EJAOAGGJHHA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_OLOONKOGPHJ_OFFSET))(this, EJAOAGGJHHA);
	}

	::System::Void LLJBIHPGJGO(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_LLJBIHPGJGO_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void IDGAGMBHEJJ(::System::Action* MBCKCPNKDBJ, ::System::Action* CABCMJOAHCO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_IDGAGMBHEJJ_OFFSET))(this, MBCKCPNKDBJ, CABCMJOAHCO);
	}

	::System::Void FPONALLDMHB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_FPONALLDMHB_OFFSET))(this);
	}

	::System::Void NLGAODCGJHG(::System::Single EJAOAGGJHHA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_NLGAODCGJHG_OFFSET))(this, EJAOAGGJHHA);
	}

	::System::Void LMIAPIPMHGM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_LMIAPIPMHGM_OFFSET))(this);
	}

	::System::Void GOGLJCDPIID()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_GOGLJCDPIID_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid BBIKBNKJMIK()
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_BBIKBNKJMIK_OFFSET))(this);
	}

	::System::Void APNHCGCANDP(::System::Int32 BIOCCLCHKLJ, ::System::Int32 KHDKJHHAHBH, ::System::Action* KCBDGFHGNJN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_APNHCGCANDP_OFFSET))(this, BIOCCLCHKLJ, KHDKJHHAHBH, KCBDGFHGNJN);
	}

	::System::Void IOAODGHOOCN(::System::String* DPJHHEINNPC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_IOAODGHOOCN_OFFSET))(this, DPJHHEINNPC);
	}

	::System::Void JFHOBAOPKLE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_JFHOBAOPKLE_OFFSET))(this);
	}

	::System::Void NJKGHGCOHJJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_NJKGHGCOHJJ_OFFSET))(this);
	}

	::System::Void EELJIOJEFMJ(::OAEFGCLEHHO* KGFGOODAFDH)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_EELJIOJEFMJ_OFFSET))(this, KGFGOODAFDH);
	}

	::System::Void EELJNPJNHNG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_EELJNPJNHNG_OFFSET))(this);
	}

	::System::Void HPDBEOMFANK(::System::Int32 BIOCCLCHKLJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_HPDBEOMFANK_OFFSET))(this, BIOCCLCHKLJ);
	}

	::System::Void JIGAJBMJNEN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_JIGAJBMJNEN_OFFSET))(this);
	}

	::System::Void IBOOFPKLAAH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_IBOOFPKLAAH_OFFSET))(this);
	}

	::System::Void NBFIEPLJOCM(::System::Boolean LBPIPEAKPDG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_NBFIEPLJOCM_OFFSET))(this, LBPIPEAKPDG);
	}

	::System::Void KHMNPOMJFIJ(::System::Boolean MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_KHMNPOMJFIJ_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void LAAJOGHHPMH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_LAAJOGHHPMH_OFFSET))(this);
	}

	::System::Void GAKCPODKFKN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_GAKCPODKFKN_OFFSET))(this);
	}

	::System::Void MNIIGCMJMNG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_MNIIGCMJMNG_OFFSET))(this);
	}

	::System::Void AFPDMPLOPMK(::MoleMole::CinemaCameraPosEnum ILMDKECDGCP)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CinemaCameraPosEnum))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_AFPDMPLOPMK_OFFSET))(this, ILMDKECDGCP);
	}

	::System::Void ABEFEJMLMBE(::LHNPGEJGFNJ EFFLBFCKOKC, ::UnityEngine::Vector3 OHOGDOMNHNK)
	{
		return ((::System::Void(*)(::PVOID, ::LHNPGEJGFNJ, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_ABEFEJMLMBE_OFFSET))(this, EFFLBFCKOKC, OHOGDOMNHNK);
	}

	::System::Void LHJNCJAAOFJ(::DJDDGKFCNAJ_IGOPHLMOGAO FKMHMOELCIO)
	{
		return ((::System::Void(*)(::PVOID, ::DJDDGKFCNAJ_IGOPHLMOGAO))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_LHJNCJAAOFJ_OFFSET))(this, FKMHMOELCIO);
	}

	::System::Void ONGIKPAPNDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_ONGIKPAPNDE_OFFSET))(this);
	}

	::System::Void PKKEFAJKPCP(::UnityEngine::Transform* AGPLCNEHALO)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_PKKEFAJKPCP_OFFSET))(this, AGPLCNEHALO);
	}

	::System::Void LNDBOHFEIBI(::JGNCILNLFEE* KGFGOODAFDH)
	{
		return ((::System::Void(*)(::PVOID, ::JGNCILNLFEE*))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_LNDBOHFEIBI_OFFSET))(this, KGFGOODAFDH);
	}

	::System::Void NCIGFCCICPE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_NCIGFCCICPE_OFFSET))(this);
	}

	::System::Void OEJCKJHPACL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_OEJCKJHPACL_OFFSET))(this);
	}

	::System::Void MCHEEDICOAH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_MCHEEDICOAH_OFFSET))(this);
	}

	::System::Void HNHMPIBNACM(::MoleMole::CinemaCameraPosEnum FDAOLKDNALL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CinemaCameraPosEnum))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_HNHMPIBNACM_OFFSET))(this, FDAOLKDNALL);
	}

	::System::Void HEMKKELDJFP(::System::String* ONOAGAPJNCG, ::System::String* NGHLLDAJJJE, ::System::Single FNIOPKPHDEH, ::System::Action* MGAKJHJAGJI)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_HEMKKELDJFP_OFFSET))(this, ONOAGAPJNCG, NGHLLDAJJJE, FNIOPKPHDEH, MGAKJHJAGJI);
	}

	::System::Void DJOHCNNLMIJ(::System::Boolean LBPIPEAKPDG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_DJOHCNNLMIJ_OFFSET))(this, LBPIPEAKPDG);
	}

	::System::Void ONEKFJPLGIE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_ONEKFJPLGIE_OFFSET))(this);
	}

	::System::Void OAKIMELHGBL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_OAKIMELHGBL_OFFSET))(this);
	}

	::System::Void ECLHDBDNBKJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_ECLHDBDNBKJ_OFFSET))(this);
	}

	::System::Void ICMLJOAMCJP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_ICMLJOAMCJP_OFFSET))(this);
	}

	::System::Void LLDBKCIMOEH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_LLDBKCIMOEH_OFFSET))(this);
	}

	::System::Void PKBMELDKHBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_PKBMELDKHBH_OFFSET))(this);
	}

	::System::Void KFODDGFEBMP(::MNMIFBONDHH BBMPIDKPLED)
	{
		return ((::System::Void(*)(::PVOID, ::MNMIFBONDHH))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_KFODDGFEBMP_OFFSET))(this, BBMPIDKPLED);
	}

	::System::Void DPCNNIDAIIO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_DPCNNIDAIIO_OFFSET))(this);
	}

	::System::Void EBLGIEPLKCP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_EBLGIEPLKCP_OFFSET))(this);
	}

	::System::Void DFFLGABIDJE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_DFFLGABIDJE_OFFSET))(this);
	}

	::System::Void LKJCBLDHMBJ(::UnityEngine::Transform* KEDLJEIOOHG)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_LKJCBLDHMBJ_OFFSET))(this, KEDLJEIOOHG);
	}

	::System::Void AODOGOJFDEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_AODOGOJFDEF_OFFSET))(this);
	}

	::System::Void PNJNICDCCNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_PNJNICDCCNF_OFFSET))(this);
	}

	::System::Void CNPCEFJOCKN(::NCDODLPOLDM FANBIIOCKEJ)
	{
		return ((::System::Void(*)(::PVOID, ::NCDODLPOLDM))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_CNPCEFJOCKN_OFFSET))(this, FANBIIOCKEJ);
	}

	::System::Void NKIIMPHMGLM(::System::Int32 AOCAJDGGKPE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_NKIIMPHMGLM_OFFSET))(this, AOCAJDGGKPE);
	}

	::System::Void LCELFLIKGGN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_LCELFLIKGGN_OFFSET))(this);
	}

	::System::Void IOPOBOPJLGD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_IOPOBOPJLGD_OFFSET))(this);
	}

	::System::Void DMLHBGCJLFJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_DMLHBGCJLFJ_OFFSET))(this);
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_IFHNMAGGFAE_OFFSET))(this);
	}

	::System::Void EBKKPMHIMBE(::System::Int32 ABHBKFJKINO, ::System::Boolean FIPHFGHNNBE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_EBKKPMHIMBE_OFFSET))(this, ABHBKFJKINO, FIPHFGHNNBE);
	}

	::System::Void IMOMELLKIKA(::System::Single KGHNBNOMMJI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_IMOMELLKIKA_OFFSET))(this, KGHNBNOMMJI);
	}

	::System::Void GGACJNDOPOM(::MoleMole::CinemaCameraPosEnum FDAOLKDNALL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CinemaCameraPosEnum))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_GGACJNDOPOM_OFFSET))(this, FDAOLKDNALL);
	}

	::System::Void EPOCECGFNLO(::System::Collections::Generic::List_1<::System::Single>* DMLIBJAENHI, ::System::Collections::Generic::List_1<::System::Int32>* IFFNIKIGEBG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Single>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_EPOCECGFNLO_OFFSET))(this, DMLIBJAENHI, IFFNIKIGEBG);
	}

	::DKEGIJGBNDP* EJDHGEMOJLE(::System::Int32 BIOCCLCHKLJ)
	{
		return ((::DKEGIJGBNDP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_EJDHGEMOJLE_OFFSET))(this, BIOCCLCHKLJ);
	}

	::System::Void EHMEJGJHGCJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_EHMEJGJHGCJ_OFFSET))(this);
	}

	::System::Void IMPAGBMILON()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_IMPAGBMILON_OFFSET))(this);
	}

	::System::Void AHPNHIGCKIL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_AHPNHIGCKIL_OFFSET))(this);
	}

	::System::Void DHFPPBFCEPH(::DKEGIJGBNDP* AOKHOHCJNFJ, ::System::Int32 AOCAJDGGKPE)
	{
		return ((::System::Void(*)(::PVOID, ::DKEGIJGBNDP*, ::System::Int32))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_DHFPPBFCEPH_OFFSET))(this, AOKHOHCJNFJ, AOCAJDGGKPE);
	}

	::System::Void DJDJMIAKGFN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_DJDJMIAKGFN_OFFSET))(this);
	}

	::System::Void IHFICDJOFOD(::System::Boolean HPEAGNOJPPB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_IHFICDJOFOD_OFFSET))(this, HPEAGNOJPPB);
	}

	::System::Void IPAFCHOFJEJ(::System::Int32 BIOCCLCHKLJ, ::System::String* NIINEACEKMG, ::System::Action* KCBDGFHGNJN, ::System::Int32 AOCAJDGGKPE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Action*, ::System::Int32))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_IPAFCHOFJEJ_OFFSET))(this, BIOCCLCHKLJ, NIINEACEKMG, KCBDGFHGNJN, AOCAJDGGKPE);
	}

	::System::Void MBOIEFKAIMN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_MBOIEFKAIMN_OFFSET))(this);
	}

	::System::Void CLAJHLJICJG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_CLAJHLJICJG_OFFSET))(this);
	}

	::System::Void KOEGIFJLEKG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_KOEGIFJLEKG_OFFSET))(this);
	}

	::System::Void ABLOMBBICKK(::System::Collections::Generic::List_1<::ICOLOFOBLBC>* AJEDFBPPMNM, ::System::Boolean MAMNENFLLEG, ::System::Action* DOHBCJHMPKB, ::System::Action* CDPDIMIIOMH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::ICOLOFOBLBC>*, ::System::Boolean, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_ABLOMBBICKK_OFFSET))(this, AJEDFBPPMNM, MAMNENFLLEG, DOHBCJHMPKB, CDPDIMIIOMH);
	}
};
