#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HCMEJOFOJDM_1.h"
#include "unitysdk/IAAKNLPKOFK.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessPieceSizeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/EAOGLMKGMGE.h"
#include "unitysdk/IABCBJMMELB_JAPDPLMBEDL.h"
#include "unitysdk/LLKPMNAMCIM.h"
#include "unitysdk/UnityEngine/Rect.h"

class AIKGHHJKNCE;
class AJIDPKABBFD;
class DAILNGGFHFP;
class DBBFBJOMKOM;
class FBAMLABJMKF;
class HPMHPEBAFGK;
class IABCBJMMELB_OBAAGHPBFDE;
class JOGFCKILHMN;
class KLFOBDFJFJE;
class MCFPPILFGDB;
namespace MoleMole::Config { class ConfigHollowChessboard; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
template <typename T> class PDGECHOAOLE_1;

#define IABCBJMMELB_AGPGIKFFMJD_1_OFFSET UNITYSDK_OFFSET(0x147124F0)
#define IABCBJMMELB_AGPGIKFFMJD_OFFSET UNITYSDK_OFFSET(0x14712420)
#define IABCBJMMELB_AMGHDBNAHNB_OFFSET UNITYSDK_OFFSET(0x16087410)
#define IABCBJMMELB_BABFFPIPCIF_OFFSET UNITYSDK_OFFSET(0x14712180)
#define IABCBJMMELB_BIOEHNHCKJM_OFFSET UNITYSDK_OFFSET(0x16088340)
#define IABCBJMMELB_CDILPLHDBCP_OFFSET UNITYSDK_OFFSET(0x147133D0)
#define IABCBJMMELB_CDLMJGODOCD_1_OFFSET UNITYSDK_OFFSET(0x16088140)
#define IABCBJMMELB_CDLMJGODOCD_OFFSET UNITYSDK_OFFSET(0x14711E50)
#define IABCBJMMELB_CHKPMBLDMCN_1_OFFSET UNITYSDK_OFFSET(0x16086240)
#define IABCBJMMELB_CHKPMBLDMCN_OFFSET UNITYSDK_OFFSET(0x16086090)
#define IABCBJMMELB_CJOHPDKIDGJ_OFFSET UNITYSDK_OFFSET(0x16086E80)
#define IABCBJMMELB_CNGDFACIBGK_OFFSET UNITYSDK_OFFSET(0x16086440)
#define IABCBJMMELB_CNIGGKPAJKA_OFFSET UNITYSDK_OFFSET(0x16087420)
#define IABCBJMMELB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x147111A0)
#define IABCBJMMELB_DNHMMLDNDJH_OFFSET UNITYSDK_OFFSET(0x14711520)
#define IABCBJMMELB_EFMDGEFOOKM_OFFSET UNITYSDK_OFFSET(0x16087E00)
#define IABCBJMMELB_ENJGKEJPJJG_OFFSET UNITYSDK_OFFSET(0x16087B70)
#define IABCBJMMELB_FGBOEOPFLBB_OFFSET UNITYSDK_OFFSET(0x16085CE0)
#define IABCBJMMELB_FKDOAPBNOMK_OFFSET UNITYSDK_OFFSET(0x16088A90)
#define IABCBJMMELB_FKFDKLMBIFP_OFFSET UNITYSDK_OFFSET(0x16087080)
#define IABCBJMMELB_FLPBEBFKCLH_OFFSET UNITYSDK_OFFSET(0x14713460)
#define IABCBJMMELB_GBDMIBBBGHI_OFFSET UNITYSDK_OFFSET(0x160886A0)
#define IABCBJMMELB_GDCNPPKGGBO_OFFSET UNITYSDK_OFFSET(0x16088B30)
#define IABCBJMMELB_GEDCDJLDDDA_OFFSET UNITYSDK_OFFSET(0x14711C60)
#define IABCBJMMELB_GFONBPOPDAO_OFFSET UNITYSDK_OFFSET(0x147114A0)
#define IABCBJMMELB_GKPKFKJFBAM_OFFSET UNITYSDK_OFFSET(0x147131F0)
#define IABCBJMMELB_GLOFFJAALNP_OFFSET UNITYSDK_OFFSET(0x16087780)
#define IABCBJMMELB_GPAAHBFNOCC_OFFSET UNITYSDK_OFFSET(0x14711B90)
#define IABCBJMMELB_HIEHMHKDEJI_OFFSET UNITYSDK_OFFSET(0x14713620)
#define IABCBJMMELB_HKIMEGDGPOM_OFFSET UNITYSDK_OFFSET(0x14711350)
#define IABCBJMMELB_HMCPJJMFNFO_OFFSET UNITYSDK_OFFSET(0x160864C0)
#define IABCBJMMELB_JEBBJDKFNJA_OFFSET UNITYSDK_OFFSET(0x16086780)
#define IABCBJMMELB_JJCDDKPPHHH_OFFSET UNITYSDK_OFFSET(0x147113A0)
#define IABCBJMMELB_JKLJOAPBAOP_OFFSET UNITYSDK_OFFSET(0x14711F60)
#define IABCBJMMELB_JPDNDEGBLIN_OFFSET UNITYSDK_OFFSET(0x14713970)
#define IABCBJMMELB_KDFFGCKDFFC_OFFSET UNITYSDK_OFFSET(0x14712140)
#define IABCBJMMELB_KHEKELNADJH_OFFSET UNITYSDK_OFFSET(0x16086E00)
#define IABCBJMMELB_LMABJDPMEDK_OFFSET UNITYSDK_OFFSET(0x16085860)
#define IABCBJMMELB_MEPMENKAJHD_OFFSET UNITYSDK_OFFSET(0x147134E0)
#define IABCBJMMELB_MHMFOAMPMFA_OFFSET UNITYSDK_OFFSET(0x14711DC0)
#define IABCBJMMELB_MHOMIEAKPCL_OFFSET UNITYSDK_OFFSET(0x160867E0)
#define IABCBJMMELB_MLLBBOIHODI_OFFSET UNITYSDK_OFFSET(0x147121E0)
#define IABCBJMMELB_MMLPOMABPDA_OFFSET UNITYSDK_OFFSET(0x14711E30)
#define IABCBJMMELB_NJNOMHLHHLB_OFFSET UNITYSDK_OFFSET(0x16086390)
#define IABCBJMMELB_NPAJACOEFPG_OFFSET UNITYSDK_OFFSET(0x16086A20)
#define IABCBJMMELB_OHBEIBNMLDP_OFFSET UNITYSDK_OFFSET(0x14712160)
#define IABCBJMMELB_OHGOILBKECC_OFFSET UNITYSDK_OFFSET(0x147132F0)
#define IABCBJMMELB_OIILEHDLIOI_OFFSET UNITYSDK_OFFSET(0x147134D0)
#define IABCBJMMELB_OMGADFMBOEH_OFFSET UNITYSDK_OFFSET(0x14712400)
#define IABCBJMMELB_PAHDPFCCDFL_OFFSET UNITYSDK_OFFSET(0x16087070)
#define IABCBJMMELB_PHJEEIKFCGM_OFFSET UNITYSDK_OFFSET(0x16087D80)
#define IABCBJMMELB_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x16088620)
#define IABCBJMMELB_POCIHLGNLJK_OFFSET UNITYSDK_OFFSET(0x160883D0)
#define IABCBJMMELB__CTOR_OFFSET UNITYSDK_OFFSET(0x14710EA0)

inline static constexpr unsigned int IABCBJMMELB_TypeDefinitionIndex = 79524;

class IABCBJMMELB : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigHollowChessboard** StaticGet_NGFHKHLKEHD()
	{
		return (::MoleMole::Config::ConfigHollowChessboard**)Il2CppClass::FromTypeDefinitionIndex(IABCBJMMELB_TypeDefinitionIndex)->GetStaticField(0x3B200);
	}
	static ::IABCBJMMELB_OBAAGHPBFDE** StaticGet_HDFBDHGMNKN()
	{
		return (::IABCBJMMELB_OBAAGHPBFDE**)Il2CppClass::FromTypeDefinitionIndex(IABCBJMMELB_TypeDefinitionIndex)->GetStaticField(0x3B208);
	}
	// static const ::System::Int32 OGHEADNOAGN = 0x1E; // 0x0
	::AJIDPKABBFD* GMIGNKEBGDJ; // 0x10
	::DAILNGGFHFP* MJEFCFCFCKO; // 0x18
	::System::Action_1<::AIKGHHJKNCE*>* MKMIMJGAKBK; // 0x20
	::System::Action* GCMPIJNAAHC; // 0x28
	::System::Action_1<::AIKGHHJKNCE*>* JJPFKDDPPCH; // 0x30
	::System::Action_1<::AIKGHHJKNCE*>* HOPLHGCGLDJ; // 0x38
	::FBAMLABJMKF* GGDKANKKJLP; // 0x40
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::HCMEJOFOJDM_1<::IAAKNLPKOFK>>* PDGMIGPEIKP; // 0x48
	::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>* KMBNNIEKBEF; // 0x50
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* GMJGGOJAGNH; // 0x58
	::HPMHPEBAFGK* NMKFMDPIKPH; // 0x60
	::KLFOBDFJFJE* CFFFIJEJGJE; // 0x68
	::System::Action_1<::MoleMole::HollowChessboard::HollowCell>* LIAFEDAOPJO; // 0x70
	::DBBFBJOMKOM* LKNBBLMNAIA; // 0x78
	::PDGECHOAOLE_1<::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*>* GMJKAGIKOBP; // 0x80
	::JOGFCKILHMN* LKBHDOMMPID; // 0x88
	::System::Single MBPOKBODAGB; // 0x90
	::System::Int32 JLODFKBALNG; // 0x94
	::UnityEngine::Vector3 _IIMCGGPHLDM_k__BackingField; // 0x98
	::UnityEngine::Matrix4x4 FIMJOFEEAPK; // 0xA4
	::System::Boolean JKABEBEDACF; // 0xE4
	::System::Boolean _EJKMMMFJLCN_k__BackingField; // 0xE5
	::System::Byte _padding0[0x2];
	::UnityEngine::Vector3 _CLDFMABGFAN_k__BackingField; // 0xE8

