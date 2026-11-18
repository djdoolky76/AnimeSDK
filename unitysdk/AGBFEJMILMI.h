#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AGBFEJMILMI_CLDIBDJFJJI.h"
#include "unitysdk/MMBCLKDGGPO.h"
#include "unitysdk/MoleMole/Config/DirectionPlayerOnKey.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class ELAKFOCOKCN;
class FBAMLABJMKF;
class NAAFMIMIPCF;
class PNJDGHBEMLK;
namespace MoleMole { class UIHollowChessboard3DModelController; }
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }

#define AGBFEJMILMI_BABKADJCAJL_OFFSET UNITYSDK_OFFSET(0x16476CC0)
#define AGBFEJMILMI_BBMKHADOPOB_OFFSET UNITYSDK_OFFSET(0x16477D30)
#define AGBFEJMILMI_BFKPNGIGAOE_OFFSET UNITYSDK_OFFSET(0x16478380)
#define AGBFEJMILMI_BHIJEEDELDE_OFFSET UNITYSDK_OFFSET(0x16475FE0)
#define AGBFEJMILMI_BJBEMKGKDHJ_OFFSET UNITYSDK_OFFSET(0x16476D20)
#define AGBFEJMILMI_BJMKOFLJFBJ_OFFSET UNITYSDK_OFFSET(0x16477D10)
#define AGBFEJMILMI_BLCEGIMEAAG_OFFSET UNITYSDK_OFFSET(0x164751F0)
#define AGBFEJMILMI_BOEKBPECEMK_OFFSET UNITYSDK_OFFSET(0x16476320)
#define AGBFEJMILMI_BPBHENMMKJO_OFFSET UNITYSDK_OFFSET(0x16476370)
#define AGBFEJMILMI_CCAEEIAOLOH_OFFSET UNITYSDK_OFFSET(0x16476270)
#define AGBFEJMILMI_CFHBPGGKCFN_OFFSET UNITYSDK_OFFSET(0x16474A60)
#define AGBFEJMILMI_CNDFBOOOCKE_OFFSET UNITYSDK_OFFSET(0x16476B00)
#define AGBFEJMILMI_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x164781E0)
#define AGBFEJMILMI_DCEDCONGKEI_OFFSET UNITYSDK_OFFSET(0x16476AF0)
#define AGBFEJMILMI_EEBKKHJEEDF_OFFSET UNITYSDK_OFFSET(0x16477610)
#define AGBFEJMILMI_EMDICBNOCMC_OFFSET UNITYSDK_OFFSET(0x16477DC0)
#define AGBFEJMILMI_FOCJHCGPHJN_OFFSET UNITYSDK_OFFSET(0x16478520)
#define AGBFEJMILMI_GBPAMNOCLJK_OFFSET UNITYSDK_OFFSET(0x16478A70)
#define AGBFEJMILMI_GLLEFPDEIPN_OFFSET UNITYSDK_OFFSET(0x16476CD0)
#define AGBFEJMILMI_GMCLHMOCLNJ_OFFSET UNITYSDK_OFFSET(0x16476070)
#define AGBFEJMILMI_HAIHDHKNJGG_OFFSET UNITYSDK_OFFSET(0x16476500)
#define AGBFEJMILMI_HELBIGACPIA_OFFSET UNITYSDK_OFFSET(0x16478260)
#define AGBFEJMILMI_HFDANHGIDGD_OFFSET UNITYSDK_OFFSET(0x16477D20)
#define AGBFEJMILMI_IOHMOAJJMCO_OFFSET UNITYSDK_OFFSET(0x16474D60)
#define AGBFEJMILMI_IPDJIOFKPGF_OFFSET UNITYSDK_OFFSET(0x164765D0)
#define AGBFEJMILMI_IPNOCLOIDIA_OFFSET UNITYSDK_OFFSET(0x16476080)
#define AGBFEJMILMI_JGBELNFKOKP_OFFSET UNITYSDK_OFFSET(0x164781D0)
#define AGBFEJMILMI_JIKLDCAJDAI_OFFSET UNITYSDK_OFFSET(0x16476970)
#define AGBFEJMILMI_JJHGDOJMKMJ_OFFSET UNITYSDK_OFFSET(0x16475F70)
#define AGBFEJMILMI_JJHLDEKLPHI_OFFSET UNITYSDK_OFFSET(0x164783B0)
#define AGBFEJMILMI_JNENFEELMBP_OFFSET UNITYSDK_OFFSET(0x16478360)
#define AGBFEJMILMI_KDHJMFEEPDB_OFFSET UNITYSDK_OFFSET(0x16478900)
#define AGBFEJMILMI_KEAPMLAGPHJ_OFFSET UNITYSDK_OFFSET(0x16478390)
#define AGBFEJMILMI_LBKHAIAMIBL_OFFSET UNITYSDK_OFFSET(0x16474CE0)
#define AGBFEJMILMI_LHODMAOFCCK_OFFSET UNITYSDK_OFFSET(0x16474A10)
#define AGBFEJMILMI_LKCIBLFFOCG_OFFSET UNITYSDK_OFFSET(0x16475850)
#define AGBFEJMILMI_LLDKJMIBPMN_OFFSET UNITYSDK_OFFSET(0x16475B90)
#define AGBFEJMILMI_LLLEAGEGGDH_OFFSET UNITYSDK_OFFSET(0x16478910)
#define AGBFEJMILMI_LOPKDPJFPIA_OFFSET UNITYSDK_OFFSET(0x164783A0)
#define AGBFEJMILMI_MAIGBIEPDKA_OFFSET UNITYSDK_OFFSET(0x16474F50)
#define AGBFEJMILMI_MDIAFOEDGBO_OFFSET UNITYSDK_OFFSET(0x16475530)
#define AGBFEJMILMI_MHEALBNGHCK_OFFSET UNITYSDK_OFFSET(0x16478280)
#define AGBFEJMILMI_MOMACLGAOCA_OFFSET UNITYSDK_OFFSET(0x16475F80)
#define AGBFEJMILMI_MPNGEMDPFEN_OFFSET UNITYSDK_OFFSET(0x16478370)
#define AGBFEJMILMI_NDDJJGLKHAK_OFFSET UNITYSDK_OFFSET(0x164781C0)
#define AGBFEJMILMI_NFACJBMMAEK_OFFSET UNITYSDK_OFFSET(0x16477040)
#define AGBFEJMILMI_OFONFOCGLAL_OFFSET UNITYSDK_OFFSET(0x164766E0)
#define AGBFEJMILMI_PEBMOOHIIPC_OFFSET UNITYSDK_OFFSET(0x16474FD0)
#define AGBFEJMILMI_PFPAOODDNLH_OFFSET UNITYSDK_OFFSET(0x16474C50)
#define AGBFEJMILMI_PJHFNAHGAIO_OFFSET UNITYSDK_OFFSET(0x16476170)
#define AGBFEJMILMI_PJJGOHLKAJK_OFFSET UNITYSDK_OFFSET(0x16476860)
#define AGBFEJMILMI__CTOR_OFFSET UNITYSDK_OFFSET(0x16474970)

