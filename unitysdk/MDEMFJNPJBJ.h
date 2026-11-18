#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/ILPGFOKEEGD.h"
#include "unitysdk/LOCOJEENBIP.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/NJKPKBPHJAJ.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GDIJJEFFDDK;
class GEIHCPAOKKK;
class IMNAJNLNJMI;
class JBKHHHPLBEL;
class JKMGJKOCGDE;
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace MoleMole { class CriWareVideoPlayer; }
namespace MoleMole { class IVideoPlayer; }
namespace MoleMole { class MonoDirectorBindingReplace; }
namespace MoleMole { class TLStartEndEntityAnimatorParamControl; }
namespace MoleMole { class TimelineData; }
namespace MoleMole { class TimelineDataExtra; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Timeline { class TimelineEndMarker; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MdbComponent; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define MDEMFJNPJBJ_ADGGOLMPOMM_OFFSET UNITYSDK_OFFSET(0x17D11A50)
#define MDEMFJNPJBJ_AEFOBKCKPFH_OFFSET UNITYSDK_OFFSET(0x17D14200)
#define MDEMFJNPJBJ_AEPAFHJNKHE_OFFSET UNITYSDK_OFFSET(0x17D0FDA0)
#define MDEMFJNPJBJ_AIBNFABPPGO_OFFSET UNITYSDK_OFFSET(0x17D11480)
#define MDEMFJNPJBJ_APLMDNLEIBM_OFFSET UNITYSDK_OFFSET(0x17D10020)
#define MDEMFJNPJBJ_BFDNCKFGKFM_OFFSET UNITYSDK_OFFSET(0x17D14F00)
#define MDEMFJNPJBJ_BGJAMMKOHCL_OFFSET UNITYSDK_OFFSET(0x17D16230)
#define MDEMFJNPJBJ_BLNHHAFGIHC_OFFSET UNITYSDK_OFFSET(0x17D0A100)
#define MDEMFJNPJBJ_BOEPGMLNKCC_OFFSET UNITYSDK_OFFSET(0x17D088A0)
#define MDEMFJNPJBJ_CBNJJDMGDHN_OFFSET UNITYSDK_OFFSET(0x17D16420)
#define MDEMFJNPJBJ_CFPHOHNNBNL_OFFSET UNITYSDK_OFFSET(0x17D10350)
#define MDEMFJNPJBJ_CGPHACKCMMF_OFFSET UNITYSDK_OFFSET(0x17D0C470)
#define MDEMFJNPJBJ_CIHNOHKNCJI_OFFSET UNITYSDK_OFFSET(0x17D0BDC0)
#define MDEMFJNPJBJ_CMHHIOEIFLC_OFFSET UNITYSDK_OFFSET(0x17D1A180)
#define MDEMFJNPJBJ_CMNJECGJKFN_OFFSET UNITYSDK_OFFSET(0x17D0F920)
#define MDEMFJNPJBJ_DEIPAFJBPGO_OFFSET UNITYSDK_OFFSET(0x17D15830)
#define MDEMFJNPJBJ_DHFMEMHGKKM_OFFSET UNITYSDK_OFFSET(0x17D0D490)
#define MDEMFJNPJBJ_DKBKFCMNMJA_OFFSET UNITYSDK_OFFSET(0x17D110A0)
#define MDEMFJNPJBJ_DKLKOGIDFLN_OFFSET UNITYSDK_OFFSET(0x17D117B0)
#define MDEMFJNPJBJ_DLLMAJHLGIM_OFFSET UNITYSDK_OFFSET(0x17D08690)
#define MDEMFJNPJBJ_DNNJOOJBJNB_OFFSET UNITYSDK_OFFSET(0x17D08C70)
#define MDEMFJNPJBJ_ECEBDPJEKNN_OFFSET UNITYSDK_OFFSET(0x17D08C20)
#define MDEMFJNPJBJ_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x17D08840)
#define MDEMFJNPJBJ_EDKHEJBKCOC_OFFSET UNITYSDK_OFFSET(0x17D098D0)
#define MDEMFJNPJBJ_EIAADBIEFNO_OFFSET UNITYSDK_OFFSET(0x17D08BE0)
#define MDEMFJNPJBJ_ELKNLHJBALL_OFFSET UNITYSDK_OFFSET(0x17D17A60)
#define MDEMFJNPJBJ_ELOHBHFNPHC_OFFSET UNITYSDK_OFFSET(0x17D1A690)
#define MDEMFJNPJBJ_EMEBJJIPACK_OFFSET UNITYSDK_OFFSET(0x17D19D20)
#define MDEMFJNPJBJ_EPPOAMOHADJ_OFFSET UNITYSDK_OFFSET(0x17D09E30)
#define MDEMFJNPJBJ_FDFGBMBMMDB_OFFSET UNITYSDK_OFFSET(0x17D15E20)
#define MDEMFJNPJBJ_FFMBPMGGIAO_OFFSET UNITYSDK_OFFSET(0x17D1A720)
#define MDEMFJNPJBJ_FHGKGFIHJIN_OFFSET UNITYSDK_OFFSET(0x17D11450)
#define MDEMFJNPJBJ_FHPOFBBPOMO_OFFSET UNITYSDK_OFFSET(0x17D14F10)
#define MDEMFJNPJBJ_FPBBPIMFFHN_OFFSET UNITYSDK_OFFSET(0x17D15600)
#define MDEMFJNPJBJ_GAJBMHLKGDG_OFFSET UNITYSDK_OFFSET(0x17D087A0)
#define MDEMFJNPJBJ_GJNPFIOOCMM_OFFSET UNITYSDK_OFFSET(0x17D155B0)
#define MDEMFJNPJBJ_HIIMHKCMBGK_OFFSET UNITYSDK_OFFSET(0x17D0A730)
#define MDEMFJNPJBJ_HJFLCKFNBJM_OFFSET UNITYSDK_OFFSET(0x17D0B5C0)
#define MDEMFJNPJBJ_HKGMDDAJMKO_OFFSET UNITYSDK_OFFSET(0x17D129A0)
#define MDEMFJNPJBJ_HLGGDNLNMBH_OFFSET UNITYSDK_OFFSET(0x17D139B0)
#define MDEMFJNPJBJ_HLIOKKLCGFB_OFFSET UNITYSDK_OFFSET(0x17D0D530)
#define MDEMFJNPJBJ_HMFLKGBOLMP_OFFSET UNITYSDK_OFFSET(0x17D0E640)
#define MDEMFJNPJBJ_HNBPNEHEIGE_OFFSET UNITYSDK_OFFSET(0x17D09CE0)
#define MDEMFJNPJBJ_HNKNNNNIMCP_OFFSET UNITYSDK_OFFSET(0x17D141F0)
#define MDEMFJNPJBJ_IEIAPELPJCB_OFFSET UNITYSDK_OFFSET(0x17D11EF0)
#define MDEMFJNPJBJ_IHEEOKKFOFO_OFFSET UNITYSDK_OFFSET(0x17D17790)
#define MDEMFJNPJBJ_ILLDEKMFNLL_OFFSET UNITYSDK_OFFSET(0x17D18190)
#define MDEMFJNPJBJ_INOOIDBHCAJ_OFFSET UNITYSDK_OFFSET(0x17D13F30)
#define MDEMFJNPJBJ_JAKBDOFCKAC_OFFSET UNITYSDK_OFFSET(0x17D08CC0)
#define MDEMFJNPJBJ_JCFHAAHEKGN_OFFSET UNITYSDK_OFFSET(0x17D19400)
#define MDEMFJNPJBJ_JDFMACJFPJI_OFFSET UNITYSDK_OFFSET(0x17D0DFC0)
#define MDEMFJNPJBJ_JEDNEGNFJLH_OFFSET UNITYSDK_OFFSET(0x17D0D970)
#define MDEMFJNPJBJ_JEOLPOCIGDF_OFFSET UNITYSDK_OFFSET(0x17D1A010)
#define MDEMFJNPJBJ_JFGKEEFPKKJ_OFFSET UNITYSDK_OFFSET(0x17D14FB0)
#define MDEMFJNPJBJ_JFILEHNODAO_OFFSET UNITYSDK_OFFSET(0x17D0C4F0)
#define MDEMFJNPJBJ_JIFNCAEFAFJ_OFFSET UNITYSDK_OFFSET(0x17D19310)
#define MDEMFJNPJBJ_JIJPAGGKHLB_OFFSET UNITYSDK_OFFSET(0x17D156A0)
#define MDEMFJNPJBJ_KAHKOIJCGEH_OFFSET UNITYSDK_OFFSET(0x17D156B0)
#define MDEMFJNPJBJ_KCGFGJOEAEI_OFFSET UNITYSDK_OFFSET(0x17D13D00)
#define MDEMFJNPJBJ_KEHENELEJCM_OFFSET UNITYSDK_OFFSET(0x17D155A0)
#define MDEMFJNPJBJ_KFAINHDNFOO_OFFSET UNITYSDK_OFFSET(0x17D0E250)
#define MDEMFJNPJBJ_KMCBFFJMNFA_OFFSET UNITYSDK_OFFSET(0x17D19FB0)
#define MDEMFJNPJBJ_KOJNFFPCJCO_OFFSET UNITYSDK_OFFSET(0x17D18BF0)
#define MDEMFJNPJBJ_KOLGDEHIKLH_OFFSET UNITYSDK_OFFSET(0x17D0DA40)
#define MDEMFJNPJBJ_LDEPEIOMJMN_OFFSET UNITYSDK_OFFSET(0x17D0D700)
#define MDEMFJNPJBJ_LHKEOKOPOHG_OFFSET UNITYSDK_OFFSET(0x17D084C0)
#define MDEMFJNPJBJ_MAADDKEFGNB_OFFSET UNITYSDK_OFFSET(0x17D09B90)
#define MDEMFJNPJBJ_MAEKJNLCMMC_OFFSET UNITYSDK_OFFSET(0x17D11460)
#define MDEMFJNPJBJ_MBKGDKJNOFG_OFFSET UNITYSDK_OFFSET(0x17D0DC20)
#define MDEMFJNPJBJ_MGOFLMMDHCO_OFFSET UNITYSDK_OFFSET(0x17D08EE0)
#define MDEMFJNPJBJ_MMFFNGAFOPH_OFFSET UNITYSDK_OFFSET(0x17D19F60)
#define MDEMFJNPJBJ_MOLNEANJELP_OFFSET UNITYSDK_OFFSET(0x17D136E0)
#define MDEMFJNPJBJ_MOOKKKOFKLN_OFFSET UNITYSDK_OFFSET(0x17D15730)
#define MDEMFJNPJBJ_NADCLCAMPOL_OFFSET UNITYSDK_OFFSET(0x17D0BE30)
#define MDEMFJNPJBJ_NAGGIOGNDPK_OFFSET UNITYSDK_OFFSET(0x17D16D50)
#define MDEMFJNPJBJ_NAICFLCCECC_OFFSET UNITYSDK_OFFSET(0x17D08470)
#define MDEMFJNPJBJ_NCINNHHDKCK_OFFSET UNITYSDK_OFFSET(0x17D10010)
#define MDEMFJNPJBJ_NEFHADJKAOO_OFFSET UNITYSDK_OFFSET(0x17D15D80)
#define MDEMFJNPJBJ_NLMKENKHDNP_1_OFFSET UNITYSDK_OFFSET(0x17D11800)
#define MDEMFJNPJBJ_NLMKENKHDNP_OFFSET UNITYSDK_OFFSET(0x17D09B20)
#define MDEMFJNPJBJ_NOOPJCHADBK_OFFSET UNITYSDK_OFFSET(0x17D1A6A0)
#define MDEMFJNPJBJ_NPGBPOINFNP_OFFSET UNITYSDK_OFFSET(0x17D0F820)
#define MDEMFJNPJBJ_ODHGCILMHKC_OFFSET UNITYSDK_OFFSET(0x17D0D3A0)
#define MDEMFJNPJBJ_ODIAMNLPEDG_OFFSET UNITYSDK_OFFSET(0x17D0BE90)
#define MDEMFJNPJBJ_OEJFMBMEIBG_OFFSET UNITYSDK_OFFSET(0x17D15D70)
#define MDEMFJNPJBJ_OKLLFEIJKHN_OFFSET UNITYSDK_OFFSET(0x17D09100)
#define MDEMFJNPJBJ_PBEOFHGHEHN_OFFSET UNITYSDK_OFFSET(0x17D10240)
#define MDEMFJNPJBJ_PDAADHDFGKP_OFFSET UNITYSDK_OFFSET(0x17D11470)
#define MDEMFJNPJBJ_PDCKECJKPKI_OFFSET UNITYSDK_OFFSET(0x17D0BA00)
#define MDEMFJNPJBJ_PDFOOMDMJAI_OFFSET UNITYSDK_OFFSET(0x17D0B330)
#define MDEMFJNPJBJ_PDLNDPBONKN_OFFSET UNITYSDK_OFFSET(0x17D162F0)
#define MDEMFJNPJBJ_PFFDAIAGJEM_OFFSET UNITYSDK_OFFSET(0x17D10570)
#define MDEMFJNPJBJ_PLJFBCPPALF_OFFSET UNITYSDK_OFFSET(0x17D13ED0)
#define MDEMFJNPJBJ_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x17D08B80)
#define MDEMFJNPJBJ_PMAFFJICKMN_OFFSET UNITYSDK_OFFSET(0x17D0B160)
#define MDEMFJNPJBJ_PMPJNBFMAJE_OFFSET UNITYSDK_OFFSET(0x17D089B0)
#define MDEMFJNPJBJ_PNNCLIIPJOM_OFFSET UNITYSDK_OFFSET(0x17D11CD0)
#define MDEMFJNPJBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17D0DB90)

inline static constexpr unsigned int MDEMFJNPJBJ_TypeDefinitionIndex = 71834;

class MDEMFJNPJBJ : public ::System::Object
{
public:
	// static const ::System::String* JKICJLOPHMM; // 0x0
	::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* INKHBGMBIFM; // 0x10
	::System::Collections::Generic::Dictionary_2<::MoleMole::GameplayTag, ::MoleMole::EntityHandle>* KPPCIAJGJIK; // 0x18
	::System::Collections::Generic::List_1<::Cinemachine::CinemachineVirtualCameraBase*>* NLIJMKJCKCF; // 0x20
	::System::Action* MLMKELFAHDJ; // 0x28
	::UnityEngine::Playables::PlayableDirector* JKIPDCKNFHC; // 0x30
	::System::Collections::Generic::Dictionary_2<::MoleMole::GameplayTag, ::MoleMole::EntityHandle>* MDOJGCFGNKD; // 0x38
	::MoleMole::MonoDirectorBindingReplace* FKGNMIEEBBI; // 0x40
	::System::Action* PKLDNNOOACL; // 0x48
	::UnityEngine::Transform* OKKNLLOJDLO; // 0x50
	::System::Collections::Generic::Dictionary_2<::MoleMole::GameplayTag, ::GDIJJEFFDDK*>* GLJDAGFGOCP; // 0x58
	::MoleMole::TimelineData* OADEFLADNDA; // 0x60
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Transform*, ::UnityEngine::Transform*>>* LICKCMKJHCB; // 0x68
	::System::Collections::Generic::Dictionary_2<::MoleMole::GameplayTag, ::MoleMole::EntityHandle>* GDPFHPDIHGB; // 0x70
	::System::Collections::Generic::List_1<::MoleMole::Timeline::TimelineEndMarker*>* AMANHEFIKEG; // 0x78
	::MoleMole::TimelineDataExtra* CDPLGBCPNFJ; // 0x80
	::JKMGJKOCGDE* BOHMNKBOGCG; // 0x88
	::System::Func_1<::System::Boolean>* MHNCPHIPADH; // 0x90
	::UnityEngine::Playables::PlayableDirector* EGGKOIFINIH; // 0x98
	::System::Collections::Generic::List_1<::IMNAJNLNJMI*>* JKKKOBGOONI; // 0xA0
	::System::String* DPLAHACEBFG; // 0xA8
	::UnityEngine::GameObject* APEMICKPEDD; // 0xB0
	::System::String* HBJEILGPBBD; // 0xB8
	::MoleMole::CriWareVideoPlayer* NMFKHBGOCHO; // 0xC0
	::System::Action_1<::UnityEngine::Transform*>* GIHILNHMNFE; // 0xC8
	::JBKHHHPLBEL* DAAAEJDBNFI; // 0xD0
	::UnityEngine::GameObject* CFPJGENACBB; // 0xD8
	::System::Collections::Generic::Dictionary_2<::MoleMole::GameplayTag, ::ILPGFOKEEGD>* HDCHPDLFKLF; // 0xE0
	::System::Collections::Generic::HashSet_1<::System::UInt32>* HFLPEHEGKLE; // 0xE8
	::System::Collections::Generic::HashSet_1<::MoleMole::EntityHandle>* AHOFADMOIMG; // 0xF0
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* FJKOPHOJFOG; // 0xF8
	::UnityEngine::Transform* MEABCDNPHMP; // 0x100
	::System::Action_1<::UnityEngine::Transform*>* MDDEPMJCFKM; // 0x108
	::System::String* OOAMPPOOGPL; // 0x110
	::System::Collections::Generic::HashSet_1<::MoleMole::EntityHandle>* CGDLHOLLGHN; // 0x118
	::System::Double HPBKNOCICJD; // 0x120
	::System::Double BFKJLJCAMCB; // 0x128
	::System::Double GEBHKLHBKDD; // 0x130
	::System::Boolean BBKPDBFFCII; // 0x138
	::System::Boolean OJCHGCAHPEN; // 0x139
	::System::Boolean IJLLAKHEFCK; // 0x13A
	::System::Boolean BGELNHAJGAF; // 0x13B
	::System::Boolean MGBJDCMAHPO; // 0x13C
	::System::Boolean BJINJEABELO; // 0x13D
	::System::Boolean GKONLAJKGKF; // 0x13E
	::System::Boolean HGLCEODJGED; // 0x13F
	::System::Boolean CPKJDOJKIEH; // 0x140
	::System::Byte _padding0[0x7];
	::System::Double KOFDBLFCALC; // 0x148
	::System::Boolean GMELJEMCGKK; // 0x150
	::System::Boolean KEJMMJMIMJH; // 0x151
	::System::Boolean MEMEINPDGMG; // 0x152
	::System::Boolean FKKOJNHFEGA; // 0x153
	::System::Single HMMGKADBNFO; // 0x154
	::System::Double KKJKPJEGKJC; // 0x158

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ__CTOR_OFFSET))(this);
	}

	::System::Boolean NAICFLCCECC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_NAICFLCCECC_OFFSET))(this);
	}

	::System::Void DLLMAJHLGIM(::System::Double IENOAGOAHMO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_DLLMAJHLGIM_OFFSET))(this, IENOAGOAHMO);
	}

	::System::Void EDEFLFIKNFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_EDEFLFIKNFK_OFFSET))(this);
	}

	::System::Void BOEPGMLNKCC(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_BOEPGMLNKCC_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void EIAADBIEFNO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_EIAADBIEFNO_OFFSET))(this);
	}

	::System::Void ECEBDPJEKNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_ECEBDPJEKNN_OFFSET))(this);
	}

	::System::Void DNNJOOJBJNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_DNNJOOJBJNB_OFFSET))(this);
	}

	::System::Void JAKBDOFCKAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_JAKBDOFCKAC_OFFSET))(this);
	}

	::System::Void MGOFLMMDHCO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_MGOFLMMDHCO_OFFSET))(this);
	}

	::System::Void OKLLFEIJKHN(::System::Boolean KENKJGPIIHK, ::System::Boolean NHIGIHLHJBH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_OKLLFEIJKHN_OFFSET))(this, KENKJGPIIHK, NHIGIHLHJBH);
	}

	::System::Void ODIAMNLPEDG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_ODIAMNLPEDG_OFFSET))(this);
	}

	::System::Void DHFMEMHGKKM(::System::Boolean APBCICAJOBN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_DHFMEMHGKKM_OFFSET))(this, APBCICAJOBN);
	}

	::System::Void PMAFFJICKMN(::System::Boolean HPINBCPMHJE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_PMAFFJICKMN_OFFSET))(this, HPINBCPMHJE);
	}

	::System::Void JDFMACJFPJI(::System::Boolean IKLPDMCNAEG, ::System::Boolean DEPMMOIOBMB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_JDFMACJFPJI_OFFSET))(this, IKLPDMCNAEG, DEPMMOIOBMB);
	}

	::System::Void HMFLKGBOLMP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_HMFLKGBOLMP_OFFSET))(this);
	}

	::System::Void NPGBPOINFNP(::Foundation::AssetPath CJBJONJDOLI, ::UnityEngine::GameObject* HMNECMNKIPN)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_NPGBPOINFNP_OFFSET))(this, CJBJONJDOLI, HMNECMNKIPN);
	}

	::System::Boolean NCINNHHDKCK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_NCINNHHDKCK_OFFSET))(this);
	}

	::System::Void APLMDNLEIBM(::Foundation::AssetPath CJBJONJDOLI, ::UnityEngine::GameObject* HMNECMNKIPN)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_APLMDNLEIBM_OFFSET))(this, CJBJONJDOLI, HMNECMNKIPN);
	}

	::System::Boolean LHKEOKOPOHG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_LHKEOKOPOHG_OFFSET))(this);
	}

	::MoleMole::MonoDirectorBindingReplace* DKBKFCMNMJA()
	{
		return ((::MoleMole::MonoDirectorBindingReplace*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_DKBKFCMNMJA_OFFSET))(this);
	}

	::MoleMole::TimelineData* FHGKGFIHJIN()
	{
		return ((::MoleMole::TimelineData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_FHGKGFIHJIN_OFFSET))(this);
	}

	::System::Boolean MAEKJNLCMMC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_MAEKJNLCMMC_OFFSET))(this);
	}

	::System::Double PDAADHDFGKP()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_PDAADHDFGKP_OFFSET))(this);
	}

	::System::Void AIBNFABPPGO(::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Quaternion BFBELMDIAHI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_AIBNFABPPGO_OFFSET))(this, OHOGDOMNHNK, BFBELMDIAHI);
	}

	::System::Boolean CGPHACKCMMF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_CGPHACKCMMF_OFFSET))(this);
	}

	::UnityEngine::GameObject* DKLKOGIDFLN()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_DKLKOGIDFLN_OFFSET))(this);
	}

	::System::Void NLMKENKHDNP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_NLMKENKHDNP_OFFSET))(this);
	}

	::System::Void ADGGOLMPOMM(::System::String* MJKDGBKNLEN, ::MoleMole::GameplayTag HAIHNEBPEDD)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::GameplayTag))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_ADGGOLMPOMM_OFFSET))(this, MJKDGBKNLEN, HAIHNEBPEDD);
	}

	::System::Void PNNCLIIPJOM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_PNNCLIIPJOM_OFFSET))(this);
	}

	::System::Void IEIAPELPJCB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_IEIAPELPJCB_OFFSET))(this);
	}

	::System::Void HKGMDDAJMKO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_HKGMDDAJMKO_OFFSET))(this);
	}

	::System::Void JFILEHNODAO(::System::Boolean EOADHIFJGHH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_JFILEHNODAO_OFFSET))(this, EOADHIFJGHH);
	}

	::System::Void HLGGDNLNMBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_HLGGDNLNMBH_OFFSET))(this);
	}

	::System::Void BLNHHAFGIHC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_BLNHHAFGIHC_OFFSET))(this);
	}

	::System::Void KCGFGJOEAEI(::System::Double PHFKAMHOGPP, ::System::Double MEELDKPKFKG, ::System::Boolean EPGLPGPOOJN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double, ::System::Boolean))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_KCGFGJOEAEI_OFFSET))(this, PHFKAMHOGPP, MEELDKPKFKG, EPGLPGPOOJN);
	}

	::System::Double INOOIDBHCAJ()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_INOOIDBHCAJ_OFFSET))(this);
	}

	::System::Void KOLGDEHIKLH(::MoleMole::TimelineData* AMJADGKJAPK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::TimelineData*))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_KOLGDEHIKLH_OFFSET))(this, AMJADGKJAPK);
	}

	::System::Boolean HNKNNNNIMCP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_HNKNNNNIMCP_OFFSET))(this);
	}

	::System::Void AEFOBKCKPFH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_AEFOBKCKPFH_OFFSET))(this);
	}

	::System::String* BFDNCKFGKFM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_BFDNCKFGKFM_OFFSET))(this);
	}

	::System::Void FHPOFBBPOMO(::UnityEngine::Transform* LNEEMAGIHLB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_FHPOFBBPOMO_OFFSET))(this, LNEEMAGIHLB);
	}

	::System::Void KFAINHDNFOO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_KFAINHDNFOO_OFFSET))(this);
	}

	::System::Void JFGKEEFPKKJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_JFGKEEFPKKJ_OFFSET))(this);
	}

	::System::Boolean KEHENELEJCM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_KEHENELEJCM_OFFSET))(this);
	}

	::System::Void GJNPFIOOCMM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_GJNPFIOOCMM_OFFSET))(this);
	}

	::System::Void EDKHEJBKCOC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_EDKHEJBKCOC_OFFSET))(this);
	}

	::System::Boolean FPBBPIMFFHN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_FPBBPIMFFHN_OFFSET))(this);
	}

	::System::Boolean JIJPAGGKHLB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_JIJPAGGKHLB_OFFSET))(this);
	}

	static ::System::Int32 KAHKOIJCGEH(::MoleMole::Timeline::TimelineEndMarker* PJDKMMDNJMB, ::MoleMole::Timeline::TimelineEndMarker* BABJEICGMAL)
	{
		return ((::System::Int32(*)(::MoleMole::Timeline::TimelineEndMarker*, ::MoleMole::Timeline::TimelineEndMarker*))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_KAHKOIJCGEH_OFFSET))(PJDKMMDNJMB, BABJEICGMAL);
	}

	::System::Double PMPJNBFMAJE(::System::Double ANNLDDNNCDF)
	{
		return ((::System::Double(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_PMPJNBFMAJE_OFFSET))(this, ANNLDDNNCDF);
	}

	::System::Void MOOKKKOFKLN(::MoleMole::IVideoPlayer* CEHEDIJEJFG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_MOOKKKOFKLN_OFFSET))(this, CEHEDIJEJFG);
	}

	::MoleMole::Battle::Entity* DEIPAFJBPGO(::MoleMole::GameplayTag AELLPLBJELA)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::MoleMole::GameplayTag))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_DEIPAFJBPGO_OFFSET))(this, AELLPLBJELA);
	}

	::System::Void HJFLCKFNBJM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_HJFLCKFNBJM_OFFSET))(this);
	}

	::UnityEngine::Playables::PlayableDirector* OEJFMBMEIBG()
	{
		return ((::UnityEngine::Playables::PlayableDirector*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_OEJFMBMEIBG_OFFSET))(this);
	}

	::System::Boolean HLIOKKLCGFB(::MoleMole::TimelineData* AMJADGKJAPK)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::TimelineData*))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_HLIOKKLCGFB_OFFSET))(this, AMJADGKJAPK);
	}

	::System::Void PFFDAIAGJEM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_PFFDAIAGJEM_OFFSET))(this);
	}

	::System::Void EPPOAMOHADJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_EPPOAMOHADJ_OFFSET))(this);
	}

	::System::Void NEFHADJKAOO(::UnityEngine::Transform* LNEEMAGIHLB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_NEFHADJKAOO_OFFSET))(this, LNEEMAGIHLB);
	}

	::System::Void PDLNDPBONKN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_PDLNDPBONKN_OFFSET))(this);
	}

	::System::Double GAJBMHLKGDG(::System::Double DGGHINHLNLE)
	{
		return ((::System::Double(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_GAJBMHLKGDG_OFFSET))(this, DGGHINHLNLE);
	}

	::System::Void HIIMHKCMBGK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_HIIMHKCMBGK_OFFSET))(this);
	}

	::System::Void ILLDEKMFNLL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_ILLDEKMFNLL_OFFSET))(this);
	}

	::System::Void MMFFNGAFOPH(::System::Func_1<::System::Boolean>* AKJONMHDENI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_MMFFNGAFOPH_OFFSET))(this, AKJONMHDENI);
	}

	::System::Void CIHNOHKNCJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_CIHNOHKNCJI_OFFSET))(this);
	}

	::System::Boolean PBEOFHGHEHN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_PBEOFHGHEHN_OFFSET))(this);
	}

	::System::Void FDFGBMBMMDB(::LOCOJEENBIP EPIEOPFNKKL)
	{
		return ((::System::Void(*)(::PVOID, ::LOCOJEENBIP))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_FDFGBMBMMDB_OFFSET))(this, EPIEOPFNKKL);
	}

	::System::Void HNBPNEHEIGE(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_HNBPNEHEIGE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void KMCBFFJMNFA(::System::Single FCKGMNEGIPO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_KMCBFFJMNFA_OFFSET))(this, FCKGMNEGIPO);
	}

	::System::Void CFPHOHNNBNL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_CFPHOHNNBNL_OFFSET))(this);
	}

	::System::Int32 PLJFBCPPALF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_PLJFBCPPALF_OFFSET))(this);
	}

	::System::Void MAADDKEFGNB(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_MAADDKEFGNB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void NADCLCAMPOL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_NADCLCAMPOL_OFFSET))(this);
	}

	::System::Void CBNJJDMGDHN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_CBNJJDMGDHN_OFFSET))(this);
	}

	::System::Void AEPAFHJNKHE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_AEPAFHJNKHE_OFFSET))(this);
	}

	::System::Void NAGGIOGNDPK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_NAGGIOGNDPK_OFFSET))(this);
	}

	::System::Void CMHHIOEIFLC(::System::String* JJMJOGJFGBG)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_CMHHIOEIFLC_OFFSET))(this, JJMJOGJFGBG);
	}

	::System::Void KOJNFFPCJCO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_KOJNFFPCJCO_OFFSET))(this);
	}

	::System::Void JIFNCAEFAFJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_JIFNCAEFAFJ_OFFSET))(this);
	}

	::System::Void JCFHAAHEKGN(::System::Double FNIOPKPHDEH, ::NJKPKBPHJAJ FBFPNFPEEFN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double, ::NJKPKBPHJAJ))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_JCFHAAHEKGN_OFFSET))(this, FNIOPKPHDEH, FBFPNFPEEFN);
	}

	static ::System::Void MOLNEANJELP(::GEIHCPAOKKK* OHPJHPEOFLD, ::System::Boolean EOADHIFJGHH)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*, ::System::Boolean))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_MOLNEANJELP_OFFSET))(OHPJHPEOFLD, EOADHIFJGHH);
	}

	::System::Void NLMKENKHDNP_1(::System::Double PHFKAMHOGPP, ::System::Double MEELDKPKFKG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_NLMKENKHDNP_1_OFFSET))(this, PHFKAMHOGPP, MEELDKPKFKG);
	}

	::System::Void ELKNLHJBALL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_ELKNLHJBALL_OFFSET))(this);
	}

	::System::Void LDEPEIOMJMN(::MoleMole::TimelineData* AMJADGKJAPK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::TimelineData*))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_LDEPEIOMJMN_OFFSET))(this, AMJADGKJAPK);
	}

	::System::Double ELOHBHFNPHC()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_ELOHBHFNPHC_OFFSET))(this);
	}

	::System::Void JEDNEGNFJLH(::MoleMole::TimelineData* AMJADGKJAPK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::TimelineData*))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_JEDNEGNFJLH_OFFSET))(this, AMJADGKJAPK);
	}

	static ::System::Int32 NOOPJCHADBK(::IMNAJNLNJMI* MCAIDLOCDME, ::IMNAJNLNJMI* EBDPJBFMDNB)
	{
		return ((::System::Int32(*)(::IMNAJNLNJMI*, ::IMNAJNLNJMI*))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_NOOPJCHADBK_OFFSET))(MCAIDLOCDME, EBDPJBFMDNB);
	}

	::System::Void EMEBJJIPACK(::UnityEngine::Transform* KPFFLBEMJCF, ::UnityEngine::Transform* HBDBJEEIBNJ)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_EMEBJJIPACK_OFFSET))(this, KPFFLBEMJCF, HBDBJEEIBNJ);
	}

	::System::Void PDCKECJKPKI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_PDCKECJKPKI_OFFSET))(this);
	}

	::System::Void ODHGCILMHKC(::System::Boolean KEPAPPDDELI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_ODHGCILMHKC_OFFSET))(this, KEPAPPDDELI);
	}

	::System::Void PDFOOMDMJAI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_PDFOOMDMJAI_OFFSET))(this);
	}

	static ::Il2CppArray<::System::Int32>* JEOLPOCIGDF(::UnityEngine::MdbComponent* MKEPNGJHBDN)
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::UnityEngine::MdbComponent*))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_JEOLPOCIGDF_OFFSET))(MKEPNGJHBDN);
	}

	::System::Void CMNJECGJKFN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_CMNJECGJKFN_OFFSET))(this);
	}

	::System::Void FFMBPMGGIAO(::System::String* JJMJOGJFGBG, ::System::Boolean NPPMJEIPMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_FFMBPMGGIAO_OFFSET))(this, JJMJOGJFGBG, NPPMJEIPMFC);
	}

	::System::Void IHEEOKKFOFO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_IHEEOKKFOFO_OFFSET))(this);
	}

	::System::Void BGJAMMKOHCL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_BGJAMMKOHCL_OFFSET))(this);
	}

	::System::Void MBKGDKJNOFG(::System::Boolean HPINBCPMHJE, ::MoleMole::GameplayTag HAIHNEBPEDD, ::MoleMole::TLStartEndEntityAnimatorParamControl* BHKECHHMOGC, ::System::Boolean EFBAGGPCCBB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::GameplayTag, ::MoleMole::TLStartEndEntityAnimatorParamControl*, ::System::Boolean))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ_MBKGDKJNOFG_OFFSET))(this, HPINBCPMHJE, HAIHNEBPEDD, BHKECHHMOGC, EFBAGGPCCBB);
	}
};
