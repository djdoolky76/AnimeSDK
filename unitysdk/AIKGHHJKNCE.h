#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EHNGOMIKGCD.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/IMBMPPCPHOD.h"
#include "unitysdk/KBDLKNFAADD.h"
#include "unitysdk/LIBBHFPDBFL.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowPieceBlendMode.h"
#include "unitysdk/MoleMole/TextureSheetType.h"
#include "unitysdk/AIKGHHJKNCE_POECLFPDGMP.h"
#include "unitysdk/ANJGEPEJADI.h"
#include "unitysdk/DG/Tweening/Plugins/Options/VectorOptions.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/LLKPMNAMCIM.h"
#include "unitysdk/MHFOLPAJCNC.h"
#include "unitysdk/MPAGPEPJKKE.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class ABIEHBKGDNF;
class AINNEDPGFEG;
class APADONELOHK;
class APOLLOBLGOE;
class DNJGCKKGBKH_KDJJMKEANKA;
class EGCJOPJKNLD;
class FAIKBPENCON;
class FBAMLABJMKF;
class FBJGGPABDIH;
class GCNIDHLECFE;
class GDGKMEGHCJM;
class HAOEADBJPDF;
class HCPCMFMCOKC;
class HENPFDDJKIM;
class IMPJLKPEPPI;
class IPMBELDBAJK;
class KADNEIMNGIJ;
class KGHCIIEEELH;
class LGDEJFCKPKI;
class MCFPPILFGDB;
class MPKBDIJDMAP;
class NDCDGJHHIDP;
class NGCNIGAAEPD;
class OODDDHHGKIJ;
namespace DG::Tweening::Core { template <typename T1, typename T2, typename T3> class TweenerCore_3; }
namespace MoleMole { class IVideoPlayer; }
namespace MoleMole::Config { class ConfigHollowChessboard; }
namespace MoleMole::Config { class HollowChessboardUvAnimConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }
template <typename T> class DMIIBHDIDGN_1;