	::System::Void _ctor(::MoleMole::Config::ConfigHollowChessboard* LCFNEAHDMHH, ::HPMHPEBAFGK* ADLFDFKAEOO, ::AJIDPKABBFD* FGJGBKAHHNA, ::KLFOBDFJFJE* KONLMDBCDCK, ::JOGFCKILHMN* FOGHNGINAHA, ::DBBFBJOMKOM* EJHCCMECEPL, ::FBAMLABJMKF* IHHHIDMPIFD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard*, ::HPMHPEBAFGK*, ::AJIDPKABBFD*, ::KLFOBDFJFJE*, ::JOGFCKILHMN*, ::DBBFBJOMKOM*, ::FBAMLABJMKF*))((::PBYTE)hIl2Cpp + IABCBJMMELB__CTOR_OFFSET))(this, LCFNEAHDMHH, ADLFDFKAEOO, FGJGBKAHHNA, KONLMDBCDCK, FOGHNGINAHA, EJHCCMECEPL, IHHHIDMPIFD);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IABCBJMMELB_DISPOSE_OFFSET))(this);
	}

	::System::Boolean HKIMEGDGPOM(::AIKGHHJKNCE* JNDDJMAHNAI)
	{
		return ((::System::Boolean(*)(::PVOID, ::AIKGHHJKNCE*))((::PBYTE)hIl2Cpp + IABCBJMMELB_HKIMEGDGPOM_OFFSET))(this, JNDDJMAHNAI);
	}

	::System::Boolean JJCDDKPPHHH(::AIKGHHJKNCE* CDKCJAKODPN)
	{
		return ((::System::Boolean(*)(::PVOID, ::AIKGHHJKNCE*))((::PBYTE)hIl2Cpp + IABCBJMMELB_JJCDDKPPHHH_OFFSET))(this, CDKCJAKODPN);
	}

	::System::Void GFONBPOPDAO(::AIKGHHJKNCE* CENDLIKDNJA)
	{
		return ((::System::Void(*)(::PVOID, ::AIKGHHJKNCE*))((::PBYTE)hIl2Cpp + IABCBJMMELB_GFONBPOPDAO_OFFSET))(this, CENDLIKDNJA);
	}

	::System::Void DNHMMLDNDJH(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IABCBJMMELB_DNHMMLDNDJH_OFFSET))(this, PMNLNNGEIFM);
	}

	static ::System::Void GEDCDJLDDDA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IABCBJMMELB_GEDCDJLDDDA_OFFSET))();
	}

	::System::Boolean MHMFOAMPMFA(::AIKGHHJKNCE* CENDLIKDNJA)
	{
		return ((::System::Boolean(*)(::PVOID, ::AIKGHHJKNCE*))((::PBYTE)hIl2Cpp + IABCBJMMELB_MHMFOAMPMFA_OFFSET))(this, CENDLIKDNJA);
	}

	::UnityEngine::Vector3 MMLPOMABPDA()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + IABCBJMMELB_MMLPOMABPDA_OFFSET))(this);
	}

	::System::Void CDLMJGODOCD(::AIKGHHJKNCE* CDKCJAKODPN, ::System::Boolean GHKOHFJONBO)
	{
		return ((::System::Void(*)(::PVOID, ::AIKGHHJKNCE*, ::System::Boolean))((::PBYTE)hIl2Cpp + IABCBJMMELB_CDLMJGODOCD_OFFSET))(this, CDKCJAKODPN, GHKOHFJONBO);
	}

	::System::Void KDFFGCKDFFC(::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IABCBJMMELB_KDFFGCKDFFC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void OHBEIBNMLDP(::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IABCBJMMELB_OHBEIBNMLDP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void JKLJOAPBAOP(::AIKGHHJKNCE* CENDLIKDNJA)
	{
		return ((::System::Void(*)(::PVOID, ::AIKGHHJKNCE*))((::PBYTE)hIl2Cpp + IABCBJMMELB_JKLJOAPBAOP_OFFSET))(this, CENDLIKDNJA);
	}

	::System::Void BABFFPIPCIF(::AIKGHHJKNCE* CDKCJAKODPN)
	{
		return ((::System::Void(*)(::PVOID, ::AIKGHHJKNCE*))((::PBYTE)hIl2Cpp + IABCBJMMELB_BABFFPIPCIF_OFFSET))(this, CDKCJAKODPN);
	}

	::System::Void MLLBBOIHODI(::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM, ::IAAKNLPKOFK FKMHMOELCIO, ::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::IAAKNLPKOFK, ::System::Boolean))((::PBYTE)hIl2Cpp + IABCBJMMELB_MLLBBOIHODI_OFFSET))(this, EKPEBNCLJPM, FKMHMOELCIO, EGEGIMGMJHN);
	}

	::UnityEngine::Vector3 OMGADFMBOEH()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + IABCBJMMELB_OMGADFMBOEH_OFFSET))(this);
	}

	::System::Boolean AGPGIKFFMJD(::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + IABCBJMMELB_AGPGIKFFMJD_OFFSET))(this, EKPEBNCLJPM);
	}

	::UnityEngine::Transform* GKPKFKJFBAM(::AIKGHHJKNCE* CENDLIKDNJA)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::AIKGHHJKNCE*))((::PBYTE)hIl2Cpp + IABCBJMMELB_GKPKFKJFBAM_OFFSET))(this, CENDLIKDNJA);
	}

	::MoleMole::HollowChessboard::HollowCell OHGOILBKECC(::UnityEngine::Vector3 ILLAACIBJNC)
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IABCBJMMELB_OHGOILBKECC_OFFSET))(this, ILLAACIBJNC);
	}

	::System::Void CDILPLHDBCP(::MoleMole::HollowChessboard::HollowCell KPMLEMHNCOA, ::IABCBJMMELB_JAPDPLMBEDL& param_1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::IABCBJMMELB_JAPDPLMBEDL&))((::PBYTE)hIl2Cpp + IABCBJMMELB_CDILPLHDBCP_OFFSET))(this, KPMLEMHNCOA, param_1);
	}

	::System::Void FLPBEBFKCLH(::MoleMole::HollowChessPieceSizeType OBNIAHNMHPF, ::System::Int32 JHFKDGBCOBA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessPieceSizeType, ::System::Int32))((::PBYTE)hIl2Cpp + IABCBJMMELB_FLPBEBFKCLH_OFFSET))(this, OBNIAHNMHPF, JHFKDGBCOBA);
	}

	::System::Void OIILEHDLIOI(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IABCBJMMELB_OIILEHDLIOI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void MEPMENKAJHD(::System::Single PMNLNNGEIFM, ::System::Single BEKLCLFIDKF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IABCBJMMELB_MEPMENKAJHD_OFFSET))(this, PMNLNNGEIFM, BEKLCLFIDKF);
	}

	::System::Void GPAAHBFNOCC(::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM, ::System::Boolean HJLPFEMJKBF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::System::Boolean))((::PBYTE)hIl2Cpp + IABCBJMMELB_GPAAHBFNOCC_OFFSET))(this, EKPEBNCLJPM, HJLPFEMJKBF);
	}

	::LLKPMNAMCIM HIEHMHKDEJI(::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM, ::MoleMole::HollowChessPieceSizeType OKEGLNKFJEO)
	{
		return ((::LLKPMNAMCIM(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessPieceSizeType))((::PBYTE)hIl2Cpp + IABCBJMMELB_HIEHMHKDEJI_OFFSET))(this, EKPEBNCLJPM, OKEGLNKFJEO);
	}

	::System::Boolean JPDNDEGBLIN(::AIKGHHJKNCE* CDKCJAKODPN)
	{
		return ((::System::Boolean(*)(::PVOID, ::AIKGHHJKNCE*))((::PBYTE)hIl2Cpp + IABCBJMMELB_JPDNDEGBLIN_OFFSET))(this, CDKCJAKODPN);
	}

	::System::Boolean AGPGIKFFMJD_1(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* GDIJDKDIAAD)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*))((::PBYTE)hIl2Cpp + IABCBJMMELB_AGPGIKFFMJD_1_OFFSET))(this, GDIJDKDIAAD);
	}

	::System::Void LMABJDPMEDK(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IABCBJMMELB_LMABJDPMEDK_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void CHKPMBLDMCN(::AIKGHHJKNCE* CENDLIKDNJA)
	{
		return ((::System::Void(*)(::PVOID, ::AIKGHHJKNCE*))((::PBYTE)hIl2Cpp + IABCBJMMELB_CHKPMBLDMCN_OFFSET))(this, CENDLIKDNJA);
	}

	::AJIDPKABBFD* NJNOMHLHHLB()
	{
		return ((::AJIDPKABBFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + IABCBJMMELB_NJNOMHLHHLB_OFFSET))(this);
	}

	::System::Void CNGDFACIBGK(::System::Action* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IABCBJMMELB_CNGDFACIBGK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void HMCPJJMFNFO(::AIKGHHJKNCE* CENDLIKDNJA)
	{
		return ((::System::Void(*)(::PVOID, ::AIKGHHJKNCE*))((::PBYTE)hIl2Cpp + IABCBJMMELB_HMCPJJMFNFO_OFFSET))(this, CENDLIKDNJA);
	}

	::System::Void JEBBJDKFNJA(::AIKGHHJKNCE* CDKCJAKODPN)
	{
		return ((::System::Void(*)(::PVOID, ::AIKGHHJKNCE*))((::PBYTE)hIl2Cpp + IABCBJMMELB_JEBBJDKFNJA_OFFSET))(this, CDKCJAKODPN);
	}

	::System::Void MHOMIEAKPCL(::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + IABCBJMMELB_MHOMIEAKPCL_OFFSET))(this, EKPEBNCLJPM);
	}

	::MCFPPILFGDB* NPAJACOEFPG(::AIKGHHJKNCE* CENDLIKDNJA)
	{
		return ((::MCFPPILFGDB*(*)(::PVOID, ::AIKGHHJKNCE*))((::PBYTE)hIl2Cpp + IABCBJMMELB_NPAJACOEFPG_OFFSET))(this, CENDLIKDNJA);
	}

	::System::Void KHEKELNADJH(::System::Action* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IABCBJMMELB_KHEKELNADJH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void CJOHPDKIDGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IABCBJMMELB_CJOHPDKIDGJ_OFFSET))(this);
	}

	::AJIDPKABBFD* PAHDPFCCDFL()
	{
		return ((::AJIDPKABBFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + IABCBJMMELB_PAHDPFCCDFL_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>* FGBOEOPFLBB()
	{
		return ((::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IABCBJMMELB_FGBOEOPFLBB_OFFSET))(this);
	}

	::JOGFCKILHMN* AMGHDBNAHNB()
	{
		return ((::JOGFCKILHMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + IABCBJMMELB_AMGHDBNAHNB_OFFSET))(this);
	}

	::System::Void CNIGGKPAJKA(::UnityEngine::Transform* IAPKABMDJNF)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + IABCBJMMELB_CNIGGKPAJKA_OFFSET))(this, IAPKABMDJNF);
	}

	::System::Void GLOFFJAALNP(::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM, ::EAOGLMKGMGE JIDNKHKCFLI, ::IABCBJMMELB_JAPDPLMBEDL& param_2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::EAOGLMKGMGE, ::IABCBJMMELB_JAPDPLMBEDL&))((::PBYTE)hIl2Cpp + IABCBJMMELB_GLOFFJAALNP_OFFSET))(this, EKPEBNCLJPM, JIDNKHKCFLI, param_2);
	}

	::UnityEngine::Rect FKFDKLMBIFP()
	{
		return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + IABCBJMMELB_FKFDKLMBIFP_OFFSET))(this);
	}

	::System::Void ENJGKEJPJJG(::System::Single PMNLNNGEIFM, ::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + IABCBJMMELB_ENJGKEJPJJG_OFFSET))(this, PMNLNNGEIFM, EKPEBNCLJPM);
	}

	::System::Void PHJEEIKFCGM(::AIKGHHJKNCE* CENDLIKDNJA, ::MCFPPILFGDB* LHPFMGBDFPN)
	{
		return ((::System::Void(*)(::PVOID, ::AIKGHHJKNCE*, ::MCFPPILFGDB*))((::PBYTE)hIl2Cpp + IABCBJMMELB_PHJEEIKFCGM_OFFSET))(this, CENDLIKDNJA, LHPFMGBDFPN);
	}

	::System::Void EFMDGEFOOKM(::MoleMole::HollowChessboard::HollowCell NLCIHJLFENJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + IABCBJMMELB_EFMDGEFOOKM_OFFSET))(this, NLCIHJLFENJ);
	}

	::System::Void CDLMJGODOCD_1(::AIKGHHJKNCE* CDKCJAKODPN)
	{
		return ((::System::Void(*)(::PVOID, ::AIKGHHJKNCE*))((::PBYTE)hIl2Cpp + IABCBJMMELB_CDLMJGODOCD_1_OFFSET))(this, CDKCJAKODPN);
	}

	::System::Void BIOEHNHCKJM(::System::Single PMNLNNGEIFM, ::System::Single BEKLCLFIDKF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IABCBJMMELB_BIOEHNHCKJM_OFFSET))(this, PMNLNNGEIFM, BEKLCLFIDKF);
	}

	::System::Void POCIHLGNLJK(::System::Collections::Generic::List_1<::AIKGHHJKNCE*>* LEAGLGCOMMA, ::System::Collections::Generic::List_1<::AIKGHHJKNCE*>* DEIHBKGEIAL, ::System::Action_1<::AIKGHHJKNCE*>* AOKHOHCJNFJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::AIKGHHJKNCE*>*, ::System::Collections::Generic::List_1<::AIKGHHJKNCE*>*, ::System::Action_1<::AIKGHHJKNCE*>*))((::PBYTE)hIl2Cpp + IABCBJMMELB_POCIHLGNLJK_OFFSET))(this, LEAGLGCOMMA, DEIHBKGEIAL, AOKHOHCJNFJ);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM, ::System::Single BEKLCLFIDKF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IABCBJMMELB_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM, BEKLCLFIDKF);
	}

	static ::System::Void CHKPMBLDMCN_1(::AIKGHHJKNCE* CENDLIKDNJA, ::Il2CppArray<::UnityEngine::Vector3>* KEFNLMJKHNJ, ::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>* PILELGPBCLL, ::System::Func_2<::AIKGHHJKNCE*, ::System::Boolean>* KANJODNFFOI)
	{
		return ((::System::Void(*)(::AIKGHHJKNCE*, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>*, ::System::Func_2<::AIKGHHJKNCE*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + IABCBJMMELB_CHKPMBLDMCN_1_OFFSET))(CENDLIKDNJA, KEFNLMJKHNJ, PILELGPBCLL, KANJODNFFOI);
	}

	::System::Void GBDMIBBBGHI(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IABCBJMMELB_GBDMIBBBGHI_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Boolean FKDOAPBNOMK(::AIKGHHJKNCE* CDKCJAKODPN, ::System::Boolean COFEGFFNHEN)
	{
		return ((::System::Boolean(*)(::PVOID, ::AIKGHHJKNCE*, ::System::Boolean))((::PBYTE)hIl2Cpp + IABCBJMMELB_FKDOAPBNOMK_OFFSET))(this, CDKCJAKODPN, COFEGFFNHEN);
	}

	::System::Boolean GDCNPPKGGBO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IABCBJMMELB_GDCNPPKGGBO_OFFSET))(this);
	}
};
