#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HCLPKMIIANI.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PlayerDisableInteractReason.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BABNOKHOBCF;
class EMJIDLCDFMI;
class HPHENNAIEPF;
class IAJLHKIHBFB;
class INMMPMDELKE;
class LKGIMGKIFFI;
class MNCOPNHONHO;
class OEAKPLCANOI;
class OEOAMBFMNIB;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class FPSCameraOverride; }
namespace RPG::Client::LittleGame { template <typename T> class SimpleEventService_1; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class FourRotateVoxelLevelEnvConfig; }
namespace RPG::GameCore { class FourRotateVoxelLevelSettings; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace RPG::GameCore { class LittleGameLevelVarBindingMap; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define OEAKPLCANOI_AAEMIGDIGPO_OFFSET UNITYSDK_OFFSET(0xBDFAB90)
#define OEAKPLCANOI_ADDLEVELVARIABLELISTENER_OFFSET UNITYSDK_OFFSET(0xBDFDBE0)
#define OEAKPLCANOI_ADDLITTLEGAMECUSTOMEVENTLISTENER_1_OFFSET UNITYSDK_OFFSET(0xBDFD230)
#define OEAKPLCANOI_ADDLITTLEGAMECUSTOMEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0xBDFD120)
#define OEAKPLCANOI_AFDNBCPBCKB_OFFSET UNITYSDK_OFFSET(0xBDFA170)
#define OEAKPLCANOI_BDFDHFLNDPK_OFFSET UNITYSDK_OFFSET(0xBDFA920)
#define OEAKPLCANOI_CACJLIIILFA_OFFSET UNITYSDK_OFFSET(0xBDF5110)
#define OEAKPLCANOI_CCTOR_OFFSET UNITYSDK_OFFSET(0xBDFDF60)
#define OEAKPLCANOI_CDOCDGEBOBH_OFFSET UNITYSDK_OFFSET(0xBDF52A0)
#define OEAKPLCANOI_CIKIKKENOKA_OFFSET UNITYSDK_OFFSET(0xBDF6AF0)
#define OEAKPLCANOI_CJELMBBEDFM_OFFSET UNITYSDK_OFFSET(0xBDF3220)
#define OEAKPLCANOI_CTOR_OFFSET UNITYSDK_OFFSET(0xBDFDED0)
#define OEAKPLCANOI_DAEAFOMOMKI_OFFSET UNITYSDK_OFFSET(0xBDF9600)
#define OEAKPLCANOI_DFENGFBAMBB_OFFSET UNITYSDK_OFFSET(0xBDF8560)
#define OEAKPLCANOI_DJCHEEEKOKO_OFFSET UNITYSDK_OFFSET(0xBDF3BB0)
#define OEAKPLCANOI_DOGIEJMCING_OFFSET UNITYSDK_OFFSET(0xBDFCF60)
#define OEAKPLCANOI_EAKEDIBGCOC_OFFSET UNITYSDK_OFFSET(0xBDF3AD0)
#define OEAKPLCANOI_EGMBJCDFODH_OFFSET UNITYSDK_OFFSET(0xBDF8C30)
#define OEAKPLCANOI_EVALUATELEVELVARNUMBER_OFFSET UNITYSDK_OFFSET(0xBDFDA90)
#define OEAKPLCANOI_EVALUATELEVELVARSHORT_OFFSET UNITYSDK_OFFSET(0xBDFD7F0)
#define OEAKPLCANOI_FENCFKLGIFM_OFFSET UNITYSDK_OFFSET(0xBDFCE60)
#define OEAKPLCANOI_FGLIMICEKFP_OFFSET UNITYSDK_OFFSET(0xBDFC8B0)
#define OEAKPLCANOI_FHILHNPDEFC_OFFSET UNITYSDK_OFFSET(0xBDFA2A0)
#define OEAKPLCANOI_FJGGODFCDCJ_OFFSET UNITYSDK_OFFSET(0xBDF3050)
#define OEAKPLCANOI_FMPAAHMCALB_OFFSET UNITYSDK_OFFSET(0xBDFA890)
#define OEAKPLCANOI_GEAHJBDJPBG_OFFSET UNITYSDK_OFFSET(0xBDFDE30)
#define OEAKPLCANOI_GETSERVICES_OFFSET UNITYSDK_OFFSET(0xBDFDD70)
#define OEAKPLCANOI_GET_SKIPSTARTCURVE_OFFSET UNITYSDK_OFFSET(0xBDFCF90)
#define OEAKPLCANOI_GET_SPAWNPOSITIONENTITYID_OFFSET UNITYSDK_OFFSET(0xBDFCFB0)
#define OEAKPLCANOI_GPCBBIPMJMO_OFFSET UNITYSDK_OFFSET(0xBDFB2D0)
#define OEAKPLCANOI_HGKGHJLOJHI_OFFSET UNITYSDK_OFFSET(0xBDF57A0)
#define OEAKPLCANOI_HIEIGBIMEMN_OFFSET UNITYSDK_OFFSET(0xBDF5240)
#define OEAKPLCANOI_HKEPJLDBGIG_OFFSET UNITYSDK_OFFSET(0xBDF3160)
#define OEAKPLCANOI_HMGFKLBPALM_OFFSET UNITYSDK_OFFSET(0xBDF55B0)
#define OEAKPLCANOI_IAFPANKIANM_OFFSET UNITYSDK_OFFSET(0xBDFCDA0)
#define OEAKPLCANOI_IELLLDNKCED_OFFSET UNITYSDK_OFFSET(0xBDFCF80)
#define OEAKPLCANOI_IMNPMMJOAFA_OFFSET UNITYSDK_OFFSET(0xBDFA250)
#define OEAKPLCANOI_JEGNJBGPNBO_OFFSET UNITYSDK_OFFSET(0xBDFCE00)
#define OEAKPLCANOI_JJGCHFLLIAO_OFFSET UNITYSDK_OFFSET(0xBDFCF70)
#define OEAKPLCANOI_JOINOIMMLAC_OFFSET UNITYSDK_OFFSET(0xBDF9400)
#define OEAKPLCANOI_KBAHLHGPJDP_OFFSET UNITYSDK_OFFSET(0xBDF9EA0)
#define OEAKPLCANOI_KHNGFAGDNFJ_OFFSET UNITYSDK_OFFSET(0xBDFDDC0)
#define OEAKPLCANOI_KLDEFLBNCEK_OFFSET UNITYSDK_OFFSET(0xBDF9570)
#define OEAKPLCANOI_LCJOPKHNKPE_OFFSET UNITYSDK_OFFSET(0xBDFA560)
#define OEAKPLCANOI_LEIIFNPMLLM_OFFSET UNITYSDK_OFFSET(0xBDFA2F0)
#define OEAKPLCANOI_LJLBLNOMLBF_OFFSET UNITYSDK_OFFSET(0xBDF6B30)
#define OEAKPLCANOI_LKDABJOGBCC_OFFSET UNITYSDK_OFFSET(0xBDF8500)
#define OEAKPLCANOI_MHEKPLANFAB_OFFSET UNITYSDK_OFFSET(0xBDFA810)
#define OEAKPLCANOI_MLKNNKNNEKN_OFFSET UNITYSDK_OFFSET(0xBDFB950)
#define OEAKPLCANOI_MMPBGHOFEOC_OFFSET UNITYSDK_OFFSET(0xBDFB990)
#define OEAKPLCANOI_MPAPDBALCND_OFFSET UNITYSDK_OFFSET(0xBDFA710)
#define OEAKPLCANOI_PANAECENBPC_OFFSET UNITYSDK_OFFSET(0xBDFCB20)
#define OEAKPLCANOI_PFHEMBNJCPB_OFFSET UNITYSDK_OFFSET(0xBDF6420)
#define OEAKPLCANOI_PGMCDJDDPIK_OFFSET UNITYSDK_OFFSET(0xBDF7E50)
#define OEAKPLCANOI_REMOVELEVELVARIABLELISTENER_OFFSET UNITYSDK_OFFSET(0xBDFDCC0)
#define OEAKPLCANOI_REMOVELITTLEGAMECUSTOMEVENTLISTENER_1_OFFSET UNITYSDK_OFFSET(0xBDFD410)
#define OEAKPLCANOI_REMOVELITTLEGAMECUSTOMEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0xBDFD310)
#define OEAKPLCANOI_SETLEVELVARSHORT_OFFSET UNITYSDK_OFFSET(0xBDFD4F0)
#define OEAKPLCANOI_SET_SKIPSTARTCURVE_OFFSET UNITYSDK_OFFSET(0xBDFCFA0)
#define OEAKPLCANOI_SET_SPAWNPOSITIONENTITYID_OFFSET UNITYSDK_OFFSET(0xBDFCFC0)
#define OEAKPLCANOI_TRIGGERLITTLEGAMECUSTOMEVENT_1_OFFSET UNITYSDK_OFFSET(0xBDFD080)
#define OEAKPLCANOI_TRIGGERLITTLEGAMECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0xBDFCFD0)
#define OEAKPLCANOI__CANLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xBDFBED0)
#define OEAKPLCANOI__FINISHINIT_OFFSET UNITYSDK_OFFSET(0xBDFAA00)
#define OEAKPLCANOI__ONCLEAR_OFFSET UNITYSDK_OFFSET(0xBDFBB50)
#define OEAKPLCANOI__ONINIT_OFFSET UNITYSDK_OFFSET(0xBDF5300)
#define OEAKPLCANOI__ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xBDFBF10)
#define OEAKPLCANOI__ONSTART_OFFSET UNITYSDK_OFFSET(0xBDF6550)
#define OEAKPLCANOI__ONSTOP_OFFSET UNITYSDK_OFFSET(0xBDFB490)
#define OEAKPLCANOI__ONTICK_OFFSET UNITYSDK_OFFSET(0xBDFC080)
#define OEAKPLCANOI__SETPOSTPROCESSONCLEAR_OFFSET UNITYSDK_OFFSET(0xBDFBE90)
#define OEAKPLCANOI__SETPOSTPROCESSONINIT_OFFSET UNITYSDK_OFFSET(0xBDFBE50)
#define OEAKPLCANOI__STARTLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xBDFB450)
#define OEAKPLCANOI___BUILDENTITIES_G__GETINDEX_55_4_OFFSET UNITYSDK_OFFSET(0xBDFE050)
#define OEAKPLCANOI___ONTICK_B__54_0_OFFSET UNITYSDK_OFFSET(0xBDFDF70)

inline static constexpr unsigned int OEAKPLCANOI_TypeDefinitionIndex = 60400;

