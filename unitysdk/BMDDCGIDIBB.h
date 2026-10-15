#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JOGBIBJLPJB.h"
#include "unitysdk/OAIHDMLLLAI.h"
#include "unitysdk/RPG/Client/EPedestrianV2MotionFlag.h"
#include "unitysdk/RPG/Client/EPedestrianV2MotionState.h"
#include "unitysdk/RVO/EAsyncNavMeshAgentPriority.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BMDDCGIDIBB_DIMAABDMJBL;
class ICOHAPENNHF;
class IEMCCEBKBLB;
class KFGKNDNJKMI;
class LAJCPEFEOPN;
class MHHBDDMJOII;
class MNIADKMONBH;
namespace RPG::Client { class MonoMovementPropHandle; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animator; }
namespace UnityEngine::AI { class AsyncNavMeshAgent; }

#define BMDDCGIDIBB_ACIAJPJOEMI_OFFSET UNITYSDK_OFFSET(0xBA8BC00)
#define BMDDCGIDIBB_AMNKPKPPJCN_OFFSET UNITYSDK_OFFSET(0xBA90570)
#define BMDDCGIDIBB_ANJIFFHNMGG_OFFSET UNITYSDK_OFFSET(0xBA8FFB0)
#define BMDDCGIDIBB_APFCBODODIO_OFFSET UNITYSDK_OFFSET(0xBA8EBE0)
#define BMDDCGIDIBB_BBGGFMDINLN_OFFSET UNITYSDK_OFFSET(0xBA8C740)
#define BMDDCGIDIBB_BENFBHADLMA_OFFSET UNITYSDK_OFFSET(0xBA8EB70)
#define BMDDCGIDIBB_BLJHJIKGOEK_OFFSET UNITYSDK_OFFSET(0xBA8B950)
#define BMDDCGIDIBB_CAJHNADOHLP_OFFSET UNITYSDK_OFFSET(0xBA8CC80)
#define BMDDCGIDIBB_CAMHBOEFJFK_OFFSET UNITYSDK_OFFSET(0xBA8FED0)
#define BMDDCGIDIBB_CCTOR_OFFSET UNITYSDK_OFFSET(0xBA90830)
#define BMDDCGIDIBB_CECMCADBMDE_OFFSET UNITYSDK_OFFSET(0xBA8FC90)
#define BMDDCGIDIBB_CGFEIKOBJEP_OFFSET UNITYSDK_OFFSET(0xBA8FEE0)
#define BMDDCGIDIBB_CLEAR_OFFSET UNITYSDK_OFFSET(0xBA8AB30)
#define BMDDCGIDIBB_COEJKFDCNPI_OFFSET UNITYSDK_OFFSET(0xBA8E1D0)
#define BMDDCGIDIBB_CTOR_OFFSET UNITYSDK_OFFSET(0xBA8A600)
#define BMDDCGIDIBB_DFCBNMBHAKP_OFFSET UNITYSDK_OFFSET(0xBA8E870)
#define BMDDCGIDIBB_DJMCIGPDCPL_OFFSET UNITYSDK_OFFSET(0xBA8F330)
#define BMDDCGIDIBB_EFLEJKIHEEK_OFFSET UNITYSDK_OFFSET(0xBA8BBB0)
#define BMDDCGIDIBB_FAGGJDJKLAI_OFFSET UNITYSDK_OFFSET(0xBA8FB20)
#define BMDDCGIDIBB_FBDENKCAECP_OFFSET UNITYSDK_OFFSET(0xBA8E670)
#define BMDDCGIDIBB_FCNHBDCGFON_OFFSET UNITYSDK_OFFSET(0xBA90670)
#define BMDDCGIDIBB_FFJOEJOBKGH_OFFSET UNITYSDK_OFFSET(0xBA904F0)
#define BMDDCGIDIBB_FKKNPACOCEF_OFFSET UNITYSDK_OFFSET(0xBA8FCA0)
#define BMDDCGIDIBB_FKLJHKDBNAP_OFFSET UNITYSDK_OFFSET(0xBA8C640)
#define BMDDCGIDIBB_FOBEBKOALGM_OFFSET UNITYSDK_OFFSET(0xBA8CAC0)
#define BMDDCGIDIBB_GCKAIHLGIGH_OFFSET UNITYSDK_OFFSET(0xBA8CA60)
#define BMDDCGIDIBB_GET_ANIMATORMOVECALLBACKORDER_OFFSET UNITYSDK_OFFSET(0xBA90720)
#define BMDDCGIDIBB_GET_ANIMATORMOVEDELTAPOSITION_OFFSET UNITYSDK_OFFSET(0xBA90740)
#define BMDDCGIDIBB_GET_ENABLEANIMATORMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBA90730)
#define BMDDCGIDIBB_GET_MOVETOLERANCE_OFFSET UNITYSDK_OFFSET(0xBA8FE30)
#define BMDDCGIDIBB_GET_USEANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0xBA90700)
#define BMDDCGIDIBB_GET_USEDYNAMICWORLDUP_OFFSET UNITYSDK_OFFSET(0xBA8FEA0)
#define BMDDCGIDIBB_GHMCPBOFLIJ_OFFSET UNITYSDK_OFFSET(0xBA8B9E0)
#define BMDDCGIDIBB_HCEOAEMOJFK_OFFSET UNITYSDK_OFFSET(0xBA8B500)
#define BMDDCGIDIBB_HDJHMGLIKMM_OFFSET UNITYSDK_OFFSET(0xBA8F120)
#define BMDDCGIDIBB_HHJMIBALDGA_OFFSET UNITYSDK_OFFSET(0xBA90090)
#define BMDDCGIDIBB_HHMFILFAMNA_OFFSET UNITYSDK_OFFSET(0xBA8FC70)
#define BMDDCGIDIBB_HIPLPHOHHMK_OFFSET UNITYSDK_OFFSET(0xBA8DD70)
#define BMDDCGIDIBB_HPGOFKAEHHO_OFFSET UNITYSDK_OFFSET(0xBA8E230)
#define BMDDCGIDIBB_HPNEAHDCIHN_OFFSET UNITYSDK_OFFSET(0xBA8EF60)
#define BMDDCGIDIBB_IAEFGBEIGBP_OFFSET UNITYSDK_OFFSET(0xBA8CBD0)
#define BMDDCGIDIBB_IAMDFKENAIA_OFFSET UNITYSDK_OFFSET(0xBA8F1F0)
#define BMDDCGIDIBB_IDHIMIKNIOE_OFFSET UNITYSDK_OFFSET(0xBA8D680)
#define BMDDCGIDIBB_IMGNKFFIAKP_OFFSET UNITYSDK_OFFSET(0xBA8CDA0)
#define BMDDCGIDIBB_JDPGFIBLFOP_OFFSET UNITYSDK_OFFSET(0xBA8CB60)
#define BMDDCGIDIBB_KBDBDFADKMA_OFFSET UNITYSDK_OFFSET(0xBA8FE50)
#define BMDDCGIDIBB_KEKOEDAJIFC_OFFSET UNITYSDK_OFFSET(0xBA8D800)
#define BMDDCGIDIBB_KIALGBGCIOH_OFFSET UNITYSDK_OFFSET(0xBA90780)
#define BMDDCGIDIBB_KJHMAFCIDOC_OFFSET UNITYSDK_OFFSET(0xBA8E020)
#define BMDDCGIDIBB_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBA8B010)
#define BMDDCGIDIBB_LDKBGKEDJCC_OFFSET UNITYSDK_OFFSET(0xBA8AFA0)
#define BMDDCGIDIBB_LDKMIKEMHFO_OFFSET UNITYSDK_OFFSET(0xBA8FB10)
#define BMDDCGIDIBB_LJJDCBOGFFL_OFFSET UNITYSDK_OFFSET(0xBA8F030)
#define BMDDCGIDIBB_LMFNMKELHOF_OFFSET UNITYSDK_OFFSET(0xBA8BA40)
#define BMDDCGIDIBB_MFLANLLEGEK_OFFSET UNITYSDK_OFFSET(0xBA8E980)
#define BMDDCGIDIBB_MFLKLELADLM_OFFSET UNITYSDK_OFFSET(0xBA900E0)
#define BMDDCGIDIBB_MJMBEIENOMG_OFFSET UNITYSDK_OFFSET(0xBA8B680)
#define BMDDCGIDIBB_MPGPLLBHGBB_OFFSET UNITYSDK_OFFSET(0xBA905F0)
#define BMDDCGIDIBB_NBJFLGNEBED_OFFSET UNITYSDK_OFFSET(0xBA8CE80)
#define BMDDCGIDIBB_NECCMOBICDN_OFFSET UNITYSDK_OFFSET(0xBA8F4F0)
#define BMDDCGIDIBB_NELJHJMKMFP_OFFSET UNITYSDK_OFFSET(0xBA8FC60)
#define BMDDCGIDIBB_NGPNHDBGHFK_OFFSET UNITYSDK_OFFSET(0xBA8D740)
#define BMDDCGIDIBB_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xBA8B6E0)
#define BMDDCGIDIBB_NPBOKEHKKCC_OFFSET UNITYSDK_OFFSET(0xBA901F0)
#define BMDDCGIDIBB_OBKLMJCHFGD_OFFSET UNITYSDK_OFFSET(0xBA8F290)
#define BMDDCGIDIBB_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0xBA907A0)
#define BMDDCGIDIBB_ONJMCEKKDNC_OFFSET UNITYSDK_OFFSET(0xBA90660)
#define BMDDCGIDIBB_PDCPMHFCOGG_OFFSET UNITYSDK_OFFSET(0xBA8CBE0)
#define BMDDCGIDIBB_PIHMKCFFLPB_OFFSET UNITYSDK_OFFSET(0xBA8ED70)
#define BMDDCGIDIBB_PLNAILEAONO_OFFSET UNITYSDK_OFFSET(0xBA8E710)
#define BMDDCGIDIBB_PLOGFHDCFJB_OFFSET UNITYSDK_OFFSET(0xBA8FEC0)
#define BMDDCGIDIBB_SET_ANIMATORMOVEDELTAPOSITION_OFFSET UNITYSDK_OFFSET(0xBA90760)
#define BMDDCGIDIBB_SET_MOVETOLERANCE_OFFSET UNITYSDK_OFFSET(0xBA8FE40)
#define BMDDCGIDIBB_SET_USEANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0xBA90710)
#define BMDDCGIDIBB_SET_USEDYNAMICWORLDUP_OFFSET UNITYSDK_OFFSET(0xBA8FEB0)

