#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JPIBDCCABGP.h"
#include "unitysdk/RPG/Client/LittleGameShare/TeamTowersCore/BossSkillViewType.h"
#include "unitysdk/RPG/Client/TeamTowers/TeamTowersGamePauseReason.h"
#include "unitysdk/RPG/GameCore/TeamTowersPlayerInputType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FHIFNHALHPI_HPOPMNLOLJE.h"
#include "unitysdk/RPG/MVector2.h"
class BDMGLFNMFBD;
class BFJEFCKAKIG;
class BMKLCCOJMOF;
class CAHLPKGIABH;
class CHFDBMHCGFL;
class COMJKPOMILA;
class DLFGNLPOGJH;
class HMOLKGEPDDC;
class HNLKNLJBHDD;
class IAJLHKIHBFB;
class INEOKPGLKKN;
class JCFCFDIFPFB;
class JEHEMLENCIE;
class JFAIGANLDBK;
class JKKOAAANPGL;
class KEGNPEGPLPM;
class KPCDEJGJHBK;
class LCEANMDMFNF;
class LDEGOKJHDDC;
class MDJMFENLDJL;
class NDNOFFMAMFJ;
class PHBGENKFABA;
class PNGAOEKBINJ_MACFFHIPONI;
namespace Cinemachine { class CinemachineBrain; }
namespace Entitas { class IEntity; }
namespace Google::Protobuf { class ByteString; }
namespace RPG::Client::TeamTowers { class TeamTowersPVPService; }
namespace System { class Action; }
namespace System { class Nullable; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define ODCELNBAEIB_ABBFIFDACEB_OFFSET UNITYSDK_OFFSET(0xBD831B0)
#define ODCELNBAEIB_ABIEMACLLAE_OFFSET UNITYSDK_OFFSET(0xBD79640)
#define ODCELNBAEIB_ADD_ONGAMEFINISHED_OFFSET UNITYSDK_OFFSET(0xBD83DB0)
#define ODCELNBAEIB_AFKPLPNCOKF_OFFSET UNITYSDK_OFFSET(0xBD85810)
#define ODCELNBAEIB_AFMCCPMLGGJ_OFFSET UNITYSDK_OFFSET(0xBD857D0)
#define ODCELNBAEIB_AGECGCCPFJK_OFFSET UNITYSDK_OFFSET(0xBD793D0)
#define ODCELNBAEIB_AIDHPHHEOME_OFFSET UNITYSDK_OFFSET(0xBD7C5E0)
#define ODCELNBAEIB_ALJOPAPDDFB_OFFSET UNITYSDK_OFFSET(0xBD83C30)
#define ODCELNBAEIB_APBICGGPPJH_OFFSET UNITYSDK_OFFSET(0xBD83130)
#define ODCELNBAEIB_BAIKMOCKGOK_OFFSET UNITYSDK_OFFSET(0xBD7FA30)
#define ODCELNBAEIB_BEGENCAEKOA_OFFSET UNITYSDK_OFFSET(0xBD7B940)
#define ODCELNBAEIB_BGHKDLONBOD_OFFSET UNITYSDK_OFFSET(0xBD7AC70)
#define ODCELNBAEIB_BHBMKMJENOF_OFFSET UNITYSDK_OFFSET(0xBD7C3F0)
#define ODCELNBAEIB_BIGDDMHLNGD_OFFSET UNITYSDK_OFFSET(0xBD83D60)
#define ODCELNBAEIB_BLMHANJLCIL_OFFSET UNITYSDK_OFFSET(0xBD80F00)
#define ODCELNBAEIB_BOMLLOIINAG_OFFSET UNITYSDK_OFFSET(0xBD80FF0)
#define ODCELNBAEIB_CBPJMMJNAGD_OFFSET UNITYSDK_OFFSET(0xBD7AD30)
#define ODCELNBAEIB_CHJOKOINFJI_OFFSET UNITYSDK_OFFSET(0xBD7C210)
#define ODCELNBAEIB_CIHKJANLFMA_OFFSET UNITYSDK_OFFSET(0xBD7DB40)
#define ODCELNBAEIB_CMMBLOKDEFD_OFFSET UNITYSDK_OFFSET(0xBD7BBD0)
#define ODCELNBAEIB_COINAEHBAGG_OFFSET UNITYSDK_OFFSET(0xBD81CA0)
#define ODCELNBAEIB_COLAIMEGMJM_OFFSET UNITYSDK_OFFSET(0xBD86020)
#define ODCELNBAEIB_CPFDONMCHII_OFFSET UNITYSDK_OFFSET(0xBD85E60)
#define ODCELNBAEIB_CTOR_OFFSET UNITYSDK_OFFSET(0xBD86AD0)
#define ODCELNBAEIB_DCJBEPHAIEP_OFFSET UNITYSDK_OFFSET(0xBD804F0)
#define ODCELNBAEIB_DCLLANJEKJM_OFFSET UNITYSDK_OFFSET(0xBD808F0)
#define ODCELNBAEIB_DGGCDFBEPFB_OFFSET UNITYSDK_OFFSET(0xBD85C00)
#define ODCELNBAEIB_DGGLPBIDGBI_OFFSET UNITYSDK_OFFSET(0xBD7FE30)
#define ODCELNBAEIB_ECIGICCMJFE_OFFSET UNITYSDK_OFFSET(0xBD7ADF0)
#define ODCELNBAEIB_EENBHJNFGPK_OFFSET UNITYSDK_OFFSET(0xBD80750)
#define ODCELNBAEIB_EIOHFGMECDK_OFFSET UNITYSDK_OFFSET(0xBD81550)
#define ODCELNBAEIB_EKGBJAJLNCP_OFFSET UNITYSDK_OFFSET(0xBD814E0)
#define ODCELNBAEIB_ELNDLHPMPPE_OFFSET UNITYSDK_OFFSET(0xBD82910)
#define ODCELNBAEIB_FCLEOKHGOHN_OFFSET UNITYSDK_OFFSET(0xBD7B130)
#define ODCELNBAEIB_FIGFMHNINEE_OFFSET UNITYSDK_OFFSET(0xBD85FA0)
#define ODCELNBAEIB_FNKKGMGFMKP_OFFSET UNITYSDK_OFFSET(0xBD7E970)
#define ODCELNBAEIB_FNPNAEJCMNB_OFFSET UNITYSDK_OFFSET(0xBD86480)
#define ODCELNBAEIB_GANAGDNJMMP_OFFSET UNITYSDK_OFFSET(0xBD86590)
#define ODCELNBAEIB_GBJBCEKDNGA_OFFSET UNITYSDK_OFFSET(0xBD7A7E0)
#define ODCELNBAEIB_GCLJBCGCBJJ_OFFSET UNITYSDK_OFFSET(0xBD7FC00)
#define ODCELNBAEIB_GETENTITYNAME_OFFSET UNITYSDK_OFFSET(0xBD83E90)
#define ODCELNBAEIB_GETVIEWROOT_OFFSET UNITYSDK_OFFSET(0xBD7A630)
#define ODCELNBAEIB_GET_AIBEHAVIORSERVICE_OFFSET UNITYSDK_OFFSET(0xBD83D90)
#define ODCELNBAEIB_GET_GUIDESERVICE_OFFSET UNITYSDK_OFFSET(0xBD83D70)
#define ODCELNBAEIB_GGMEBLCFNLC_OFFSET UNITYSDK_OFFSET(0xBD7FCF0)
#define ODCELNBAEIB_GHLGDOENOCJ_OFFSET UNITYSDK_OFFSET(0xBD7D2F0)
#define ODCELNBAEIB_GJGAAIGFDGA_OFFSET UNITYSDK_OFFSET(0xBD7D380)
#define ODCELNBAEIB_GPAGCFBGKNH_OFFSET UNITYSDK_OFFSET(0xBD829B0)
#define ODCELNBAEIB_HCBJIMBAJKJ_OFFSET UNITYSDK_OFFSET(0xBD81260)
#define ODCELNBAEIB_HDBHNBFKPAL_OFFSET UNITYSDK_OFFSET(0xBD83970)
#define ODCELNBAEIB_HEMMKMPLGEM_OFFSET UNITYSDK_OFFSET(0xBD7F520)
#define ODCELNBAEIB_HKGFIGCGMFB_OFFSET UNITYSDK_OFFSET(0xBD7C4D0)
#define ODCELNBAEIB_HOPFDENOMLM_OFFSET UNITYSDK_OFFSET(0xBD82B20)
#define ODCELNBAEIB_IBNBGMIJMFP_OFFSET UNITYSDK_OFFSET(0xBD7BE10)
#define ODCELNBAEIB_IFLKMFFPALH_OFFSET UNITYSDK_OFFSET(0xBD7DFB0)
#define ODCELNBAEIB_IHKPFNNKLHO_OFFSET UNITYSDK_OFFSET(0xBD7F1B0)
#define ODCELNBAEIB_IINLDKAGECP_OFFSET UNITYSDK_OFFSET(0xBD7B6C0)
#define ODCELNBAEIB_ILJPKPFHACM_OFFSET UNITYSDK_OFFSET(0xBD7E090)
#define ODCELNBAEIB_INHBHLGKELG_OFFSET UNITYSDK_OFFSET(0xBD7ABC0)
#define ODCELNBAEIB_JCAAFEHJMGD_OFFSET UNITYSDK_OFFSET(0xBD7B6D0)
#define ODCELNBAEIB_JDGIIKNKDLG_OFFSET UNITYSDK_OFFSET(0xBD79840)
#define ODCELNBAEIB_JECMHAIDNHN_OFFSET UNITYSDK_OFFSET(0xBD79BF0)
#define ODCELNBAEIB_JFJNCLBGLBK_OFFSET UNITYSDK_OFFSET(0xBD83010)
#define ODCELNBAEIB_JHPICOOOEFH_OFFSET UNITYSDK_OFFSET(0xBD80630)
#define ODCELNBAEIB_JJAGCENPGNJ_OFFSET UNITYSDK_OFFSET(0xBD7C1B0)
#define ODCELNBAEIB_JLEFHCBBLGL_OFFSET UNITYSDK_OFFSET(0xBD7CCF0)
#define ODCELNBAEIB_KCJNHBPPAJC_OFFSET UNITYSDK_OFFSET(0xBD7C630)
#define ODCELNBAEIB_KEEGEHLIPGM_OFFSET UNITYSDK_OFFSET(0xBD833E0)
#define ODCELNBAEIB_KFJDNFLACAO_OFFSET UNITYSDK_OFFSET(0xBD7E350)
#define ODCELNBAEIB_KJKJDAGBNFH_OFFSET UNITYSDK_OFFSET(0xBD79EA0)
#define ODCELNBAEIB_LMCMHHNGJHL_OFFSET UNITYSDK_OFFSET(0xBD7FD80)
#define ODCELNBAEIB_LMKOFGNKNKO_OFFSET UNITYSDK_OFFSET(0xBD85C80)
#define ODCELNBAEIB_MDLAAHENDPP_OFFSET UNITYSDK_OFFSET(0xBD7B3F0)
#define ODCELNBAEIB_MFMGDIKPOIF_OFFSET UNITYSDK_OFFSET(0xBD7FAC0)
#define ODCELNBAEIB_MGMLPPCOONF_OFFSET UNITYSDK_OFFSET(0xBD86A50)
#define ODCELNBAEIB_MHEBKIOKMCG_OFFSET UNITYSDK_OFFSET(0xBD862A0)
#define ODCELNBAEIB_MINAEBKNGLD_OFFSET UNITYSDK_OFFSET(0xBD7FA00)
#define ODCELNBAEIB_MLEMMFLFMMI_OFFSET UNITYSDK_OFFSET(0xBD7B520)
#define ODCELNBAEIB_MNLFCOJAKLG_OFFSET UNITYSDK_OFFSET(0xBD83A60)
#define ODCELNBAEIB_MOCKHKNBKLN_OFFSET UNITYSDK_OFFSET(0xBD7C7D0)
#define ODCELNBAEIB_MPOHBJNGBME_OFFSET UNITYSDK_OFFSET(0xBD7BAB0)
#define ODCELNBAEIB_NGPCFNFBKOH_OFFSET UNITYSDK_OFFSET(0xBD86160)
#define ODCELNBAEIB_NJMBCBGLHAK_OFFSET UNITYSDK_OFFSET(0xBD82F20)
#define ODCELNBAEIB_NOBPDIODKPH_OFFSET UNITYSDK_OFFSET(0xBD7A450)
#define ODCELNBAEIB_OCCCKELEAEK_OFFSET UNITYSDK_OFFSET(0xBD797C0)
#define ODCELNBAEIB_OEFNMJMLENC_OFFSET UNITYSDK_OFFSET(0xBD82620)
#define ODCELNBAEIB_OGBHANJIFIH_OFFSET UNITYSDK_OFFSET(0xBD7D9E0)
#define ODCELNBAEIB_OLIDAMGBGNL_OFFSET UNITYSDK_OFFSET(0xBD85E20)
#define ODCELNBAEIB_OMPEIIPBIIL_OFFSET UNITYSDK_OFFSET(0xBD79D50)
#define ODCELNBAEIB_OOEMJFNNPFK_OFFSET UNITYSDK_OFFSET(0xBD7F490)
#define ODCELNBAEIB_OPDOFIKFEDE_OFFSET UNITYSDK_OFFSET(0xBD825A0)
#define ODCELNBAEIB_PBICOGKGPMP_OFFSET UNITYSDK_OFFSET(0xBD7BD60)
#define ODCELNBAEIB_PEOOHJOEOAM_OFFSET UNITYSDK_OFFSET(0xBD7C470)
#define ODCELNBAEIB_PFCJCHPHHNN_OFFSET UNITYSDK_OFFSET(0xBD85FE0)
#define ODCELNBAEIB_PHGNILLNJFI_OFFSET UNITYSDK_OFFSET(0xBD82E00)
#define ODCELNBAEIB_PHLJAKOLKGP_OFFSET UNITYSDK_OFFSET(0xBD82F90)
#define ODCELNBAEIB_PICNHDPLOIK_OFFSET UNITYSDK_OFFSET(0xBD80C40)
#define ODCELNBAEIB_PLLHEFGAPEH_OFFSET UNITYSDK_OFFSET(0xBD7A0F0)
#define ODCELNBAEIB_PPEHCFDMFOE_OFFSET UNITYSDK_OFFSET(0xBD7BC70)
#define ODCELNBAEIB_PPOHPCPAPGA_OFFSET UNITYSDK_OFFSET(0xBD7B740)
#define ODCELNBAEIB_REMOVE_ONGAMEFINISHED_OFFSET UNITYSDK_OFFSET(0xBD83E20)
#define ODCELNBAEIB_SET_AIBEHAVIORSERVICE_OFFSET UNITYSDK_OFFSET(0xBD83DA0)
#define ODCELNBAEIB_SET_GUIDESERVICE_OFFSET UNITYSDK_OFFSET(0xBD83D80)
#define ODCELNBAEIB__ONCLEAR_OFFSET UNITYSDK_OFFSET(0xBD85560)
#define ODCELNBAEIB__ONINIT_OFFSET UNITYSDK_OFFSET(0xBD83F00)
#define ODCELNBAEIB__ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xBD853F0)
#define ODCELNBAEIB__ONSTART_OFFSET UNITYSDK_OFFSET(0xBD85070)
#define ODCELNBAEIB__ONSTOP_OFFSET UNITYSDK_OFFSET(0xBD85470)
#define ODCELNBAEIB__ONTICK_OFFSET UNITYSDK_OFFSET(0xBD85290)
#define ODCELNBAEIB___ONPLAYSWITCHBOSSPERFORMANCE_B__54_0_OFFSET UNITYSDK_OFFSET(0xBD86B30)