	class OEAKPLCANOI : public ::HCLPKMIIANI
	{
	public:
		::UnityEngine::GameObject* GIHBMMMBGCD; // 0x78
		::RPG::Client::FPSCameraOverride* OJDNFPBAGFA; // 0x80
		::System::String* CAIHNODFHAM; // 0x88
		::BABNOKHOBCF* FKINCGODJEP; // 0x90
		::HPHENNAIEPF* JEIALFDCPND; // 0x98
		::RPG::GameCore::FourRotateVoxelLevelEnvConfig* EKCHLDPEKHB; // 0xA0
		::UnityEngine::GameObject* JMJNGJODDCI; // 0xA8
		::RPG::GameCore::GameEntity* IOOEIJILBML; // 0xB0
		::MNCOPNHONHO* PDENFEFCAGN; // 0xB8
		::RPG::Client::AdventurePhase* DEIEJIOELMO; // 0xC0
		::RPG::Client::LittleGame::SimpleEventService_1<::INMMPMDELKE*>* LGEFCADNPMN; // 0xC8
		::UnityEngine::GameObject* PEILPPADALD; // 0xD0
		::System::String* ILNGKDPNPNL; // 0xD8
		::RPG::GameCore::LittleGameLevelVarBindingMap* CIFBEJIBBDG; // 0xE0
		::System::UInt32 _SpawnPositionEntityId_k__BackingField; // 0xE8
		::System::Single COAEKALJMAK; // 0xEC
		::System::Boolean HDJOGGDMCIO; // 0xF0
		::System::Boolean _SkipStartCurve_k__BackingField; // 0xF1
		::System::Boolean MABFMALCGKF; // 0xF2
		static ::OEAKPLCANOI** StaticGet_BBCBPBGNKEL()
		{
			return (::OEAKPLCANOI**)UnitySDK::FromName("", "OEAKPLCANOI")->GetStaticField(0x60D60);
		}