#define AIKGHHJKNCE_AMJBOMNOEHP_OFFSET UNITYSDK_OFFSET(0x12660500)
#define AIKGHHJKNCE_AMLDGGIMHJA_OFFSET UNITYSDK_OFFSET(0x12660710)
#define AIKGHHJKNCE_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x12661060)
#define AIKGHHJKNCE_BCLELOLFCNF_OFFSET UNITYSDK_OFFSET(0x12660A50)
#define AIKGHHJKNCE_BLDIABILLEG_OFFSET UNITYSDK_OFFSET(0x1265C590)
#define AIKGHHJKNCE_CBJJGNNLKIL_OFFSET UNITYSDK_OFFSET(0x126582E0)
#define AIKGHHJKNCE_CCKOJGNKIHM_OFFSET UNITYSDK_OFFSET(0x1265F400)
#define AIKGHHJKNCE_CGOOPMKNCDN_OFFSET UNITYSDK_OFFSET(0x126608D0)
#define AIKGHHJKNCE_CLGFMPKCBKL_OFFSET UNITYSDK_OFFSET(0x1265E930)
#define AIKGHHJKNCE_DBDDOEMFKCI_OFFSET UNITYSDK_OFFSET(0x12661550)
#define AIKGHHJKNCE_DDDOIODMGDG_OFFSET UNITYSDK_OFFSET(0x1265A8E0)
#define AIKGHHJKNCE_DFJPMOOOLHM_OFFSET UNITYSDK_OFFSET(0x1265A960)
#define AIKGHHJKNCE_DJGHACPIEEK_OFFSET UNITYSDK_OFFSET(0x126600C0)
#define AIKGHHJKNCE_DMGPFOILAFI_OFFSET UNITYSDK_OFFSET(0x12660250)
#define AIKGHHJKNCE_DMLHOGAMCJK_OFFSET UNITYSDK_OFFSET(0x1265E710)
#define AIKGHHJKNCE_DNEJHLEPDMP_OFFSET UNITYSDK_OFFSET(0x126611F0)
#define AIKGHHJKNCE_DNNJOOJBJNB_OFFSET UNITYSDK_OFFSET(0x126584F0)
#define AIKGHHJKNCE_DOKAKKAFJAL_1_OFFSET UNITYSDK_OFFSET(0x1265FB60)
#define AIKGHHJKNCE_DOKAKKAFJAL_OFFSET UNITYSDK_OFFSET(0x1265F000)
#define AIKGHHJKNCE_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x12661370)
#define AIKGHHJKNCE_EADEPCAOJLJ_OFFSET UNITYSDK_OFFSET(0x1265C870)
#define AIKGHHJKNCE_ECAIHOLOPMD_OFFSET UNITYSDK_OFFSET(0x1265DA20)
#define AIKGHHJKNCE_ECEBDPJEKNN_OFFSET UNITYSDK_OFFSET(0x12658490)
#define AIKGHHJKNCE_EHKGJIDLEIL_OFFSET UNITYSDK_OFFSET(0x1265D940)
#define AIKGHHJKNCE_EIOGBLNNKGE_OFFSET UNITYSDK_OFFSET(0x12659140)
#define AIKGHHJKNCE_ELBMBBEOCNA_OFFSET UNITYSDK_OFFSET(0x1265C6F0)
#define AIKGHHJKNCE_FALOIEPAAHM_OFFSET UNITYSDK_OFFSET(0x126613B0)
#define AIKGHHJKNCE_FFPFEGLMCPG_OFFSET UNITYSDK_OFFSET(0x1265C5A0)
#define AIKGHHJKNCE_GEGNDHDMLFP_OFFSET UNITYSDK_OFFSET(0x1265FF30)
#define AIKGHHJKNCE_GGOOKANDMPL_OFFSET UNITYSDK_OFFSET(0x12661730)
#define AIKGHHJKNCE_GIFDPAMAEEB_OFFSET UNITYSDK_OFFSET(0x1265E7A0)
#define AIKGHHJKNCE_GNBPOENJDBG_OFFSET UNITYSDK_OFFSET(0x1265C320)
#define AIKGHHJKNCE_GNHAIDLGPGI_OFFSET UNITYSDK_OFFSET(0x12659CF0)
#define AIKGHHJKNCE_HCJGGHLFKKE_OFFSET UNITYSDK_OFFSET(0x1265B680)
#define AIKGHHJKNCE_HECHKJGOAHO_OFFSET UNITYSDK_OFFSET(0x126617E0)
#define AIKGHHJKNCE_HIADJABJGPB_OFFSET UNITYSDK_OFFSET(0x1265D9F0)
#define AIKGHHJKNCE_HJNLFJDOHBH_OFFSET UNITYSDK_OFFSET(0x126605D0)
#define AIKGHHJKNCE_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x1265B7C0)
#define AIKGHHJKNCE_HOJMJJMDGLH_OFFSET UNITYSDK_OFFSET(0x12660110)
#define AIKGHHJKNCE_HOKNCOIPMAJ_OFFSET UNITYSDK_OFFSET(0x12661580)
#define AIKGHHJKNCE_ICHNIHFBEKC_OFFSET UNITYSDK_OFFSET(0x126615B0)
#define AIKGHHJKNCE_IGFFMKPDBJE_OFFSET UNITYSDK_OFFSET(0x1265E900)
#define AIKGHHJKNCE_IHIIGCALKEJ_1_OFFSET UNITYSDK_OFFSET(0x1265F530)
#define AIKGHHJKNCE_IHIIGCALKEJ_OFFSET UNITYSDK_OFFSET(0x1265DA30)
#define AIKGHHJKNCE_JDGACPDLFDM_OFFSET UNITYSDK_OFFSET(0x126600D0)
#define AIKGHHJKNCE_JIGIFMFBFOM_OFFSET UNITYSDK_OFFSET(0x1265F610)
#define AIKGHHJKNCE_JJOCGIICELP_OFFSET UNITYSDK_OFFSET(0x1265AD20)
#define AIKGHHJKNCE_JKFCNMANCCO_OFFSET UNITYSDK_OFFSET(0x12660EB0)
#define AIKGHHJKNCE_JMCLLBNBOOF_OFFSET UNITYSDK_OFFSET(0x126615A0)
#define AIKGHHJKNCE_JMGDLBOJKML_OFFSET UNITYSDK_OFFSET(0x126614D0)
#define AIKGHHJKNCE_JMMNBHFDJKA_OFFSET UNITYSDK_OFFSET(0x1265D930)
#define AIKGHHJKNCE_JOMNBCEHMBG_OFFSET UNITYSDK_OFFSET(0x12661540)
#define AIKGHHJKNCE_KCOKHJKDDJO_OFFSET UNITYSDK_OFFSET(0x12661050)
#define AIKGHHJKNCE_KELOPLFFABH_OFFSET UNITYSDK_OFFSET(0x1265E910)
#define AIKGHHJKNCE_KGKHPDGGJEA_OFFSET UNITYSDK_OFFSET(0x1265F460)
#define AIKGHHJKNCE_KGPBKDKDBFN_OFFSET UNITYSDK_OFFSET(0x1265B080)
#define AIKGHHJKNCE_KHDBJEFPBBC_OFFSET UNITYSDK_OFFSET(0x1265F5D0)
#define AIKGHHJKNCE_KKEGNMLGDLH_OFFSET UNITYSDK_OFFSET(0x1265F9D0)
#define AIKGHHJKNCE_KLAMALEJOHL_OFFSET UNITYSDK_OFFSET(0x12660E30)
#define AIKGHHJKNCE_KMMHFELEMEG_OFFSET UNITYSDK_OFFSET(0x1265BF70)
#define AIKGHHJKNCE_KPGOBKAEEFH_OFFSET UNITYSDK_OFFSET(0x126580F0)
#define AIKGHHJKNCE_LAIAPPCHJCO_OFFSET UNITYSDK_OFFSET(0x12661590)
#define AIKGHHJKNCE_LBJNDDLCALK_OFFSET UNITYSDK_OFFSET(0x1265FB50)
#define AIKGHHJKNCE_LFAPNGFNLIC_OFFSET UNITYSDK_OFFSET(0x1265D2A0)
#define AIKGHHJKNCE_LHPMJDBANHB_OFFSET UNITYSDK_OFFSET(0x1265FB40)
#define AIKGHHJKNCE_LMOCEOHJKIL_OFFSET UNITYSDK_OFFSET(0x1265F420)
#define AIKGHHJKNCE_MCGJBGBBFNJ_OFFSET UNITYSDK_OFFSET(0x1265BFE0)
#define AIKGHHJKNCE_MDNMBEEFMBG_OFFSET UNITYSDK_OFFSET(0x126607F0)
#define AIKGHHJKNCE_MEEEBPCINHC_OFFSET UNITYSDK_OFFSET(0x12659C90)
#define AIKGHHJKNCE_MEGJOBNJPJE_OFFSET UNITYSDK_OFFSET(0x1265BE90)
#define AIKGHHJKNCE_MICFFBPACKP_OFFSET UNITYSDK_OFFSET(0x1265E920)
#define AIKGHHJKNCE_MJMAACANBIH_OFFSET UNITYSDK_OFFSET(0x12661740)
#define AIKGHHJKNCE_MJNDMCJKIDH_OFFSET UNITYSDK_OFFSET(0x12660240)
#define AIKGHHJKNCE_MJNLJBGGPCC_OFFSET UNITYSDK_OFFSET(0x12661440)
#define AIKGHHJKNCE_MPBEGCJAALH_OFFSET UNITYSDK_OFFSET(0x1265DAB0)
#define AIKGHHJKNCE_NBENCAPFAHF_OFFSET UNITYSDK_OFFSET(0x1265F4C0)
#define AIKGHHJKNCE_NEPBKNJHJDP_OFFSET UNITYSDK_OFFSET(0x1265DA10)
#define AIKGHHJKNCE_NGBPONPJMHO_OFFSET UNITYSDK_OFFSET(0x12660630)
#define AIKGHHJKNCE_NGOBCOOHALJ_OFFSET UNITYSDK_OFFSET(0x1265C6E0)
#define AIKGHHJKNCE_NHFEANOBKGG_OFFSET UNITYSDK_OFFSET(0x12659CA0)
#define AIKGHHJKNCE_NINFFBIJBGM_OFFSET UNITYSDK_OFFSET(0x12661560)
#define AIKGHHJKNCE_NKANCLDDHHI_OFFSET UNITYSDK_OFFSET(0x1265E2B0)
#define AIKGHHJKNCE_NKFPFPGKNBK_OFFSET UNITYSDK_OFFSET(0x1265D130)
#define AIKGHHJKNCE_NMEGHIOGHIL_OFFSET UNITYSDK_OFFSET(0x1265ACE0)
#define AIKGHHJKNCE_NOGGPKGAFLJ_OFFSET UNITYSDK_OFFSET(0x1265AA60)
#define AIKGHHJKNCE_NPBGDPIMFAL_OFFSET UNITYSDK_OFFSET(0x1265C580)
#define AIKGHHJKNCE_NPFHANAPGAJ_OFFSET UNITYSDK_OFFSET(0x1265E940)
#define AIKGHHJKNCE_OAADEAMLHLK_OFFSET UNITYSDK_OFFSET(0x12661570)
#define AIKGHHJKNCE_OBEBINMPDGG_OFFSET UNITYSDK_OFFSET(0x1265D9E0)
#define AIKGHHJKNCE_ODIHBIGIDOG_OFFSET UNITYSDK_OFFSET(0x12660330)
#define AIKGHHJKNCE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12658550)
#define AIKGHHJKNCE_OPNEPGKKJFO_OFFSET UNITYSDK_OFFSET(0x126612D0)
#define AIKGHHJKNCE_PBOAGDLAFMC_OFFSET UNITYSDK_OFFSET(0x12661750)
#define AIKGHHJKNCE_PCDIFGAOPJA_OFFSET UNITYSDK_OFFSET(0x12659180)
#define AIKGHHJKNCE_PFOJKABKHCM_OFFSET UNITYSDK_OFFSET(0x126608E0)
#define AIKGHHJKNCE_PGKCKACHDCM_OFFSET UNITYSDK_OFFSET(0x1265B710)
#define AIKGHHJKNCE_PGPHACKPOBD_OFFSET UNITYSDK_OFFSET(0x1265A500)
#define AIKGHHJKNCE_PHDOKDDEDPB_OFFSET UNITYSDK_OFFSET(0x1265A120)
#define AIKGHHJKNCE_PMMDDBMFIFI_OFFSET UNITYSDK_OFFSET(0x1265CC50)
#define AIKGHHJKNCE_PMNCEMDEOLE_OFFSET UNITYSDK_OFFSET(0x12660220)
#define AIKGHHJKNCE_PNHJAIIDAEL_OFFSET UNITYSDK_OFFSET(0x1265FF40)
#define AIKGHHJKNCE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x126583D0)
#define AIKGHHJKNCE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1265BF10)
#define AIKGHHJKNCE__CTOR_OFFSET UNITYSDK_OFFSET(0x12657E80)