inline static constexpr unsigned int BMDDCGIDIBB_TypeDefinitionIndex = 69171;

	class BMDDCGIDIBB : public ::System::Object
	{
	public:
		::UnityEngine::AI::AsyncNavMeshAgent* ILCOIOGNIEA; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::Client::EPedestrianV2MotionState, ::System::Object*>* MPPLGNBJKGN; // 0x18
		::LAJCPEFEOPN* CBDKGEDHCBE; // 0x20
		::IEMCCEBKBLB* IOMHOPDCGNF; // 0x28
		::MHHBDDMJOII* LGEGKIKIPOB; // 0x30
		::ICOHAPENNHF* OCCIHAFBDON; // 0x38
		::MNIADKMONBH* HOLNABEAABO; // 0x40
		::BMDDCGIDIBB_DIMAABDMJBL* IKMJJPMDOLI; // 0x48
		::System::Int32 IPHJPNDAILI; // 0x50
		::System::Single OGGPBCPJLHO; // 0x54
		::JOGBIBJLPJB FEKJGGNNLLI; // 0x58
		::System::Single JIMDKHMJIII; // 0x60
		::UnityEngine::Quaternion NCMEPPHLGEG; // 0x64
		::System::Single IIFNBAPJJAC; // 0x74
		::UnityEngine::Vector3 _AnimatorMoveDeltaPosition_k__BackingField; // 0x78
		::RPG::Client::EPedestrianV2MotionFlag KMKPGPIDKJF; // 0x84
		::UnityEngine::Vector3 BEDPGAOCOHG; // 0x88
		::UnityEngine::Vector3 MIFKHBDOGLN; // 0x94
		::System::Single EGJGFEBFIBG; // 0xA0
		::UnityEngine::Vector3 KEBNPIMFHGM; // 0xA4
		::System::Boolean _UseAnimatorMove_k__BackingField; // 0xB0
		::System::Boolean _UseDynamicWorldUp_k__BackingField; // 0xB1
		::System::Boolean HENLPOIICCA; // 0xB2
		::System::Byte _padding0[0x1];
		::System::Single FMFONGGINGI; // 0xB4
		::System::Single LODCEOACIGC; // 0xB8
		::System::Single _MoveTolerance_k__BackingField; // 0xBC
		::UnityEngine::Vector3 FHNOHNOPLIC; // 0xC0
		::System::Int32 ENJAGEOOFPJ; // 0xCC
		::System::Single FLMKBDCDGGG; // 0xD0
		::OAIHDMLLLAI GNDJKNPMGEH; // 0xD4
		::RVO::EAsyncNavMeshAgentPriority IPJGMGEAAHI; // 0xE0
		::System::Single GLIOPBNHOJL; // 0xE4
		::System::Int32 IDPPPAPCEAN; // 0xE8
		::UnityEngine::Vector3 JCACOMLOPAB; // 0xEC
		::System::Single HPCHCEFOKJB; // 0xF8
		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_KFHHOCHFFEL()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)UnitySDK::FromName("", "BMDDCGIDIBB")->GetStaticField(0x6FB30);
		}

		static ::System::Single* StaticGet_IJMLBOMMBPJ()
		{
			return (::System::Single*)UnitySDK::FromName("", "BMDDCGIDIBB")->GetStaticField(0x15A90);
		}

		static ::System::Single* StaticGet_HPJDONJJIGH()
		{
			return (::System::Single*)UnitySDK::FromName("", "BMDDCGIDIBB")->GetStaticField(0x15A94);
		}

		// static const ::System::Object ALBDJNHBEDO; // 0x0
		// static const ::System::Object CODEHOGKGFI; // 0x0
		// static const ::System::Object HPJMCCLCLJP; // 0x0
		// static const ::System::Object CMDKLJFMHGA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMDDCGIDIBB_CCTOR_OFFSET))();
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_CLEAR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::LAJCPEFEOPN* a1, ::MHHBDDMJOII* a2, ::OAIHDMLLLAI a3, ::System::Int32 a4, ::IEMCCEBKBLB* a5)
		{
			return ((::System::Void(*)(::PVOID, ::LAJCPEFEOPN*, ::MHHBDDMJOII*, ::OAIHDMLLLAI, ::System::Int32, ::IEMCCEBKBLB*))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void MJMBEIENOMG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_MJMBEIENOMG_OFFSET))(this, a1);
		}

		::System::Void NPAFMEBNFOB(::System::Single a1, ::System::Single a2, ::System::Single a3, ::RVO::EAsyncNavMeshAgentPriority a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::RVO::EAsyncNavMeshAgentPriority))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_NPAFMEBNFOB_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void BBGGFMDINLN(::System::Single a1, ::System::Single a2, ::System::Single a3, ::RPG::Client::EPedestrianV2MotionState a4, ::System::Int32 a5, ::RVO::EAsyncNavMeshAgentPriority a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::RPG::Client::EPedestrianV2MotionState, ::System::Int32, ::RVO::EAsyncNavMeshAgentPriority))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_BBGGFMDINLN_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void ACIAJPJOEMI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_ACIAJPJOEMI_OFFSET))(this, a1);
		}

		::System::Void CAJHNADOHLP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_CAJHNADOHLP_OFFSET))(this, a1);
		}

		::System::Void NBJFLGNEBED(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_NBJFLGNEBED_OFFSET))(this, a1);
		}

		::System::Void HIPLPHOHHMK(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_HIPLPHOHHMK_OFFSET))(this, a1);
		}

		::System::Void KJHMAFCIDOC(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_KJHMAFCIDOC_OFFSET))(this, a1, a2);
		}

		::System::Void DFCBNMBHAKP(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_DFCBNMBHAKP_OFFSET))(this, a1, a2);
		}

		::System::Void MFLANLLEGEK(::KFGKNDNJKMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFGKNDNJKMI*))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_MFLANLLEGEK_OFFSET))(this, a1);
		}

		::System::Void PIHMKCFFLPB(::KFGKNDNJKMI* a1, ::JOGBIBJLPJB a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::KFGKNDNJKMI*, ::JOGBIBJLPJB, ::System::Int32))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_PIHMKCFFLPB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HPNEAHDCIHN(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_HPNEAHDCIHN_OFFSET))(this, a1);
		}

		::System::Void JDPGFIBLFOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_JDPGFIBLFOP_OFFSET))(this);
		}

		::System::Void LJJDCBOGFFL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_LJJDCBOGFFL_OFFSET))(this, a1);
		}

		::System::Void IMGNKFFIAKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_IMGNKFFIAKP_OFFSET))(this);
		}

		::System::Void HCEOAEMOJFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_HCEOAEMOJFK_OFFSET))(this);
		}

		::System::Void KEKOEDAJIFC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_KEKOEDAJIFC_OFFSET))(this, a1);
		}

		::System::Void FKLJHKDBNAP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_FKLJHKDBNAP_OFFSET))(this);
		}

		::System::Int32 IAMDFKENAIA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_IAMDFKENAIA_OFFSET))(this);
		}

		::System::Int32 FOBEBKOALGM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_FOBEBKOALGM_OFFSET))(this);
		}

		::ICOHAPENNHF* OBKLMJCHFGD()
		{
			return ((::ICOHAPENNHF*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_OBKLMJCHFGD_OFFSET))(this);
		}

		::System::Void HPGOFKAEHHO(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_HPGOFKAEHHO_OFFSET))(this, a1, a2);
		}

		static ::UnityEngine::Vector3 DJMCIGPDCPL(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_DJMCIGPDCPL_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::MonoMovementPropHandle* NECCMOBICDN(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::RPG::Client::MonoMovementPropHandle*(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_NECCMOBICDN_OFFSET))(a1, a2);
		}

		::System::Boolean LDKMIKEMHFO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_LDKMIKEMHFO_OFFSET))(this);
		}

		::System::Boolean FAGGJDJKLAI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_FAGGJDJKLAI_OFFSET))(this);
		}

		::System::Boolean NELJHJMKMFP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_NELJHJMKMFP_OFFSET))(this);
		}

		::UnityEngine::Vector3 HHMFILFAMNA()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_HHMFILFAMNA_OFFSET))(this);
		}

		::UnityEngine::Quaternion CECMCADBMDE()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_CECMCADBMDE_OFFSET))(this);
		}

		::UnityEngine::Vector3 FKKNPACOCEF()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_FKKNPACOCEF_OFFSET))(this);
		}

		::System::Single get_MoveTolerance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_GET_MOVETOLERANCE_OFFSET))(this);
		}

		::System::Void set_MoveTolerance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_SET_MOVETOLERANCE_OFFSET))(this, a1);
		}

		::System::Single KBDBDFADKMA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_KBDBDFADKMA_OFFSET))(this);
		}

		::System::Boolean get_UseDynamicWorldUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_GET_USEDYNAMICWORLDUP_OFFSET))(this);
		}

		::System::Void set_UseDynamicWorldUp(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_SET_USEDYNAMICWORLDUP_OFFSET))(this, a1);
		}

		::MHHBDDMJOII* PLOGFHDCFJB()
		{
			return ((::MHHBDDMJOII*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_PLOGFHDCFJB_OFFSET))(this);
		}

		::RPG::Client::EPedestrianV2MotionFlag CAMHBOEFJFK()
		{
			return ((::RPG::Client::EPedestrianV2MotionFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_CAMHBOEFJFK_OFFSET))(this);
		}

		::System::Void COEJKFDCNPI(::RPG::Client::EPedestrianV2MotionFlag a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EPedestrianV2MotionFlag))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_COEJKFDCNPI_OFFSET))(this, a1);
		}

		::RPG::Client::EPedestrianV2MotionState CGFEIKOBJEP()
		{
			return ((::RPG::Client::EPedestrianV2MotionState(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_CGFEIKOBJEP_OFFSET))(this);
		}

		::System::Void ANJIFFHNMGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_ANJIFFHNMGG_OFFSET))(this);
		}

		::System::Void HHJMIBALDGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_HHJMIBALDGA_OFFSET))(this);
		}

		::System::Void EFLEJKIHEEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_EFLEJKIHEEK_OFFSET))(this);
		}

		::System::Void MFLKLELADLM(::ICOHAPENNHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ICOHAPENNHF*))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_MFLKLELADLM_OFFSET))(this, a1);
		}

		::System::Void GCKAIHLGIGH(::ICOHAPENNHF* a1, ::RPG::Client::EPedestrianV2MotionState a2)
		{
			return ((::System::Void(*)(::PVOID, ::ICOHAPENNHF*, ::RPG::Client::EPedestrianV2MotionState))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_GCKAIHLGIGH_OFFSET))(this, a1, a2);
		}

		::System::Void APFCBODODIO(::RPG::Client::EPedestrianV2MotionState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EPedestrianV2MotionState))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_APFCBODODIO_OFFSET))(this, a1);
		}

		::System::Void PLNAILEAONO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_PLNAILEAONO_OFFSET))(this);
		}

		::System::Boolean IAEFGBEIGBP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_IAEFGBEIGBP_OFFSET))(this);
		}

		::UnityEngine::Vector3 IDHIMIKNIOE()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_IDHIMIKNIOE_OFFSET))(this);
		}

		::System::Void PDCPMHFCOGG(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_PDCPMHFCOGG_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 NGPNHDBGHFK()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_NGPNHDBGHFK_OFFSET))(this);
		}

		::System::Void FBDENKCAECP(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_FBDENKCAECP_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 NPBOKEHKKCC()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_NPBOKEHKKCC_OFFSET))(this);
		}

		::System::Void FFJOEJOBKGH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_FFJOEJOBKGH_OFFSET))(this, a1);
		}

		::System::Single AMNKPKPPJCN()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_AMNKPKPPJCN_OFFSET))(this);
		}

		::System::Single MPGPLLBHGBB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_MPGPLLBHGBB_OFFSET))(this);
		}

		::System::Single ONJMCEKKDNC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_ONJMCEKKDNC_OFFSET))(this);
		}

		::System::Void FCNHBDCGFON(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_FCNHBDCGFON_OFFSET))(this, a1);
		}

		::System::Void BLJHJIKGOEK(::System::Single a1, ::RVO::EAsyncNavMeshAgentPriority a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::RVO::EAsyncNavMeshAgentPriority))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_BLJHJIKGOEK_OFFSET))(this, a1, a2);
		}

		::System::Boolean GHMCPBOFLIJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_GHMCPBOFLIJ_OFFSET))(this);
		}

		::System::Void BENFBHADLMA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_BENFBHADLMA_OFFSET))(this);
		}

		::System::Void LMFNMKELHOF(::System::Single a1, ::RVO::EAsyncNavMeshAgentPriority a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::RVO::EAsyncNavMeshAgentPriority))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_LMFNMKELHOF_OFFSET))(this, a1, a2);
		}

		::System::Void LDKBGKEDJCC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_LDKBGKEDJCC_OFFSET))(this);
		}

		::System::Void HDJHMGLIKMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_HDJHMGLIKMM_OFFSET))(this);
		}

		::System::Boolean get_UseAnimatorMove()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_GET_USEANIMATORMOVE_OFFSET))(this);
		}

		::System::Void set_UseAnimatorMove(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_SET_USEANIMATORMOVE_OFFSET))(this, a1);
		}

		::System::Int32 get_AnimatorMoveCallbackOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_GET_ANIMATORMOVECALLBACKORDER_OFFSET))(this);
		}

		::System::Boolean get_EnableAnimatorMoveCallback()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_GET_ENABLEANIMATORMOVECALLBACK_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_AnimatorMoveDeltaPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_GET_ANIMATORMOVEDELTAPOSITION_OFFSET))(this);
		}

		::System::Void set_AnimatorMoveDeltaPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_SET_ANIMATORMOVEDELTAPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 KIALGBGCIOH()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_KIALGBGCIOH_OFFSET))(this);
		}

		::System::Void OnAnimatorMove(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + BMDDCGIDIBB_ONANIMATORMOVE_OFFSET))(this, a1);
		}

	};