		static ::System::Int32* StaticGet_NDAPMBOHJAB()
		{
			return (::System::Int32*)UnitySDK::FromName("", "OEAKPLCANOI")->GetStaticField(0x14AC0);
		}

		// static const ::System::String* JDADJLDNJCD; // 0x0
		// static const ::System::String* CIPAIDMBAHC; // 0x0
		// static const ::System::Object GHGBOEGCMLD; // 0x0
		// static const ::System::Object FEPCIPCGPOP; // 0x0
		// static const ::System::Object HIAOHNFFEJH; // 0x0
		// static const ::System::Object FOGIDIDNMGM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAKPLCANOI_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEAKPLCANOI_CCTOR_OFFSET))();
		}

		::OEOAMBFMNIB* FJGGODFCDCJ()
		{
			return ((::OEOAMBFMNIB*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAKPLCANOI_FJGGODFCDCJ_OFFSET))(this);
		}

		::System::Void HKEPJLDBGIG(::OEOAMBFMNIB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEOAMBFMNIB*))((::PBYTE)hIl2Cpp + OEAKPLCANOI_HKEPJLDBGIG_OFFSET))(this, a1);
		}

		::System::Void CJELMBBEDFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAKPLCANOI_CJELMBBEDFM_OFFSET))(this);
		}

		::System::Void EAKEDIBGCOC(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OEAKPLCANOI_EAKEDIBGCOC_OFFSET))(this, a1);
		}

		::System::Void DJCHEEEKOKO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAKPLCANOI_DJCHEEEKOKO_OFFSET))(this);
		}

		::System::UInt32 HIEIGBIMEMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAKPLCANOI_HIEIGBIMEMN_OFFSET))(this);
		}

		::System::UInt32 CDOCDGEBOBH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAKPLCANOI_CDOCDGEBOBH_OFFSET))(this);
		}

		::System::Void _OnInit(::IAJLHKIHBFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAJLHKIHBFB*))((::PBYTE)hIl2Cpp + OEAKPLCANOI__ONINIT_OFFSET))(this, a1);
		}

		::System::Void PFHEMBNJCPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAKPLCANOI_PFHEMBNJCPB_OFFSET))(this);
		}

		::System::Void _OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAKPLCANOI__ONSTART_OFFSET))(this);
		}

		::System::Void PGMCDJDDPIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAKPLCANOI_PGMCDJDDPIK_OFFSET))(this);
		}

		::System::Void LKDABJOGBCC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAKPLCANOI_LKDABJOGBCC_OFFSET))(this);
		}

		::System::Void DFENGFBAMBB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAKPLCANOI_DFENGFBAMBB_OFFSET))(this);
		}

		::System::Void JOINOIMMLAC(::RPG::GameCore::FourRotateVoxelLevelSettings* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FourRotateVoxelLevelSettings*))((::PBYTE)hIl2Cpp + OEAKPLCANOI_JOINOIMMLAC_OFFSET))(this, a1);
		}

		::RPG::GameCore::FourRotateVoxelLevelEnvConfig* KBAHLHGPJDP(::RPG::GameCore::FourRotateVoxelLevelSettings* a1)
		{
			return ((::RPG::GameCore::FourRotateVoxelLevelEnvConfig*(*)(::PVOID, ::RPG::GameCore::FourRotateVoxelLevelSettings*))((::PBYTE)hIl2Cpp + OEAKPLCANOI_KBAHLHGPJDP_OFFSET))(this, a1);
		}

		::RPG::GameCore::FourRotateVoxelLevelEnvConfig* IMNPMMJOAFA()
		{
			return ((::RPG::GameCore::FourRotateVoxelLevelEnvConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAKPLCANOI_IMNPMMJOAFA_OFFSET))(this);
		}

		::System::String* FHILHNPDEFC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAKPLCANOI_FHILHNPDEFC_OFFSET))(this);
		}

		::System::Boolean AFDNBCPBCKB(::RPG::GameCore::FourRotateVoxelLevelEnvConfig* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FourRotateVoxelLevelEnvConfig*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + OEAKPLCANOI_AFDNBCPBCKB_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean MHEKPLANFAB(::RPG::GameCore::FourRotateVoxelLevelEnvConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FourRotateVoxelLevelEnvConfig*))((::PBYTE)hIl2Cpp + OEAKPLCANOI_MHEKPLANFAB_OFFSET))(this, a1);
		}

		::System::Void LEIIFNPMLLM(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OEAKPLCANOI_LEIIFNPMLLM_OFFSET))(this, a1);
		}

		::System::Void LCJOPKHNKPE(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OEAKPLCANOI_LCJOPKHNKPE_OFFSET))(this, a1);
		}

		::System::Void FMPAAHMCALB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAKPLCANOI_FMPAAHMCALB_OFFSET))(this);
		}

		::System::Void MPAPDBALCND(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OEAKPLCANOI_MPAPDBALCND_OFFSET))(this, a1);
		}

		::System::Void BDFDHFLNDPK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAKPLCANOI_BDFDHFLNDPK_OFFSET))(this);
		}

		::System::Void _FinishInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAKPLCANOI__FINISHINIT_OFFSET))(this);
		}

		::System::Void _StartLevelGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAKPLCANOI__STARTLEVELGRAPH_OFFSET))(this);
		}

		::System::Void GPCBBIPMJMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAKPLCANOI_GPCBBIPMJMO_OFFSET))(this);
		}

		::System::Void AAEMIGDIGPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAKPLCANOI_AAEMIGDIGPO_OFFSET))(this);
		}

		::System::Void _OnStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAKPLCANOI__ONSTOP_OFFSET))(this);
		}

		::System::Void CACJLIIILFA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAKPLCANOI_CACJLIIILFA_OFFSET))(this);
		}

		::System::Void MMPBGHOFEOC(::System::Int16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + OEAKPLCANOI_MMPBGHOFEOC_OFFSET))(this, a1);
		}

		::System::Void KLDEFLBNCEK(::RPG::GameCore::FourRotateVoxelLevelSettings* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FourRotateVoxelLevelSettings*))((::PBYTE)hIl2Cpp + OEAKPLCANOI_KLDEFLBNCEK_OFFSET))(this, a1);
		}

		::System::Void DAEAFOMOMKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAKPLCANOI_DAEAFOMOMKI_OFFSET))(this);
		}

		::System::Void HGKGHJLOJHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAKPLCANOI_HGKGHJLOJHI_OFFSET))(this);
		}

		::System::Void HMGFKLBPALM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAKPLCANOI_HMGFKLBPALM_OFFSET))(this);
		}

		::System::Void _OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAKPLCANOI__ONCLEAR_OFFSET))(this);
		}

		::System::Void _SetPostProcessOnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAKPLCANOI__SETPOSTPROCESSONINIT_OFFSET))(this);
		}

		::System::Void _SetPostProcessOnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAKPLCANOI__SETPOSTPROCESSONCLEAR_OFFSET))(this);
		}

		::System::Boolean _CanLateUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAKPLCANOI__CANLATEUPDATE_OFFSET))(this);
		}

		::System::Void _OnLateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OEAKPLCANOI__ONLATEUPDATE_OFFSET))(this, a1);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OEAKPLCANOI__ONTICK_OFFSET))(this, a1);
		}

		::System::Void LJLBLNOMLBF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAKPLCANOI_LJLBLNOMLBF_OFFSET))(this);
		}

		::System::Int32 IAFPANKIANM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAKPLCANOI_IAFPANKIANM_OFFSET))(this);
		}

		::LKGIMGKIFFI* JEGNJBGPNBO()
		{
			return ((::LKGIMGKIFFI*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAKPLCANOI_JEGNJBGPNBO_OFFSET))(this);
		}

		::System::Void FGLIMICEKFP(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::LittleGameEntityConfig*, ::INMMPMDELKE*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::LittleGameEntityConfig*, ::INMMPMDELKE*>*))((::PBYTE)hIl2Cpp + OEAKPLCANOI_FGLIMICEKFP_OFFSET))(this, a1);
		}

		::System::Void EGMBJCDFODH(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::LittleGameEntityConfig*, ::INMMPMDELKE*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::LittleGameEntityConfig*, ::INMMPMDELKE*>*))((::PBYTE)hIl2Cpp + OEAKPLCANOI_EGMBJCDFODH_OFFSET))(this, a1);
		}

		::System::Boolean FENCFKLGIFM(::INMMPMDELKE* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::INMMPMDELKE*, ::System::Int32))((::PBYTE)hIl2Cpp + OEAKPLCANOI_FENCFKLGIFM_OFFSET))(this, a1, a2);
		}

		::System::Void PANAECENBPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAKPLCANOI_PANAECENBPC_OFFSET))(this);
		}

		::BABNOKHOBCF* DOGIEJMCING()
		{
			return ((::BABNOKHOBCF*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAKPLCANOI_DOGIEJMCING_OFFSET))(this);
		}

		::MNCOPNHONHO* JJGCHFLLIAO()
		{
			return ((::MNCOPNHONHO*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAKPLCANOI_JJGCHFLLIAO_OFFSET))(this);
		}

		::System::Boolean IELLLDNKCED()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAKPLCANOI_IELLLDNKCED_OFFSET))(this);
		}

		::System::Boolean get_SkipStartCurve()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAKPLCANOI_GET_SKIPSTARTCURVE_OFFSET))(this);
		}

		::System::Void set_SkipStartCurve(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OEAKPLCANOI_SET_SKIPSTARTCURVE_OFFSET))(this, a1);
		}

		::System::UInt32 get_SpawnPositionEntityId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAKPLCANOI_GET_SPAWNPOSITIONENTITYID_OFFSET))(this);
		}

		::System::Void set_SpawnPositionEntityId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OEAKPLCANOI_SET_SPAWNPOSITIONENTITYID_OFFSET))(this, a1);
		}

		::System::Void TriggerLittleGameCustomEvent(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OEAKPLCANOI_TRIGGERLITTLEGAMECUSTOMEVENT_OFFSET))(this, a1);
		}

		::System::Void TriggerLittleGameCustomEvent_1(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + OEAKPLCANOI_TRIGGERLITTLEGAMECUSTOMEVENT_1_OFFSET))(this, a1, a2);
		}

		::System::Void AddLittleGameCustomEventListener(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + OEAKPLCANOI_ADDLITTLEGAMECUSTOMEVENTLISTENER_OFFSET))(this, a1, a2);
		}

		::System::Void AddLittleGameCustomEventListener_1(::System::String* a1, ::System::UInt32 a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + OEAKPLCANOI_ADDLITTLEGAMECUSTOMEVENTLISTENER_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RemoveLittleGameCustomEventListener(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + OEAKPLCANOI_REMOVELITTLEGAMECUSTOMEVENTLISTENER_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveLittleGameCustomEventListener_1(::System::String* a1, ::System::UInt32 a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + OEAKPLCANOI_REMOVELITTLEGAMECUSTOMEVENTLISTENER_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetLevelVarShort(::System::String* a1, ::RPG::GameCore::DynamicFloat* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + OEAKPLCANOI_SETLEVELVARSHORT_OFFSET))(this, a1, a2);
		}

		::System::Int16 EvaluateLevelVarShort(::RPG::GameCore::DynamicFloat* a1)
		{
			return ((::System::Int16(*)(::PVOID, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + OEAKPLCANOI_EVALUATELEVELVARSHORT_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint EvaluateLevelVarNumber(::RPG::GameCore::DynamicFloat* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + OEAKPLCANOI_EVALUATELEVELVARNUMBER_OFFSET))(this, a1);
		}

		::System::Void AddLevelVariableListener(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + OEAKPLCANOI_ADDLEVELVARIABLELISTENER_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveLevelVariableListener(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + OEAKPLCANOI_REMOVELEVELVARIABLELISTENER_OFFSET))(this, a1, a2);
		}

		::EMJIDLCDFMI* GetServices()
		{
			return ((::EMJIDLCDFMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAKPLCANOI_GETSERVICES_OFFSET))(this);
		}

		::System::Void KHNGFAGDNFJ(::System::Boolean a1, ::RPG::Client::LittleGame::FiveDim::PlayerDisableInteractReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::LittleGame::FiveDim::PlayerDisableInteractReason))((::PBYTE)hIl2Cpp + OEAKPLCANOI_KHNGFAGDNFJ_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* GEAHJBDJPBG()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAKPLCANOI_GEAHJBDJPBG_OFFSET))(this);
		}

		::System::Void CIKIKKENOKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAKPLCANOI_CIKIKKENOKA_OFFSET))(this);
		}

		::System::Void MLKNNKNNEKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAKPLCANOI_MLKNNKNNEKN_OFFSET))(this);
		}

		::System::Void __OnTick_b__54_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAKPLCANOI___ONTICK_B__54_0_OFFSET))(this);
		}

		static ::System::Int32 __BuildEntities_g__GetIndex_55_4(::RPG::GameCore::LittleGameEntityConfig* a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + OEAKPLCANOI___BUILDENTITIES_G__GETINDEX_55_4_OFFSET))(a1);
		}

	};