inline static constexpr unsigned int AIKGHHJKNCE_TypeDefinitionIndex = 58236;

class AIKGHHJKNCE : public ::KBDLKNFAADD
{
public:
	static ::System::String** StaticGet_HNAHMKHCFCK()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AIKGHHJKNCE_TypeDefinitionIndex)->GetStaticField(0x30AA0);
	}
	static ::DNJGCKKGBKH_KDJJMKEANKA** StaticGet_AOEEIBJHENI()
	{
		return (::DNJGCKKGBKH_KDJJMKEANKA**)Il2CppClass::FromTypeDefinitionIndex(AIKGHHJKNCE_TypeDefinitionIndex)->GetStaticField(0x30AA8);
	}
	::NGCNIGAAEPD* MGLJOBDGKLN; // 0x5A0
	::DMIIBHDIDGN_1<::LIBBHFPDBFL>* ELLCAGBMNNC; // 0x5A8
	::IPMBELDBAJK* FNONJEIOOEE; // 0x5B0
	::FAIKBPENCON* CHIBFJHGIPJ; // 0x5B8
	::GDGKMEGHCJM* EKGGHJBIMOD; // 0x5C0
	::NDCDGJHHIDP* OJADCEDPMEJ; // 0x5C8
	::GCNIDHLECFE* FJCLDLFODAE; // 0x5D0
	::System::Collections::Generic::List_1<::APADONELOHK*>* HCGAMLFMLGA; // 0x5D8
	::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* DDEMKFDHFBO; // 0x5E0
	::OODDDHHGKIJ* EGGODNLMLKL; // 0x5E8
	::EGCJOPJKNLD* GCMKLLOCKFN; // 0x5F0
	::UnityEngine::GameObject* OOFEGMODMIN; // 0x5F8
	::HENPFDDJKIM* FJKDMAKDOMO; // 0x600
	::LGDEJFCKPKI* EGEEDCOPOCD; // 0x608
	::LGDEJFCKPKI* NJMNHKGEBMD; // 0x610
	::KADNEIMNGIJ* _MNGIFKIPIBO_k__BackingField; // 0x618
	::HCPCMFMCOKC* KHJFLNBILGO; // 0x620
	::DMIIBHDIDGN_1<::IMBMPPCPHOD>* EIJNMFCFHIL; // 0x628
	::KGHCIIEEELH* _AAMDCDLICFN_k__BackingField; // 0x630
	::AINNEDPGFEG* HMLIPLHOPLN; // 0x638
	::MCFPPILFGDB* NIPNDNJHBFO; // 0x640
	::FBJGGPABDIH* AIJCDDCEJFC; // 0x648
	::System::Action_1<::System::Boolean>* GFOEHDAFHGH; // 0x650
	::ABIEHBKGDNF* KDACMBJKBBP; // 0x658
	::IMPJLKPEPPI* _EMBKKKFJKDN_k__BackingField; // 0x660
	::System::Int32 HJDPJDGMEBL; // 0x668
	::System::Single FAMPMABJOCK; // 0x66C
	::MoleMole::HollowChessboard::HollowCell _HKMPDPOGBKF_k__BackingField; // 0x670
	::System::Boolean BGELNHAJGAF; // 0x67C
	::System::Boolean _CHCALFBJKID_k__BackingField; // 0x67D
	::System::Boolean IHKOOKKDBCO; // 0x67E
	::System::Boolean _CFOEMFBNGIO_k__BackingField; // 0x67F
	::System::Boolean _HFNPAEJJDPG_k__BackingField; // 0x680
	::System::Boolean _POPHJJGJOCM_k__BackingField; // 0x681

	::System::Void _ctor(::MPAGPEPJKKE EIMCJEMLILJ, ::IMBMPPCPHOD FFDHBBHAANK, ::MoleMole::HollowChessboard::HollowCell PFBHBOMPMGD, ::FBAMLABJMKF* PAEAACMFIJM, ::FBJGGPABDIH* AIJCDDCEJFC)
	{
		return ((::System::Void(*)(::PVOID, ::MPAGPEPJKKE, ::IMBMPPCPHOD, ::MoleMole::HollowChessboard::HollowCell, ::FBAMLABJMKF*, ::FBJGGPABDIH*))((::PBYTE)hIl2Cpp + AIKGHHJKNCE__CTOR_OFFSET))(this, EIMCJEMLILJ, FFDHBBHAANK, PFBHBOMPMGD, PAEAACMFIJM, AIJCDDCEJFC);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AIKGHHJKNCE__CCTOR_OFFSET))();
	}

	::System::Collections::Generic::IEnumerable_1<::EHNGOMIKGCD>* KPGOBKAEEFH()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::EHNGOMIKGCD>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_KPGOBKAEEFH_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_TOSTRING_OFFSET))(this);
	}

	::System::Void ECEBDPJEKNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_ECEBDPJEKNN_OFFSET))(this);
	}

	::System::Void DNNJOOJBJNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_DNNJOOJBJNB_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void PCDIFGAOPJA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_PCDIFGAOPJA_OFFSET))(this);
	}

	::System::Void NHFEANOBKGG(::MCFPPILFGDB* MOLHDICDIAF, ::System::Boolean NPPMJEIPMFC)
	{
		return ((::System::Void(*)(::PVOID, ::MCFPPILFGDB*, ::System::Boolean))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_NHFEANOBKGG_OFFSET))(this, MOLHDICDIAF, NPPMJEIPMFC);
	}

	::System::Void GNHAIDLGPGI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_GNHAIDLGPGI_OFFSET))(this);
	}

	::System::Void PHDOKDDEDPB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_PHDOKDDEDPB_OFFSET))(this);
	}

	::System::Void PGPHACKPOBD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_PGPHACKPOBD_OFFSET))(this);
	}

	::System::Void DDDOIODMGDG(::System::Single PMNLNNGEIFM, ::System::Single BEKLCLFIDKF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_DDDOIODMGDG_OFFSET))(this, PMNLNNGEIFM, BEKLCLFIDKF);
	}

	::System::Void DFJPMOOOLHM(::System::Single PMNLNNGEIFM, ::System::Single BEKLCLFIDKF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_DFJPMOOOLHM_OFFSET))(this, PMNLNNGEIFM, BEKLCLFIDKF);
	}

	::System::Void HCJGGHLFKKE(::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_HCJGGHLFKKE_OFFSET))(this, PBCAAADNEPK);
	}

	::System::Void PGKCKACHDCM(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_PGKCKACHDCM_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void KMMHFELEMEG(::System::Nullable_1<::System::Int32> ABHBKFJKINO, ::System::Boolean ANGKDEMBEMH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>, ::System::Boolean))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_KMMHFELEMEG_OFFSET))(this, ABHBKFJKINO, ANGKDEMBEMH);
	}

	::MCFPPILFGDB* NPBGDPIMFAL()
	{
		return ((::MCFPPILFGDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_NPBGDPIMFAL_OFFSET))(this);
	}

	::System::Boolean BLDIABILLEG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_BLDIABILLEG_OFFSET))(this);
	}

	::HAOEADBJPDF* FFPFEGLMCPG(::MoleMole::Config::HollowChessboardUvAnimConfig* JHIMHGIDNIO, ::System::Int32 AKGGKGEPJLP, ::UnityEngine::Events::UnityAction_1<::System::Boolean>* CLBAEECMNJL)
	{
		return ((::HAOEADBJPDF*(*)(::PVOID, ::MoleMole::Config::HollowChessboardUvAnimConfig*, ::System::Int32, ::UnityEngine::Events::UnityAction_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_FFPFEGLMCPG_OFFSET))(this, JHIMHGIDNIO, AKGGKGEPJLP, CLBAEECMNJL);
	}

	::IMPJLKPEPPI* NGOBCOOHALJ()
	{
		return ((::IMPJLKPEPPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_NGOBCOOHALJ_OFFSET))(this);
	}

	::UnityEngine::Vector3 ELBMBBEOCNA()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_ELBMBBEOCNA_OFFSET))(this);
	}

	::System::Void EADEPCAOJLJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_EADEPCAOJLJ_OFFSET))(this);
	}

	::IPMBELDBAJK* CBJJGNNLKIL()
	{
		return ((::IPMBELDBAJK*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_CBJJGNNLKIL_OFFSET))(this);
	}

	::System::Void PMMDDBMFIFI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_PMMDDBMFIFI_OFFSET))(this);
	}

	::APOLLOBLGOE* LFAPNGFNLIC(::System::Int32& ABHBKFJKINO, ::AIKGHHJKNCE_POECLFPDGMP& EMDMMMDOBJH, ::System::Action* CLBAEECMNJL)
	{
		return ((::APOLLOBLGOE*(*)(::PVOID, ::System::Int32&, ::AIKGHHJKNCE_POECLFPDGMP&, ::System::Action*))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_LFAPNGFNLIC_OFFSET))(this, ABHBKFJKINO, EMDMMMDOBJH, CLBAEECMNJL);
	}

	::System::Void JMMNBHFDJKA(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_JMMNBHFDJKA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EHKGJIDLEIL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_EHKGJIDLEIL_OFFSET))(this);
	}

	::System::Boolean OBEBINMPDGG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_OBEBINMPDGG_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowCell HIADJABJGPB()
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_HIADJABJGPB_OFFSET))(this);
	}

	::System::Void NEPBKNJHJDP(::IMPJLKPEPPI* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::IMPJLKPEPPI*))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_NEPBKNJHJDP_OFFSET))(this, EGEGIMGMJHN);
	}

	::AINNEDPGFEG* ECAIHOLOPMD()
	{
		return ((::AINNEDPGFEG*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_ECAIHOLOPMD_OFFSET))(this);
	}

	::System::Void IHIIGCALKEJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_IHIIGCALKEJ_OFFSET))(this);
	}

	::System::Void MPBEGCJAALH(::System::String* MCOHLHMKLIP, ::UnityEngine::Events::UnityAction* CLBAEECMNJL, ::System::Boolean GDINHGLCODO, ::MoleMole::TextureSheetType OBNIAHNMHPF, ::System::Int32 DBHFIJGFPOK)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Events::UnityAction*, ::System::Boolean, ::MoleMole::TextureSheetType, ::System::Int32))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_MPBEGCJAALH_OFFSET))(this, MCOHLHMKLIP, CLBAEECMNJL, GDINHGLCODO, OBNIAHNMHPF, DBHFIJGFPOK);
	}

	::MPAGPEPJKKE NKANCLDDHHI(::MoleMole::Config::ConfigHollowChessboard* LCFNEAHDMHH)
	{
		return ((::MPAGPEPJKKE(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard*))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_NKANCLDDHHI_OFFSET))(this, LCFNEAHDMHH);
	}

	::Foundation::Coroutine::CoroutineHandle DMLHOGAMCJK(::System::Single DLBFEAOALML, ::System::Action* EJGDHCIBCJH)
	{
		return ((::Foundation::Coroutine::CoroutineHandle(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_DMLHOGAMCJK_OFFSET))(this, DLBFEAOALML, EJGDHCIBCJH);
	}

	::LLKPMNAMCIM GIFDPAMAEEB(::MoleMole::Config::ConfigHollowChessboard* LCFNEAHDMHH)
	{
		return ((::LLKPMNAMCIM(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard*))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_GIFDPAMAEEB_OFFSET))(this, LCFNEAHDMHH);
	}

	::System::Void MEGJOBNJPJE(::MCFPPILFGDB* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MCFPPILFGDB*))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_MEGJOBNJPJE_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::Quaternion IGFFMKPDBJE()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_IGFFMKPDBJE_OFFSET))(this);
	}

	::System::Void KELOPLFFABH(::KADNEIMNGIJ* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::KADNEIMNGIJ*))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_KELOPLFFABH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean MICFFBPACKP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_MICFFBPACKP_OFFSET))(this);
	}

	::GDGKMEGHCJM* CLGFMPKCBKL()
	{
		return ((::GDGKMEGHCJM*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_CLGFMPKCBKL_OFFSET))(this);
	}

	::APOLLOBLGOE* NPFHANAPGAJ(::System::Int32& ABHBKFJKINO, ::System::String* MCOHLHMKLIP, ::System::Nullable_1<::System::Int32> LHDONNFNKCC, ::UnityEngine::Events::UnityAction* CLBAEECMNJL)
	{
		return ((::APOLLOBLGOE*(*)(::PVOID, ::System::Int32&, ::System::String*, ::System::Nullable_1<::System::Int32>, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_NPFHANAPGAJ_OFFSET))(this, ABHBKFJKINO, MCOHLHMKLIP, LHDONNFNKCC, CLBAEECMNJL);
	}

	::System::Void DOKAKKAFJAL(::System::String* CJBJONJDOLI, ::System::Boolean HAFDIMGJBHC, ::System::Boolean MBMACCFFIKC, ::System::Action_1<::MoleMole::IVideoPlayer*>* JNCGLPCKKFL, ::System::Action* AJFPKBOMMIA, ::System::Action* PABLEDCGDGM, ::System::Action* MDNHGALDDKA, ::System::Int32 MKEBAGONKPJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Action_1<::MoleMole::IVideoPlayer*>*, ::System::Action*, ::System::Action*, ::System::Action*, ::System::Int32))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_DOKAKKAFJAL_OFFSET))(this, CJBJONJDOLI, HAFDIMGJBHC, MBMACCFFIKC, JNCGLPCKKFL, AJFPKBOMMIA, PABLEDCGDGM, MDNHGALDDKA, MKEBAGONKPJ);
	}

	::System::Void CCKOJGNKIHM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_CCKOJGNKIHM_OFFSET))(this);
	}

	::System::Void JJOCGIICELP(::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_JJOCGIICELP_OFFSET))(this, PBCAAADNEPK);
	}

	::System::Single LMOCEOHJKIL()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_LMOCEOHJKIL_OFFSET))(this);
	}

	::System::Void KGKHPDGGJEA(::Foundation::Coroutine::CoroutineHandle PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Coroutine::CoroutineHandle))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_KGKHPDGGJEA_OFFSET))(this, PHHDHIBOCKA);
	}

	::System::Void NBENCAPFAHF(::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_NBENCAPFAHF_OFFSET))(this, EKPEBNCLJPM);
	}

	::System::Void IHIIGCALKEJ_1(::System::Single JBFOAKELCNK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_IHIIGCALKEJ_1_OFFSET))(this, JBFOAKELCNK);
	}

	::System::Void KHDBJEFPBBC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_KHDBJEFPBBC_OFFSET))(this);
	}

	::UnityEngine::Transform* JIGIFMFBFOM()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_JIGIFMFBFOM_OFFSET))(this);
	}

	::System::Void MCGJBGBBFNJ(::System::Nullable_1<::System::Int32> ABHBKFJKINO, ::System::Boolean ANGKDEMBEMH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>, ::System::Boolean))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_MCGJBGBBFNJ_OFFSET))(this, ABHBKFJKINO, ANGKDEMBEMH);
	}

	::HAOEADBJPDF* KKEGNMLGDLH(::System::String* KEAHEADHMBI, ::System::Int32 AKGGKGEPJLP, ::UnityEngine::Events::UnityAction_1<::System::Boolean>* CLBAEECMNJL)
	{
		return ((::HAOEADBJPDF*(*)(::PVOID, ::System::String*, ::System::Int32, ::UnityEngine::Events::UnityAction_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_KKEGNMLGDLH_OFFSET))(this, KEAHEADHMBI, AKGGKGEPJLP, CLBAEECMNJL);
	}

	::System::Void NMEGHIOGHIL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_NMEGHIOGHIL_OFFSET))(this);
	}

	::HCPCMFMCOKC* LHPMJDBANHB()
	{
		return ((::HCPCMFMCOKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_LHPMJDBANHB_OFFSET))(this);
	}

	::System::Void LBJNDDLCALK(::KGHCIIEEELH* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::KGHCIIEEELH*))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_LBJNDDLCALK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void DOKAKKAFJAL_1(::System::String* CJBJONJDOLI, ::System::Boolean HAFDIMGJBHC, ::System::Action_1<::MoleMole::IVideoPlayer*>* JNCGLPCKKFL, ::System::Action* AJFPKBOMMIA, ::System::Action* MDNHGALDDKA, ::System::Int32 MKEBAGONKPJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Action_1<::MoleMole::IVideoPlayer*>*, ::System::Action*, ::System::Action*, ::System::Int32))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_DOKAKKAFJAL_1_OFFSET))(this, CJBJONJDOLI, HAFDIMGJBHC, JNCGLPCKKFL, AJFPKBOMMIA, MDNHGALDDKA, MKEBAGONKPJ);
	}

	::LGDEJFCKPKI* GEGNDHDMLFP()
	{
		return ((::LGDEJFCKPKI*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_GEGNDHDMLFP_OFFSET))(this);
	}

	::UnityEngine::Vector3 PNHJAIIDAEL()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_PNHJAIIDAEL_OFFSET))(this);
	}

	::KADNEIMNGIJ* DJGHACPIEEK()
	{
		return ((::KADNEIMNGIJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_DJGHACPIEEK_OFFSET))(this);
	}

	::System::Void JDGACPDLFDM(::MPKBDIJDMAP* JNDDJMAHNAI, ::MoleMole::HollowPieceBlendMode MDLNMDJMMJP)
	{
		return ((::System::Void(*)(::PVOID, ::MPKBDIJDMAP*, ::MoleMole::HollowPieceBlendMode))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_JDGACPDLFDM_OFFSET))(this, JNDDJMAHNAI, MDLNMDJMMJP);
	}

	::UnityEngine::Vector3 HOJMJJMDGLH()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_HOJMJJMDGLH_OFFSET))(this);
	}

	::System::Void PMNCEMDEOLE(::MoleMole::HollowChessboard::HollowCell EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_PMNCEMDEOLE_OFFSET))(this, EGEGIMGMJHN);
	}

	::KGHCIIEEELH* MJNDMCJKIDH()
	{
		return ((::KGHCIIEEELH*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_MJNDMCJKIDH_OFFSET))(this);
	}

	::LIBBHFPDBFL& DMGPFOILAFI()
	{
		return ((::LIBBHFPDBFL&(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_DMGPFOILAFI_OFFSET))(this);
	}

	::APOLLOBLGOE* ODIHBIGIDOG(::ANJGEPEJADI HNOPAJLDCFB, ::ANJGEPEJADI HDJPBBPKFNN)
	{
		return ((::APOLLOBLGOE*(*)(::PVOID, ::ANJGEPEJADI, ::ANJGEPEJADI))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_ODIHBIGIDOG_OFFSET))(this, HNOPAJLDCFB, HDJPBBPKFNN);
	}

	::System::Boolean AMJBOMNOEHP(::MPAGPEPJKKE LBGOENCPNJE)
	{
		return ((::System::Boolean(*)(::PVOID, ::MPAGPEPJKKE))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_AMJBOMNOEHP_OFFSET))(this, LBGOENCPNJE);
	}

	::System::Void HJNLFJDOHBH(::System::Single JBFOAKELCNK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_HJNLFJDOHBH_OFFSET))(this, JBFOAKELCNK);
	}

	::UnityEngine::Vector3 NGBPONPJMHO()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_NGBPONPJMHO_OFFSET))(this);
	}

	::IMBMPPCPHOD& AMLDGGIMHJA()
	{
		return ((::IMBMPPCPHOD&(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_AMLDGGIMHJA_OFFSET))(this);
	}

	::UnityEngine::Vector3 MDNMBEEFMBG()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_MDNMBEEFMBG_OFFSET))(this);
	}

	::GCNIDHLECFE* CGOOPMKNCDN()
	{
		return ((::GCNIDHLECFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_CGOOPMKNCDN_OFFSET))(this);
	}

	::APOLLOBLGOE* PFOJKABKHCM(::MHFOLPAJCNC HNOPAJLDCFB)
	{
		return ((::APOLLOBLGOE*(*)(::PVOID, ::MHFOLPAJCNC))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_PFOJKABKHCM_OFFSET))(this, HNOPAJLDCFB);
	}

	::System::Void BCLELOLFCNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_BCLELOLFCNF_OFFSET))(this);
	}

	::System::Void KLAMALEJOHL(::System::Boolean JKBLDFBGBPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_KLAMALEJOHL_OFFSET))(this, JKBLDFBGBPK);
	}

	::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::Options::VectorOptions>* JKFCNMANCCO(::UnityEngine::Vector3 BOEJJMLJEDP, ::System::Single MDPPNMIPDMP)
	{
		return ((::DG::Tweening::Core::TweenerCore_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::DG::Tweening::Plugins::Options::VectorOptions>*(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_JKFCNMANCCO_OFFSET))(this, BOEJJMLJEDP, MDPPNMIPDMP);
	}

	::System::Void KGPBKDKDBFN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_KGPBKDKDBFN_OFFSET))(this);
	}

	::System::Void KCOKHJKDDJO(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_KCOKHJKDDJO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void BBOMJDBNHIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_BBOMJDBNHIC_OFFSET))(this);
	}

	::LIBBHFPDBFL& DNEJHLEPDMP()
	{
		return ((::LIBBHFPDBFL&(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_DNEJHLEPDMP_OFFSET))(this);
	}

	::System::Void OPNEPGKKJFO(::System::Single JBFOAKELCNK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_OPNEPGKKJFO_OFFSET))(this, JBFOAKELCNK);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Void FALOIEPAAHM(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_FALOIEPAAHM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void MJNLJBGGPCC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_MJNLJBGGPCC_OFFSET))(this);
	}

	::System::Void JMGDLBOJKML()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_JMGDLBOJKML_OFFSET))(this);
	}

	::System::Void EIOGBLNNKGE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_EIOGBLNNKGE_OFFSET))(this);
	}

	::System::Boolean JOMNBCEHMBG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_JOMNBCEHMBG_OFFSET))(this);
	}

	::System::Void GNBPOENJDBG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_GNBPOENJDBG_OFFSET))(this);
	}

	::System::Boolean NKFPFPGKNBK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_NKFPFPGKNBK_OFFSET))(this);
	}

	::System::Void NOGGPKGAFLJ(::NGCNIGAAEPD* KGBFPOPBHLJ)
	{
		return ((::System::Void(*)(::PVOID, ::NGCNIGAAEPD*))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_NOGGPKGAFLJ_OFFSET))(this, KGBFPOPBHLJ);
	}

	::LGDEJFCKPKI* DBDDOEMFKCI()
	{
		return ((::LGDEJFCKPKI*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_DBDDOEMFKCI_OFFSET))(this);
	}

	::NDCDGJHHIDP* NINFFBIJBGM()
	{
		return ((::NDCDGJHHIDP*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_NINFFBIJBGM_OFFSET))(this);
	}

	::ABIEHBKGDNF* OAADEAMLHLK()
	{
		return ((::ABIEHBKGDNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_OAADEAMLHLK_OFFSET))(this);
	}

	::System::Void HOKNCOIPMAJ(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_HOKNCOIPMAJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void LAIAPPCHJCO(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_LAIAPPCHJCO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean JMCLLBNBOOF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_JMCLLBNBOOF_OFFSET))(this);
	}

	::UnityEngine::Vector3 ICHNIHFBEKC()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_ICHNIHFBEKC_OFFSET))(this);
	}

	::OODDDHHGKIJ* GGOOKANDMPL()
	{
		return ((::OODDDHHGKIJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_GGOOKANDMPL_OFFSET))(this);
	}

	::HENPFDDJKIM* MJMAACANBIH()
	{
		return ((::HENPFDDJKIM*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_MJMAACANBIH_OFFSET))(this);
	}

	::System::Void PBOAGDLAFMC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_PBOAGDLAFMC_OFFSET))(this);
	}

	::IMBMPPCPHOD& HECHKJGOAHO()
	{
		return ((::IMBMPPCPHOD&(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_HECHKJGOAHO_OFFSET))(this);
	}

	::System::Boolean MEEEBPCINHC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGHHJKNCE_MEEEBPCINHC_OFFSET))(this);
	}
};
