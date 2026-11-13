#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HCLPKMIIANI.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PlayerDisableInteractReason.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
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

#define OEAKPLCANOI_AAEMIGDIGPO_OFFSET UNITYSDK_OFFSET(0x1761FD10)
#define OEAKPLCANOI_ADDLEVELVARIABLELISTENER_OFFSET UNITYSDK_OFFSET(0x176231F0)
#define OEAKPLCANOI_ADDLITTLEGAMECUSTOMEVENTLISTENER_1_OFFSET UNITYSDK_OFFSET(0x17622840)
#define OEAKPLCANOI_ADDLITTLEGAMECUSTOMEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0x17622730)
#define OEAKPLCANOI_AFDNBCPBCKB_OFFSET UNITYSDK_OFFSET(0x1761F2C0)
#define OEAKPLCANOI_AJGDEKDDHAG_OFFSET UNITYSDK_OFFSET(0x1761EE40)
#define OEAKPLCANOI_BDFDHFLNDPK_OFFSET UNITYSDK_OFFSET(0x1761FA90)
#define OEAKPLCANOI_CACJLIIILFA_OFFSET UNITYSDK_OFFSET(0x17619C90)
#define OEAKPLCANOI_CCTOR_OFFSET UNITYSDK_OFFSET(0x176235A0)
#define OEAKPLCANOI_CDOCDGEBOBH_OFFSET UNITYSDK_OFFSET(0x17619E20)
#define OEAKPLCANOI_CIKIKKENOKA_OFFSET UNITYSDK_OFFSET(0x1761B6C0)
#define OEAKPLCANOI_CJELMBBEDFM_OFFSET UNITYSDK_OFFSET(0x17617DA0)
#define OEAKPLCANOI_CTOR_OFFSET UNITYSDK_OFFSET(0x176234E0)
#define OEAKPLCANOI_DAEAFOMOMKI_OFFSET UNITYSDK_OFFSET(0x1761E5A0)
#define OEAKPLCANOI_DFENGFBAMBB_OFFSET UNITYSDK_OFFSET(0x1761D4D0)
#define OEAKPLCANOI_DJCHEEEKOKO_OFFSET UNITYSDK_OFFSET(0x17618730)
#define OEAKPLCANOI_DOGIEJMCING_OFFSET UNITYSDK_OFFSET(0x17622570)
#define OEAKPLCANOI_EAKEDIBGCOC_OFFSET UNITYSDK_OFFSET(0x17618650)
#define OEAKPLCANOI_EGMBJCDFODH_OFFSET UNITYSDK_OFFSET(0x1761DBD0)
#define OEAKPLCANOI_EVALUATELEVELVARNUMBER_OFFSET UNITYSDK_OFFSET(0x176230A0)
#define OEAKPLCANOI_EVALUATELEVELVARSHORT_OFFSET UNITYSDK_OFFSET(0x17622E00)
#define OEAKPLCANOI_FENCFKLGIFM_OFFSET UNITYSDK_OFFSET(0x17622470)
#define OEAKPLCANOI_FGLIMICEKFP_OFFSET UNITYSDK_OFFSET(0x17621ED0)
#define OEAKPLCANOI_FHILHNPDEFC_OFFSET UNITYSDK_OFFSET(0x1761F3F0)
#define OEAKPLCANOI_FJGGODFCDCJ_OFFSET UNITYSDK_OFFSET(0x17617B60)
#define OEAKPLCANOI_FKLCENDAHNA_OFFSET UNITYSDK_OFFSET(0x17620D40)
#define OEAKPLCANOI_FMPAAHMCALB_OFFSET UNITYSDK_OFFSET(0x1761F9F0)
#define OEAKPLCANOI_GEAHJBDJPBG_OFFSET UNITYSDK_OFFSET(0x17623440)
#define OEAKPLCANOI_GETSERVICES_OFFSET UNITYSDK_OFFSET(0x17623380)
#define OEAKPLCANOI_GET_SKIPSTARTCURVE_OFFSET UNITYSDK_OFFSET(0x176225A0)
#define OEAKPLCANOI_GET_SPAWNPOSITIONENTITYID_OFFSET UNITYSDK_OFFSET(0x176225C0)
#define OEAKPLCANOI_GPCBBIPMJMO_OFFSET UNITYSDK_OFFSET(0x17620450)
#define OEAKPLCANOI_HGKGHJLOJHI_OFFSET UNITYSDK_OFFSET(0x1761A320)
#define OEAKPLCANOI_HIEIGBIMEMN_OFFSET UNITYSDK_OFFSET(0x17619DC0)
#define OEAKPLCANOI_HKEPJLDBGIG_OFFSET UNITYSDK_OFFSET(0x17617CE0)
#define OEAKPLCANOI_HMGFKLBPALM_OFFSET UNITYSDK_OFFSET(0x1761A130)
#define OEAKPLCANOI_IAFPANKIANM_OFFSET UNITYSDK_OFFSET(0x176223A0)
#define OEAKPLCANOI_IEDFPLNECBG_OFFSET UNITYSDK_OFFSET(0x17620EA0)
#define OEAKPLCANOI_IELLLDNKCED_OFFSET UNITYSDK_OFFSET(0x17622590)
#define OEAKPLCANOI_IMNPMMJOAFA_OFFSET UNITYSDK_OFFSET(0x1761F3A0)
#define OEAKPLCANOI_JEGNJBGPNBO_OFFSET UNITYSDK_OFFSET(0x17622410)
#define OEAKPLCANOI_JJGCHFLLIAO_OFFSET UNITYSDK_OFFSET(0x17622580)
#define OEAKPLCANOI_JMPIFIEGNBK_OFFSET UNITYSDK_OFFSET(0x17621D30)
#define OEAKPLCANOI_JOINOIMMLAC_OFFSET UNITYSDK_OFFSET(0x1761E3A0)
#define OEAKPLCANOI_KBAHLHGPJDP_OFFSET UNITYSDK_OFFSET(0x1761EFF0)
#define OEAKPLCANOI_KHNGFAGDNFJ_OFFSET UNITYSDK_OFFSET(0x176233D0)
#define OEAKPLCANOI_KLDEFLBNCEK_OFFSET UNITYSDK_OFFSET(0x1761E510)
#define OEAKPLCANOI_LCJOPKHNKPE_OFFSET UNITYSDK_OFFSET(0x1761F6B0)
#define OEAKPLCANOI_LEIIFNPMLLM_OFFSET UNITYSDK_OFFSET(0x1761F440)
#define OEAKPLCANOI_LJLBLNOMLBF_OFFSET UNITYSDK_OFFSET(0x1761B700)
#define OEAKPLCANOI_LKDABJOGBCC_OFFSET UNITYSDK_OFFSET(0x1761D470)
#define OEAKPLCANOI_MHEKPLANFAB_OFFSET UNITYSDK_OFFSET(0x1761F970)
#define OEAKPLCANOI_MLKNNKNNEKN_OFFSET UNITYSDK_OFFSET(0x17620B30)
#define OEAKPLCANOI_MMPBGHOFEOC_OFFSET UNITYSDK_OFFSET(0x17620B70)
#define OEAKPLCANOI_MPAPDBALCND_OFFSET UNITYSDK_OFFSET(0x1761F870)
#define OEAKPLCANOI_PANAECENBPC_OFFSET UNITYSDK_OFFSET(0x17622140)
#define OEAKPLCANOI_PFHEMBNJCPB_OFFSET UNITYSDK_OFFSET(0x1761AFA0)
#define OEAKPLCANOI_PGMCDJDDPIK_OFFSET UNITYSDK_OFFSET(0x1761CDC0)
#define OEAKPLCANOI_REMOVELEVELVARIABLELISTENER_OFFSET UNITYSDK_OFFSET(0x176232D0)
#define OEAKPLCANOI_REMOVELITTLEGAMECUSTOMEVENTLISTENER_1_OFFSET UNITYSDK_OFFSET(0x17622A20)
#define OEAKPLCANOI_REMOVELITTLEGAMECUSTOMEVENTLISTENER_OFFSET UNITYSDK_OFFSET(0x17622920)
#define OEAKPLCANOI_SETLEVELVARSHORT_OFFSET UNITYSDK_OFFSET(0x17622B00)
#define OEAKPLCANOI_SET_SKIPSTARTCURVE_OFFSET UNITYSDK_OFFSET(0x176225B0)
#define OEAKPLCANOI_SET_SPAWNPOSITIONENTITYID_OFFSET UNITYSDK_OFFSET(0x176225D0)
#define OEAKPLCANOI_TRIGGERLITTLEGAMECUSTOMEVENT_1_OFFSET UNITYSDK_OFFSET(0x17622690)
#define OEAKPLCANOI_TRIGGERLITTLEGAMECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x176225E0)
#define OEAKPLCANOI__CANLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x17621380)
#define OEAKPLCANOI__FINISHINIT_OFFSET UNITYSDK_OFFSET(0x1761FB80)
#define OEAKPLCANOI__ONCLEAR_OFFSET UNITYSDK_OFFSET(0x17620FF0)
#define OEAKPLCANOI__ONINIT_OFFSET UNITYSDK_OFFSET(0x17619E80)
#define OEAKPLCANOI__ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x176213C0)
#define OEAKPLCANOI__ONSTART_OFFSET UNITYSDK_OFFSET(0x1761B0D0)
#define OEAKPLCANOI__ONSTOP_OFFSET UNITYSDK_OFFSET(0x17620600)
#define OEAKPLCANOI__ONTICK_OFFSET UNITYSDK_OFFSET(0x17621530)
#define OEAKPLCANOI__SETPOSTPROCESSONCLEAR_OFFSET UNITYSDK_OFFSET(0x17621340)
#define OEAKPLCANOI__SETPOSTPROCESSONINIT_OFFSET UNITYSDK_OFFSET(0x17621300)
#define OEAKPLCANOI__STARTLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0x176205C0)
#define OEAKPLCANOI___BUILDENTITIES_G__GETINDEX_60_4_OFFSET UNITYSDK_OFFSET(0x17623690)
#define OEAKPLCANOI___ONTICK_B__58_0_OFFSET UNITYSDK_OFFSET(0x176235B0)