	class ODCELNBAEIB : public ::JPIBDCCABGP
	{
	public:
		::CHFDBMHCGFL* PNHDCCBFMNL; // 0xD8
		::HMOLKGEPDDC* PEMECCEEIFN; // 0xE0
		::System::Collections::Generic::List_1<::HNLKNLJBHDD*>* GPHEGONIHKO; // 0xE8
		::INEOKPGLKKN* OFLACOJJKOM; // 0xF0
		::RPG::Client::TeamTowers::TeamTowersPVPService* HBLBHLHLBLL; // 0xF8
		::System::Action* OnGameFinished; // 0x100
		::NDNOFFMAMFJ* HMGIMNLPHJM; // 0x108
		::DLFGNLPOGJH* _GuideService_k__BackingField; // 0x110
		::HMOLKGEPDDC* MOAIAMBLIIK; // 0x118
		::KEGNPEGPLPM* OIGEMMDNEHF; // 0x120
		::LDEGOKJHDDC* _AIBehaviorService_k__BackingField; // 0x128
		::JEHEMLENCIE* OLNEEDIAGBF; // 0x130
		::PNGAOEKBINJ_MACFFHIPONI* PNOEDHOOOGK; // 0x138
		::CHFDBMHCGFL* EDGMJHEAOMJ; // 0x140
		::Cinemachine::CinemachineBrain* PBMKBFNKDGD; // 0x148
		::System::Boolean LJNCEGJFDOD; // 0x150
		::System::Boolean NAPJOMKPPEG; // 0x151
		::System::Byte _padding0[0x2];
		::System::Nullable* OFABLKBBNHC; // 0x154
		::RPG::Client::TeamTowers::TeamTowersGamePauseReason JFHCMNAEEBA; // 0x15C
		::System::Nullable* DLFPFLOAGGG; // 0x160
		::UnityEngine::Vector3 LOMMNBIANJO; // 0x168
		::UnityEngine::Vector3 JHLJODHMEMP; // 0x174
		// static const ::System::String* JDGCBDIPECD; // 0x0
		// static const ::System::String* OFIBDNHOICD; // 0x0
		// static const ::System::String* CNDGHMEANAE; // 0x0
		// static const ::System::String* DMFLDIEEPKA; // 0x0
		// static const ::System::String* CKDFEGPNLIN; // 0x0
		// static const ::System::String* IEJDHKLLBHE; // 0x0
		// static const ::System::String* AGNGPHMAJHN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCELNBAEIB_CTOR_OFFSET))(this);
		}