inline static constexpr unsigned int AGBFEJMILMI_TypeDefinitionIndex = 73240;

class AGBFEJMILMI : public ::System::Object
{
public:
	::System::Threading::CancellationTokenSource* IJDAGNPNDCH; // 0x10
	::System::Action_1<::System::Boolean>* _BHOPLOBJBJE_k__BackingField; // 0x18
	::MoleMole::HollowChessboard::HollowEntity* CJLOCBJHFCG; // 0x20
	::System::Action_1<::System::Boolean>* _LAODCGNHIBJ_k__BackingField; // 0x28
	::System::Action* _LPHGEPJIALD_k__BackingField; // 0x30
	::System::Action_1<::System::Boolean>* _OMMCLLMJANG_k__BackingField; // 0x38
	::System::Action_1<::System::Boolean>* _MIGGDBCGMJF_k__BackingField; // 0x40
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* BBDLCJMGMAI; // 0x48
	::MMBCLKDGGPO DBBFANFGNGH; // 0x50
	::System::Boolean OMGGOCABCAM; // 0x60
	::System::Byte _padding0[0x3];
	::MoleMole::HollowChessboard::HollowCell _ADOJJEAODEG_k__BackingField; // 0x64
	::AGBFEJMILMI_CLDIBDJFJJI COAIHMBLBMH; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBFEJMILMI__CTOR_OFFSET))(this);
	}

	::System::Void CFHBPGGKCFN(::MoleMole::HollowChessboard::HollowEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + AGBFEJMILMI_CFHBPGGKCFN_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void IOHMOAJJMCO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBFEJMILMI_IOHMOAJJMCO_OFFSET))(this);
	}

	::System::Void MAIGBIEPDKA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBFEJMILMI_MAIGBIEPDKA_OFFSET))(this);
	}

	::System::Void PEBMOOHIIPC(::ELAKFOCOKCN* FDGACOOJNKF)
	{
		return ((::System::Void(*)(::PVOID, ::ELAKFOCOKCN*))((::PBYTE)hIl2Cpp + AGBFEJMILMI_PEBMOOHIIPC_OFFSET))(this, FDGACOOJNKF);
	}

	::System::Void LHODMAOFCCK(::AGBFEJMILMI_CLDIBDJFJJI BEDLJDMFEOM)
	{
		return ((::System::Void(*)(::PVOID, ::AGBFEJMILMI_CLDIBDJFJJI))((::PBYTE)hIl2Cpp + AGBFEJMILMI_LHODMAOFCCK_OFFSET))(this, BEDLJDMFEOM);
	}

	::System::Boolean JJHGDOJMKMJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBFEJMILMI_JJHGDOJMKMJ_OFFSET))(this);
	}

	::System::Void MOMACLGAOCA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBFEJMILMI_MOMACLGAOCA_OFFSET))(this);
	}

	::System::Void GMCLHMOCLNJ(::System::Action* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + AGBFEJMILMI_GMCLHMOCLNJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void IPNOCLOIDIA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBFEJMILMI_IPNOCLOIDIA_OFFSET))(this);
	}

	::System::Void PJHFNAHGAIO(::MoleMole::HollowChessboard::HollowCell KPMLEMHNCOA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + AGBFEJMILMI_PJHFNAHGAIO_OFFSET))(this, KPMLEMHNCOA);
	}

	::System::Void CCAEEIAOLOH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBFEJMILMI_CCAEEIAOLOH_OFFSET))(this);
	}

	::System::Void BOEKBPECEMK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBFEJMILMI_BOEKBPECEMK_OFFSET))(this);
	}

	static ::MoleMole::Config::DirectionPlayerOnKey HAIHDHKNJGG(::FBAMLABJMKF* AKCCBOJKOJL, ::MoleMole::HollowChessboard::HollowCell HEFNDKCAHLF)
	{
		return ((::MoleMole::Config::DirectionPlayerOnKey(*)(::FBAMLABJMKF*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + AGBFEJMILMI_HAIHDHKNJGG_OFFSET))(AKCCBOJKOJL, HEFNDKCAHLF);
	}

	::System::Void LLDKJMIBPMN(::NAAFMIMIPCF* FHHHKKGLDGG, ::FBAMLABJMKF* AKCCBOJKOJL, ::System::Boolean DICAEGNDPBH)
	{
		return ((::System::Void(*)(::PVOID, ::NAAFMIMIPCF*, ::FBAMLABJMKF*, ::System::Boolean))((::PBYTE)hIl2Cpp + AGBFEJMILMI_LLDKJMIBPMN_OFFSET))(this, FHHHKKGLDGG, AKCCBOJKOJL, DICAEGNDPBH);
	}

	::System::Void DCEDCONGKEI(::System::Action_1<::System::Boolean>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + AGBFEJMILMI_DCEDCONGKEI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void CNDFBOOOCKE(::MoleMole::HollowChessboard::HollowCell ECHBPPIEIKI, ::MoleMole::HollowChessboard::HollowCell EAAAGPPBKML, ::MoleMole::HollowChessboard::HollowCell PFBGAKLFGPI, ::MoleMole::HollowChessboard::HollowCell BBGKCBKBPED)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + AGBFEJMILMI_CNDFBOOOCKE_OFFSET))(this, ECHBPPIEIKI, EAAAGPPBKML, PFBGAKLFGPI, BBGKCBKBPED);
	}

	::System::Action_1<::System::Boolean>* BABKADJCAJL()
	{
		return ((::System::Action_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBFEJMILMI_BABKADJCAJL_OFFSET))(this);
	}

	::System::Void GLLEFPDEIPN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBFEJMILMI_GLLEFPDEIPN_OFFSET))(this);
	}

	::System::Void PFPAOODDNLH(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AGBFEJMILMI_PFPAOODDNLH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void LBKHAIAMIBL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBFEJMILMI_LBKHAIAMIBL_OFFSET))(this);
	}

	::System::Void BJBEMKGKDHJ(::NAAFMIMIPCF* FHHHKKGLDGG, ::FBAMLABJMKF* AKCCBOJKOJL, ::System::Action_4<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>* OPKPFPLFNIN, ::System::Action* FMNCIOGJFAH)
	{
		return ((::System::Void(*)(::PVOID, ::NAAFMIMIPCF*, ::FBAMLABJMKF*, ::System::Action_4<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>*, ::System::Action*))((::PBYTE)hIl2Cpp + AGBFEJMILMI_BJBEMKGKDHJ_OFFSET))(this, FHHHKKGLDGG, AKCCBOJKOJL, OPKPFPLFNIN, FMNCIOGJFAH);
	}

	::System::Void LKCIBLFFOCG(::NAAFMIMIPCF* FHHHKKGLDGG, ::FBAMLABJMKF* AKCCBOJKOJL)
	{
		return ((::System::Void(*)(::PVOID, ::NAAFMIMIPCF*, ::FBAMLABJMKF*))((::PBYTE)hIl2Cpp + AGBFEJMILMI_LKCIBLFFOCG_OFFSET))(this, FHHHKKGLDGG, AKCCBOJKOJL);
	}

	::System::Void NFACJBMMAEK(::FBAMLABJMKF* AKCCBOJKOJL, ::MoleMole::HollowChessboard::HollowCell KCCBONENAKJ, ::MoleMole::HollowChessboard::HollowCell PFBGAKLFGPI)
	{
		return ((::System::Void(*)(::PVOID, ::FBAMLABJMKF*, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + AGBFEJMILMI_NFACJBMMAEK_OFFSET))(this, AKCCBOJKOJL, KCCBONENAKJ, PFBGAKLFGPI);
	}

	::System::Action_1<::System::Boolean>* BJMKOFLJFBJ()
	{
		return ((::System::Action_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBFEJMILMI_BJMKOFLJFBJ_OFFSET))(this);
	}

	::System::Void HFDANHGIDGD(::System::Action_1<::System::Boolean>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + AGBFEJMILMI_HFDANHGIDGD_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void MDIAFOEDGBO(::NAAFMIMIPCF* FHHHKKGLDGG, ::FBAMLABJMKF* AKCCBOJKOJL, ::System::Boolean DFBLPMKMNGN)
	{
		return ((::System::Void(*)(::PVOID, ::NAAFMIMIPCF*, ::FBAMLABJMKF*, ::System::Boolean))((::PBYTE)hIl2Cpp + AGBFEJMILMI_MDIAFOEDGBO_OFFSET))(this, FHHHKKGLDGG, AKCCBOJKOJL, DFBLPMKMNGN);
	}

	::System::Action_1<::System::Boolean>* NDDJJGLKHAK()
	{
		return ((::System::Action_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBFEJMILMI_NDDJJGLKHAK_OFFSET))(this);
	}

	::System::Void JGBELNFKOKP(::System::Action_1<::System::Boolean>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + AGBFEJMILMI_JGBELNFKOKP_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::AGBFEJMILMI* COKNIICCODC()
	{
		return ((::AGBFEJMILMI*(*)())((::PBYTE)hIl2Cpp + AGBFEJMILMI_COKNIICCODC_OFFSET))();
	}

	::MoleMole::HollowChessboard::HollowCell HELBIGACPIA()
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBFEJMILMI_HELBIGACPIA_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask MHEALBNGHCK(::NAAFMIMIPCF* FHHHKKGLDGG, ::FBAMLABJMKF* AKCCBOJKOJL, ::System::Threading::CancellationToken AMIDHEAIANO)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::NAAFMIMIPCF*, ::FBAMLABJMKF*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + AGBFEJMILMI_MHEALBNGHCK_OFFSET))(this, FHHHKKGLDGG, AKCCBOJKOJL, AMIDHEAIANO);
	}

	::System::Boolean JNENFEELMBP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBFEJMILMI_JNENFEELMBP_OFFSET))(this);
	}

	::System::Void BPBHENMMKJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBFEJMILMI_BPBHENMMKJO_OFFSET))(this);
	}

	::System::Boolean MPNGEMDPFEN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBFEJMILMI_MPNGEMDPFEN_OFFSET))(this);
	}

	::System::Void PJJGOHLKAJK(::NAAFMIMIPCF* FHHHKKGLDGG, ::FBAMLABJMKF* AKCCBOJKOJL)
	{
		return ((::System::Void(*)(::PVOID, ::NAAFMIMIPCF*, ::FBAMLABJMKF*))((::PBYTE)hIl2Cpp + AGBFEJMILMI_PJJGOHLKAJK_OFFSET))(this, FHHHKKGLDGG, AKCCBOJKOJL);
	}

	static ::PNJDGHBEMLK* BBMKHADOPOB(::NAAFMIMIPCF* FHHHKKGLDGG, ::FBAMLABJMKF* AKCCBOJKOJL)
	{
		return ((::PNJDGHBEMLK*(*)(::NAAFMIMIPCF*, ::FBAMLABJMKF*))((::PBYTE)hIl2Cpp + AGBFEJMILMI_BBMKHADOPOB_OFFSET))(FHHHKKGLDGG, AKCCBOJKOJL);
	}

	::System::Void BFKPNGIGAOE(::System::Action_1<::System::Boolean>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + AGBFEJMILMI_BFKPNGIGAOE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Action* KEAPMLAGPHJ()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBFEJMILMI_KEAPMLAGPHJ_OFFSET))(this);
	}

	::System::Action_1<::System::Boolean>* LOPKDPJFPIA()
	{
		return ((::System::Action_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBFEJMILMI_LOPKDPJFPIA_OFFSET))(this);
	}

	static ::System::Boolean IPDJIOFKPGF(::MoleMole::HollowChessboard::HollowCell ECHBPPIEIKI, ::FBAMLABJMKF* AKCCBOJKOJL)
	{
		return ((::System::Boolean(*)(::MoleMole::HollowChessboard::HollowCell, ::FBAMLABJMKF*))((::PBYTE)hIl2Cpp + AGBFEJMILMI_IPDJIOFKPGF_OFFSET))(ECHBPPIEIKI, AKCCBOJKOJL);
	}

	::Cysharp::Threading::Tasks::UniTask JJHLDEKLPHI(::NAAFMIMIPCF* FHHHKKGLDGG, ::FBAMLABJMKF* AKCCBOJKOJL, ::System::Threading::CancellationToken AMIDHEAIANO)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::NAAFMIMIPCF*, ::FBAMLABJMKF*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + AGBFEJMILMI_JJHLDEKLPHI_OFFSET))(this, FHHHKKGLDGG, AKCCBOJKOJL, AMIDHEAIANO);
	}

	static ::System::Boolean BLCEGIMEAAG(::NAAFMIMIPCF* FHHHKKGLDGG, ::FBAMLABJMKF* AKCCBOJKOJL)
	{
		return ((::System::Boolean(*)(::NAAFMIMIPCF*, ::FBAMLABJMKF*))((::PBYTE)hIl2Cpp + AGBFEJMILMI_BLCEGIMEAAG_OFFSET))(FHHHKKGLDGG, AKCCBOJKOJL);
	}

	::System::Void JIKLDCAJDAI(::NAAFMIMIPCF* FHHHKKGLDGG, ::FBAMLABJMKF* AKCCBOJKOJL)
	{
		return ((::System::Void(*)(::PVOID, ::NAAFMIMIPCF*, ::FBAMLABJMKF*))((::PBYTE)hIl2Cpp + AGBFEJMILMI_JIKLDCAJDAI_OFFSET))(this, FHHHKKGLDGG, AKCCBOJKOJL);
	}

	::System::Void BHIJEEDELDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBFEJMILMI_BHIJEEDELDE_OFFSET))(this);
	}

	::System::Void OFONFOCGLAL(::NAAFMIMIPCF* FHHHKKGLDGG, ::FBAMLABJMKF* AKCCBOJKOJL)
	{
		return ((::System::Void(*)(::PVOID, ::NAAFMIMIPCF*, ::FBAMLABJMKF*))((::PBYTE)hIl2Cpp + AGBFEJMILMI_OFONFOCGLAL_OFFSET))(this, FHHHKKGLDGG, AKCCBOJKOJL);
	}

	::MMBCLKDGGPO FOCJHCGPHJN(::FBAMLABJMKF* AKCCBOJKOJL, ::NAAFMIMIPCF* FHHHKKGLDGG, ::System::Action* IDGHBANKGJH)
	{
		return ((::MMBCLKDGGPO(*)(::PVOID, ::FBAMLABJMKF*, ::NAAFMIMIPCF*, ::System::Action*))((::PBYTE)hIl2Cpp + AGBFEJMILMI_FOCJHCGPHJN_OFFSET))(this, AKCCBOJKOJL, FHHHKKGLDGG, IDGHBANKGJH);
	}

	::System::Void KDHJMFEEPDB(::MoleMole::HollowChessboard::HollowCell EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + AGBFEJMILMI_KDHJMFEEPDB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EMDICBNOCMC(::NAAFMIMIPCF* FHHHKKGLDGG, ::FBAMLABJMKF* AKCCBOJKOJL, ::System::Action_4<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>* OPKPFPLFNIN, ::System::Action* FMNCIOGJFAH, ::MoleMole::HollowChessboard::HollowCell OMBPPHCDADP)
	{
		return ((::System::Void(*)(::PVOID, ::NAAFMIMIPCF*, ::FBAMLABJMKF*, ::System::Action_4<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>*, ::System::Action*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + AGBFEJMILMI_EMDICBNOCMC_OFFSET))(this, FHHHKKGLDGG, AKCCBOJKOJL, OPKPFPLFNIN, FMNCIOGJFAH, OMBPPHCDADP);
	}

	static ::System::String* LLLEAGEGGDH(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* CJBJONJDOLI)
	{
		return ((::System::String*(*)(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*))((::PBYTE)hIl2Cpp + AGBFEJMILMI_LLLEAGEGGDH_OFFSET))(CJBJONJDOLI);
	}

	static ::System::Void EEBKKHJEEDF(::MoleMole::UIHollowChessboard3DModelController* NGICCNMINJC, ::MoleMole::HollowChessboard::HollowCell ECHBPPIEIKI)
	{
		return ((::System::Void(*)(::MoleMole::UIHollowChessboard3DModelController*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + AGBFEJMILMI_EEBKKHJEEDF_OFFSET))(NGICCNMINJC, ECHBPPIEIKI);
	}

	::Cysharp::Threading::Tasks::UniTask GBPAMNOCLJK(::NAAFMIMIPCF* FHHHKKGLDGG, ::FBAMLABJMKF* AKCCBOJKOJL, ::System::Threading::CancellationToken AMIDHEAIANO)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::NAAFMIMIPCF*, ::FBAMLABJMKF*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + AGBFEJMILMI_GBPAMNOCLJK_OFFSET))(this, FHHHKKGLDGG, AKCCBOJKOJL, AMIDHEAIANO);
	}
};