inline static constexpr unsigned int OEAKPLCANOI_TypeDefinitionIndex = 61690;

	class OEAKPLCANOI : public ::HCLPKMIIANI
	{
	public:
		::RPG::GameCore::GameEntity* IOOEIJILBML; // 0x78
		::System::Action* MKPCALNCNLE; // 0x80
		::UnityEngine::GameObject* GIHBMMMBGCD; // 0x88
		::RPG::GameCore::LittleGameLevelVarBindingMap* CIFBEJIBBDG; // 0x90
		::System::String* ILNGKDPNPNL; // 0x98
		::RPG::Client::FPSCameraOverride* OJDNFPBAGFA; // 0xA0
		::RPG::Client::AdventurePhase* DEIEJIOELMO; // 0xA8
		::HPHENNAIEPF* JEIALFDCPND; // 0xB0
		::System::String* CAIHNODFHAM; // 0xB8
		::RPG::GameCore::FourRotateVoxelLevelEnvConfig* EKCHLDPEKHB; // 0xC0
		::UnityEngine::GameObject* PEILPPADALD; // 0xC8
		::RPG::Client::LittleGame::SimpleEventService_1<::INMMPMDELKE*>* LGEFCADNPMN; // 0xD0
		::BABNOKHOBCF* FKINCGODJEP; // 0xD8
		::MNCOPNHONHO* PDENFEFCAGN; // 0xE0
		::UnityEngine::GameObject* JMJNGJODDCI; // 0xE8
		::System::Boolean MABFMALCGKF; // 0xF0
		::System::Boolean MAOLJFIKGIK; // 0xF1
		::System::Boolean _SkipStartCurve_k__BackingField; // 0xF2
		::System::Boolean HDJOGGDMCIO; // 0xF3
		::System::Single COAEKALJMAK; // 0xF4
		::UnityEngine::Vector3 DMNGOCOMJLN; // 0xF8
		::System::UInt32 _SpawnPositionEntityId_k__BackingField; // 0x104
		static ::OEAKPLCANOI** StaticGet_BBCBPBGNKEL()
		{
			return (::OEAKPLCANOI**)UnitySDK::FromName("", "OEAKPLCANOI")->GetStaticField(0x6A130);
		}

		static ::System::Int32* StaticGet_NDAPMBOHJAB()
		{
			return (::System::Int32*)UnitySDK::FromName("", "OEAKPLCANOI")->GetStaticField(0x14F30);
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

		::System::Void FKLCENDAHNA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAKPLCANOI_FKLCENDAHNA_OFFSET))(this);
		}

		::System::Void AJGDEKDDHAG(::RPG::GameCore::FourRotateVoxelLevelSettings* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FourRotateVoxelLevelSettings*))((::PBYTE)hIl2Cpp + OEAKPLCANOI_AJGDEKDDHAG_OFFSET))(this, a1);
		}

		::System::Void IEDFPLNECBG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAKPLCANOI_IEDFPLNECBG_OFFSET))(this);
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

		::System::Void JMPIFIEGNBK(::RPG::GameCore::LittleGameEntityConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + OEAKPLCANOI_JMPIFIEGNBK_OFFSET))(this, a1);
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

		::System::Void __OnTick_b__58_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAKPLCANOI___ONTICK_B__58_0_OFFSET))(this);
		}

		static ::System::Int32 __BuildEntities_g__GetIndex_60_4(::RPG::GameCore::LittleGameEntityConfig* a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + OEAKPLCANOI___BUILDENTITIES_G__GETINDEX_60_4_OFFSET))(a1);
		}

	};