		::System::Single AGECGCCPFJK(::HNLKNLJBHDD* a1)
		{
			return ((::System::Single(*)(::PVOID, ::HNLKNLJBHDD*))((::PBYTE)hIl2Cpp + ODCELNBAEIB_AGECGCCPFJK_OFFSET))(this, a1);
		}

		::System::Single JDGIIKNKDLG(::HNLKNLJBHDD* a1)
		{
			return ((::System::Single(*)(::PVOID, ::HNLKNLJBHDD*))((::PBYTE)hIl2Cpp + ODCELNBAEIB_JDGIIKNKDLG_OFFSET))(this, a1);
		}

		::System::Void JECMHAIDNHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCELNBAEIB_JECMHAIDNHN_OFFSET))(this);
		}

		::System::Single OMPEIIPBIIL()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCELNBAEIB_OMPEIIPBIIL_OFFSET))(this);
		}

		::System::Void KJKJDAGBNFH(::HNLKNLJBHDD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNLKNLJBHDD*))((::PBYTE)hIl2Cpp + ODCELNBAEIB_KJKJDAGBNFH_OFFSET))(this, a1);
		}

		::System::Single PLLHEFGAPEH(::HNLKNLJBHDD* a1, ::System::Int32 a2)
		{
			return ((::System::Single(*)(::PVOID, ::HNLKNLJBHDD*, ::System::Int32))((::PBYTE)hIl2Cpp + ODCELNBAEIB_PLLHEFGAPEH_OFFSET))(this, a1, a2);
		}

		::System::Boolean NOBPDIODKPH(::System::Int32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + ODCELNBAEIB_NOBPDIODKPH_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Transform* GetViewRoot(::Entitas::IEntity* a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + ODCELNBAEIB_GETVIEWROOT_OFFSET))(this, a1);
		}

		::System::Void GBJBCEKDNGA(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ODCELNBAEIB_GBJBCEKDNGA_OFFSET))(this, a1);
		}

		::System::Void ECIGICCMJFE(::System::Int32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + ODCELNBAEIB_ECIGICCMJFE_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* FCLEOKHGOHN(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ODCELNBAEIB_FCLEOKHGOHN_OFFSET))(this, a1);
		}

		::System::UInt32 MDLAAHENDPP(::HNLKNLJBHDD* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::HNLKNLJBHDD*))((::PBYTE)hIl2Cpp + ODCELNBAEIB_MDLAAHENDPP_OFFSET))(this, a1);
		}

		::System::Void MLEMMFLFMMI(::System::Boolean a1, ::RPG::Client::TeamTowers::TeamTowersGamePauseReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::TeamTowers::TeamTowersGamePauseReason))((::PBYTE)hIl2Cpp + ODCELNBAEIB_MLEMMFLFMMI_OFFSET))(this, a1, a2);
		}

		::System::Void JCAAFEHJMGD(::System::UInt32 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + ODCELNBAEIB_JCAAFEHJMGD_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 BEGENCAEKOA(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ODCELNBAEIB_BEGENCAEKOA_OFFSET))(this, a1);
		}

		::CAHLPKGIABH* MPOHBJNGBME(::HNLKNLJBHDD* a1)
		{
			return ((::CAHLPKGIABH*(*)(::PVOID, ::HNLKNLJBHDD*))((::PBYTE)hIl2Cpp + ODCELNBAEIB_MPOHBJNGBME_OFFSET))(this, a1);
		}

		::KPCDEJGJHBK* CMMBLOKDEFD(::HNLKNLJBHDD* a1)
		{
			return ((::KPCDEJGJHBK*(*)(::PVOID, ::HNLKNLJBHDD*))((::PBYTE)hIl2Cpp + ODCELNBAEIB_CMMBLOKDEFD_OFFSET))(this, a1);
		}

		::BDMGLFNMFBD* PPEHCFDMFOE()
		{
			return ((::BDMGLFNMFBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCELNBAEIB_PPEHCFDMFOE_OFFSET))(this);
		}

		::System::Void IBNBGMIJMFP(::RPG::GameCore::TeamTowersPlayerInputType a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamTowersPlayerInputType, ::System::Action*))((::PBYTE)hIl2Cpp + ODCELNBAEIB_IBNBGMIJMFP_OFFSET))(this, a1, a2);
		}

		::System::Void CHJOKOINFJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCELNBAEIB_CHJOKOINFJI_OFFSET))(this);
		}

		::System::Void BHBMKMJENOF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCELNBAEIB_BHBMKMJENOF_OFFSET))(this);
		}

		::System::Void PEOOHJOEOAM(::System::String* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + ODCELNBAEIB_PEOOHJOEOAM_OFFSET))(this, a1, a2);
		}

		::System::Void AIDHPHHEOME()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCELNBAEIB_AIDHPHHEOME_OFFSET))(this);
		}

		::System::Void MOCKHKNBKLN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCELNBAEIB_MOCKHKNBKLN_OFFSET))(this);
		}

		::System::Void GHLGDOENOCJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCELNBAEIB_GHLGDOENOCJ_OFFSET))(this);
		}

		::System::Void GJGAAIGFDGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCELNBAEIB_GJGAAIGFDGA_OFFSET))(this);
		}

		::System::Void CIHKJANLFMA(::Entitas::IEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + ODCELNBAEIB_CIHKJANLFMA_OFFSET))(this, a1);
		}

		::System::Void IFLKMFFPALH(::Entitas::IEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + ODCELNBAEIB_IFLKMFFPALH_OFFSET))(this, a1);
		}

		::System::Void KFJDNFLACAO(::System::Int32 a1, ::Entitas::IEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + ODCELNBAEIB_KFJDNFLACAO_OFFSET))(this, a1, a2);
		}

		::System::Void KCJNHBPPAJC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCELNBAEIB_KCJNHBPPAJC_OFFSET))(this);
		}

		::System::Void MFMGDIKPOIF(::System::Int32 a1, ::Entitas::IEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + ODCELNBAEIB_MFMGDIKPOIF_OFFSET))(this, a1, a2);
		}

		::System::Void BAIKMOCKGOK(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ODCELNBAEIB_BAIKMOCKGOK_OFFSET))(this, a1);
		}

		::System::Void FNKKGMGFMKP(::HNLKNLJBHDD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNLKNLJBHDD*))((::PBYTE)hIl2Cpp + ODCELNBAEIB_FNKKGMGFMKP_OFFSET))(this, a1);
		}

		::System::Void IHKPFNNKLHO(::HNLKNLJBHDD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNLKNLJBHDD*))((::PBYTE)hIl2Cpp + ODCELNBAEIB_IHKPFNNKLHO_OFFSET))(this, a1);
		}

		::System::Void OOEMJFNNPFK(::HNLKNLJBHDD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNLKNLJBHDD*))((::PBYTE)hIl2Cpp + ODCELNBAEIB_OOEMJFNNPFK_OFFSET))(this, a1);
		}

		::System::Void GGMEBLCFNLC(::HNLKNLJBHDD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNLKNLJBHDD*))((::PBYTE)hIl2Cpp + ODCELNBAEIB_GGMEBLCFNLC_OFFSET))(this, a1);
		}

		::System::Void HEMMKMPLGEM(::HNLKNLJBHDD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNLKNLJBHDD*))((::PBYTE)hIl2Cpp + ODCELNBAEIB_HEMMKMPLGEM_OFFSET))(this, a1);
		}

		::System::Void DGGLPBIDGBI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ODCELNBAEIB_DGGLPBIDGBI_OFFSET))(this, a1);
		}

		::System::Void DCJBEPHAIEP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ODCELNBAEIB_DCJBEPHAIEP_OFFSET))(this, a1);
		}

		::System::Void JHPICOOOEFH(::FHIFNHALHPI_HPOPMNLOLJE a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHIFNHALHPI_HPOPMNLOLJE))((::PBYTE)hIl2Cpp + ODCELNBAEIB_JHPICOOOEFH_OFFSET))(this, a1);
		}

		::System::Void PPOHPCPAPGA(::System::Int32 a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + ODCELNBAEIB_PPOHPCPAPGA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EENBHJNFGPK(::HMOLKGEPDDC* a1, ::UnityEngine::Transform* a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::HMOLKGEPDDC*, ::UnityEngine::Transform*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + ODCELNBAEIB_EENBHJNFGPK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DCLLANJEKJM(::FHIFNHALHPI_HPOPMNLOLJE a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHIFNHALHPI_HPOPMNLOLJE))((::PBYTE)hIl2Cpp + ODCELNBAEIB_DCLLANJEKJM_OFFSET))(this, a1);
		}

		::System::Void PICNHDPLOIK(::HNLKNLJBHDD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNLKNLJBHDD*))((::PBYTE)hIl2Cpp + ODCELNBAEIB_PICNHDPLOIK_OFFSET))(this, a1);
		}

		::System::Void ILJPKPFHACM(::HNLKNLJBHDD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNLKNLJBHDD*))((::PBYTE)hIl2Cpp + ODCELNBAEIB_ILJPKPFHACM_OFFSET))(this, a1);
		}

		::System::Void BLMHANJLCIL(::JFAIGANLDBK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFAIGANLDBK*))((::PBYTE)hIl2Cpp + ODCELNBAEIB_BLMHANJLCIL_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* GCLJBCGCBJJ(::System::UInt32 a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ODCELNBAEIB_GCLJBCGCBJJ_OFFSET))(this, a1);
		}

		::System::Void BOMLLOIINAG(::System::UInt32 a1, ::System::UInt64 a2, ::System::UInt32 a3, ::RPG::MVector2 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt64, ::System::UInt32, ::RPG::MVector2))((::PBYTE)hIl2Cpp + ODCELNBAEIB_BOMLLOIINAG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void HCBJIMBAJKJ(::HNLKNLJBHDD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNLKNLJBHDD*))((::PBYTE)hIl2Cpp + ODCELNBAEIB_HCBJIMBAJKJ_OFFSET))(this, a1);
		}

		::System::Void EKGBJAJLNCP(::System::UInt32 a1, ::RPG::Client::LittleGameShare::TeamTowersCore::BossSkillViewType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::LittleGameShare::TeamTowersCore::BossSkillViewType))((::PBYTE)hIl2Cpp + ODCELNBAEIB_EKGBJAJLNCP_OFFSET))(this, a1, a2);
		}

		::PHBGENKFABA* EIOHFGMECDK(::HNLKNLJBHDD* a1, ::HNLKNLJBHDD* a2)
		{
			return ((::PHBGENKFABA*(*)(::PVOID, ::HNLKNLJBHDD*, ::HNLKNLJBHDD*))((::PBYTE)hIl2Cpp + ODCELNBAEIB_EIOHFGMECDK_OFFSET))(this, a1, a2);
		}

		::System::Void COINAEHBAGG(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::MVector2 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::MVector2))((::PBYTE)hIl2Cpp + ODCELNBAEIB_COINAEHBAGG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OEFNMJMLENC(::MDJMFENLDJL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDJMFENLDJL*))((::PBYTE)hIl2Cpp + ODCELNBAEIB_OEFNMJMLENC_OFFSET))(this, a1);
		}

		::System::Void ELNDLHPMPPE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ODCELNBAEIB_ELNDLHPMPPE_OFFSET))(this, a1);
		}

		::System::Void HOPFDENOMLM(::System::UInt64 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Int32))((::PBYTE)hIl2Cpp + ODCELNBAEIB_HOPFDENOMLM_OFFSET))(this, a1, a2);
		}

		::System::Void PHGNILLNJFI(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + ODCELNBAEIB_PHGNILLNJFI_OFFSET))(this, a1, a2);
		}

		::System::Void NJMBCBGLHAK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ODCELNBAEIB_NJMBCBGLHAK_OFFSET))(this, a1);
		}

		::System::Void GPAGCFBGKNH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ODCELNBAEIB_GPAGCFBGKNH_OFFSET))(this, a1);
		}

		::System::Void JLEFHCBBLGL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ODCELNBAEIB_JLEFHCBBLGL_OFFSET))(this, a1);
		}

		::System::Void HKGFIGCGMFB(::System::String* a1, ::UnityEngine::GameObject* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + ODCELNBAEIB_HKGFIGCGMFB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PHLJAKOLKGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCELNBAEIB_PHLJAKOLKGP_OFFSET))(this);
		}

		::System::Void JFJNCLBGLBK(::System::String* a1, ::HNLKNLJBHDD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::HNLKNLJBHDD*))((::PBYTE)hIl2Cpp + ODCELNBAEIB_JFJNCLBGLBK_OFFSET))(this, a1, a2);
		}

		::System::Void APBICGGPPJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCELNBAEIB_APBICGGPPJH_OFFSET))(this);
		}

		::System::Void ABBFIFDACEB(::HNLKNLJBHDD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNLKNLJBHDD*))((::PBYTE)hIl2Cpp + ODCELNBAEIB_ABBFIFDACEB_OFFSET))(this, a1);
		}

		::System::Void OGBHANJIFIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCELNBAEIB_OGBHANJIFIH_OFFSET))(this);
		}

		::System::Void KEEGEHLIPGM(::BDMGLFNMFBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BDMGLFNMFBD*))((::PBYTE)hIl2Cpp + ODCELNBAEIB_KEEGEHLIPGM_OFFSET))(this, a1);
		}

		::System::Boolean HDBHNBFKPAL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCELNBAEIB_HDBHNBFKPAL_OFFSET))(this);
		}

		::System::Void MNLFCOJAKLG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ODCELNBAEIB_MNLFCOJAKLG_OFFSET))(this, a1);
		}

		::System::Void ALJOPAPDDFB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ODCELNBAEIB_ALJOPAPDDFB_OFFSET))(this, a1);
		}

		::BMKLCCOJMOF* CBPJMMJNAGD(::System::UInt32 a1)
		{
			return ((::BMKLCCOJMOF*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ODCELNBAEIB_CBPJMMJNAGD_OFFSET))(this, a1);
		}

		::JKKOAAANPGL* OPDOFIKFEDE()
		{
			return ((::JKKOAAANPGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCELNBAEIB_OPDOFIKFEDE_OFFSET))(this);
		}

		::HNLKNLJBHDD* INHBHLGKELG()
		{
			return ((::HNLKNLJBHDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCELNBAEIB_INHBHLGKELG_OFFSET))(this);
		}

		::HNLKNLJBHDD* LMCMHHNGJHL()
		{
			return ((::HNLKNLJBHDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCELNBAEIB_LMCMHHNGJHL_OFFSET))(this);
		}

		::HNLKNLJBHDD* PBICOGKGPMP()
		{
			return ((::HNLKNLJBHDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCELNBAEIB_PBICOGKGPMP_OFFSET))(this);
		}

		::LCEANMDMFNF* BGHKDLONBOD()
		{
			return ((::LCEANMDMFNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCELNBAEIB_BGHKDLONBOD_OFFSET))(this);
		}

		::JEHEMLENCIE* BIGDDMHLNGD()
		{
			return ((::JEHEMLENCIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCELNBAEIB_BIGDDMHLNGD_OFFSET))(this);
		}

		::DLFGNLPOGJH* get_GuideService()
		{
			return ((::DLFGNLPOGJH*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCELNBAEIB_GET_GUIDESERVICE_OFFSET))(this);
		}

		::System::Void set_GuideService(::DLFGNLPOGJH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DLFGNLPOGJH*))((::PBYTE)hIl2Cpp + ODCELNBAEIB_SET_GUIDESERVICE_OFFSET))(this, a1);
		}

		::LDEGOKJHDDC* get_AIBehaviorService()
		{
			return ((::LDEGOKJHDDC*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCELNBAEIB_GET_AIBEHAVIORSERVICE_OFFSET))(this);
		}

		::System::Void set_AIBehaviorService(::LDEGOKJHDDC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDEGOKJHDDC*))((::PBYTE)hIl2Cpp + ODCELNBAEIB_SET_AIBEHAVIORSERVICE_OFFSET))(this, a1);
		}

		::System::Boolean MINAEBKNGLD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCELNBAEIB_MINAEBKNGLD_OFFSET))(this);
		}

		::BFJEFCKAKIG* JJAGCENPGNJ()
		{
			return ((::BFJEFCKAKIG*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCELNBAEIB_JJAGCENPGNJ_OFFSET))(this);
		}

		::System::UInt64 ABIEMACLLAE()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCELNBAEIB_ABIEMACLLAE_OFFSET))(this);
		}

		::System::Void add_OnGameFinished(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ODCELNBAEIB_ADD_ONGAMEFINISHED_OFFSET))(this, a1);
		}

		::System::Void remove_OnGameFinished(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ODCELNBAEIB_REMOVE_ONGAMEFINISHED_OFFSET))(this, a1);
		}

		::System::Boolean IINLDKAGECP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCELNBAEIB_IINLDKAGECP_OFFSET))(this);
		}

		::JKKOAAANPGL* OCCCKELEAEK()
		{
			return ((::JKKOAAANPGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCELNBAEIB_OCCCKELEAEK_OFFSET))(this);
		}

		::System::String* GetEntityName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCELNBAEIB_GETENTITYNAME_OFFSET))(this);
		}

		::System::Void _OnInit(::IAJLHKIHBFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAJLHKIHBFB*))((::PBYTE)hIl2Cpp + ODCELNBAEIB__ONINIT_OFFSET))(this, a1);
		}

		::System::Void _OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCELNBAEIB__ONSTART_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ODCELNBAEIB__ONTICK_OFFSET))(this, a1);
		}

		::System::Void _OnLateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ODCELNBAEIB__ONLATEUPDATE_OFFSET))(this, a1);
		}

		::System::Void _OnStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCELNBAEIB__ONSTOP_OFFSET))(this);
		}

		::System::Void _OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCELNBAEIB__ONCLEAR_OFFSET))(this);
		}

		::System::Boolean AFMCCPMLGGJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCELNBAEIB_AFMCCPMLGGJ_OFFSET))(this);
		}

		::System::Void AFKPLPNCOKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCELNBAEIB_AFKPLPNCOKF_OFFSET))(this);
		}

		::System::Void LMKOFGNKNKO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCELNBAEIB_LMKOFGNKNKO_OFFSET))(this);
		}

		::System::Void OLIDAMGBGNL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCELNBAEIB_OLIDAMGBGNL_OFFSET))(this);
		}

		::System::Void CPFDONMCHII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCELNBAEIB_CPFDONMCHII_OFFSET))(this);
		}

		::System::Void FIGFMHNINEE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCELNBAEIB_FIGFMHNINEE_OFFSET))(this);
		}

		::System::Void PFCJCHPHHNN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCELNBAEIB_PFCJCHPHHNN_OFFSET))(this);
		}

		::System::Void COLAIMEGMJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCELNBAEIB_COLAIMEGMJM_OFFSET))(this);
		}

		::System::Void NGPCFNFBKOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCELNBAEIB_NGPCFNFBKOH_OFFSET))(this);
		}

		::System::Void MHEBKIOKMCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCELNBAEIB_MHEBKIOKMCG_OFFSET))(this);
		}

		::System::Void FNPNAEJCMNB(::System::UInt32 a1, ::Google::Protobuf::ByteString* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + ODCELNBAEIB_FNPNAEJCMNB_OFFSET))(this, a1, a2);
		}

		::System::Void MGMLPPCOONF(::COMJKPOMILA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::COMJKPOMILA*))((::PBYTE)hIl2Cpp + ODCELNBAEIB_MGMLPPCOONF_OFFSET))(this, a1);
		}

		::System::Void DGGCDFBEPFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCELNBAEIB_DGGCDFBEPFB_OFFSET))(this);
		}

		::System::Void GANAGDNJMMP(::JCFCFDIFPFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCFCFDIFPFB*))((::PBYTE)hIl2Cpp + ODCELNBAEIB_GANAGDNJMMP_OFFSET))(this, a1);
		}

		::System::Void __OnPlaySwitchBossPerformance_b__54_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCELNBAEIB___ONPLAYSWITCHBOSSPERFORMANCE_B__54_0_OFFSET))(this);
		}

	};
