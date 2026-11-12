#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOPPJDFMDGH.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AKOBFMCEJKL_LABGODKGGEM.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace RPG::GameCore { class SkillConfig; }
namespace RPG::GameCore { class SkillData; }
namespace RPG::GameCore { class TeamDataComponent; }
namespace RPG::GameCore { class TeamFormationComponent; }
namespace RPG::GameCore { class TransformComponent; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AKOBFMCEJKL_AGNLBPEBLCG_OFFSET UNITYSDK_OFFSET(0x163C1950)
#define AKOBFMCEJKL_AINHHFAGEHH_OFFSET UNITYSDK_OFFSET(0x163C1160)
#define AKOBFMCEJKL_AMMMDALENGO_OFFSET UNITYSDK_OFFSET(0x163C3F70)
#define AKOBFMCEJKL_BFAHGFEDOGF_OFFSET UNITYSDK_OFFSET(0x163C4490)
#define AKOBFMCEJKL_CKFAAOFAADC_OFFSET UNITYSDK_OFFSET(0x163C0050)
#define AKOBFMCEJKL_CKIECDKGPGB_OFFSET UNITYSDK_OFFSET(0x163C1E30)
#define AKOBFMCEJKL_CLMIPKKHFKG_OFFSET UNITYSDK_OFFSET(0x163C20B0)
#define AKOBFMCEJKL_CLOLCGNAFOA_OFFSET UNITYSDK_OFFSET(0x163C2310)
#define AKOBFMCEJKL_COEELAFOAML_OFFSET UNITYSDK_OFFSET(0x163C5000)
#define AKOBFMCEJKL_CTOR_OFFSET UNITYSDK_OFFSET(0x163C52E0)
#define AKOBFMCEJKL_DGAJLOHBHBH_OFFSET UNITYSDK_OFFSET(0x163C14C0)
#define AKOBFMCEJKL_EEBEJCNHHOB_OFFSET UNITYSDK_OFFSET(0x163C1A90)
#define AKOBFMCEJKL_EPDENPCJHIN_OFFSET UNITYSDK_OFFSET(0x163C02A0)
#define AKOBFMCEJKL_FFIPOAPCELK_OFFSET UNITYSDK_OFFSET(0x163C0B80)
#define AKOBFMCEJKL_FHDGLHBAGGK_OFFSET UNITYSDK_OFFSET(0x163BFC90)
#define AKOBFMCEJKL_FHOMIPDFGLE_OFFSET UNITYSDK_OFFSET(0x163C3E00)
#define AKOBFMCEJKL_FHPLEEMBBON_OFFSET UNITYSDK_OFFSET(0x163C3760)
#define AKOBFMCEJKL_FIMIACGAPGK_OFFSET UNITYSDK_OFFSET(0x163BFE30)
#define AKOBFMCEJKL_GET_CACHEBEYONDSELECTTARGETS_OFFSET UNITYSDK_OFFSET(0x163C5290)
#define AKOBFMCEJKL_GET_CACHECURRENTMERGEDTARGETS_OFFSET UNITYSDK_OFFSET(0x163C52B0)
#define AKOBFMCEJKL_GET_CACHECURRENTSUBTARGETS_OFFSET UNITYSDK_OFFSET(0x163C5280)
#define AKOBFMCEJKL_GET_CACHECURRENTTARGETS_OFFSET UNITYSDK_OFFSET(0x163C5270)
#define AKOBFMCEJKL_GET_CACHEFADETARGETS_OFFSET UNITYSDK_OFFSET(0x163C52A0)
#define AKOBFMCEJKL_GET_DRAGPOINTDELTA_OFFSET UNITYSDK_OFFSET(0x163C5250)
#define AKOBFMCEJKL_GET_ISSCREENPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x163C5230)
#define AKOBFMCEJKL_GET__BACKROWBEYONDDARKTOLIGHTCACHELIST_OFFSET UNITYSDK_OFFSET(0x163C52D0)
#define AKOBFMCEJKL_GET__BACKROWBEYONDLIGHTTODARKCACHELIST_OFFSET UNITYSDK_OFFSET(0x163C52C0)
#define AKOBFMCEJKL_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x163BFA70)
#define AKOBFMCEJKL_HAENBLAPJGC_OFFSET UNITYSDK_OFFSET(0x163C1FD0)
#define AKOBFMCEJKL_HELEMMGKPPO_OFFSET UNITYSDK_OFFSET(0x163C1B30)
#define AKOBFMCEJKL_INLEJMCDJMD_OFFSET UNITYSDK_OFFSET(0x163C0B00)
#define AKOBFMCEJKL_JAIACAEHHAD_OFFSET UNITYSDK_OFFSET(0x163C42F0)
#define AKOBFMCEJKL_JHCGANDHBHL_OFFSET UNITYSDK_OFFSET(0x163C1900)
#define AKOBFMCEJKL_JIMJBPFLBBM_OFFSET UNITYSDK_OFFSET(0x163C08F0)
#define AKOBFMCEJKL_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x163BF950)
#define AKOBFMCEJKL_JMCCNPIPPNA_OFFSET UNITYSDK_OFFSET(0x163BF9B0)
#define AKOBFMCEJKL_JNCNAHANDPP_OFFSET UNITYSDK_OFFSET(0x163C0AB0)
#define AKOBFMCEJKL_JPBNDIAMKDC_OFFSET UNITYSDK_OFFSET(0x163C0D40)
#define AKOBFMCEJKL_KBNKCMBPFGE_OFFSET UNITYSDK_OFFSET(0x163C1AE0)
#define AKOBFMCEJKL_KIDCGBMKJBA_OFFSET UNITYSDK_OFFSET(0x163C4D30)
#define AKOBFMCEJKL_KOCIINMPJMH_OFFSET UNITYSDK_OFFSET(0x163C1550)
#define AKOBFMCEJKL_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x163BF7B0)
#define AKOBFMCEJKL_LHPLNMPMNIA_OFFSET UNITYSDK_OFFSET(0x163C1250)
#define AKOBFMCEJKL_LLAFAFPPJOG_OFFSET UNITYSDK_OFFSET(0x163C26A0)
#define AKOBFMCEJKL_MAAHDDFMMDA_OFFSET UNITYSDK_OFFSET(0x163C2F40)
#define AKOBFMCEJKL_MAJMDHPJGBC_OFFSET UNITYSDK_OFFSET(0x163C1090)
#define AKOBFMCEJKL_MBOEOJDIJMM_OFFSET UNITYSDK_OFFSET(0x163C4380)
#define AKOBFMCEJKL_MFOPGHPBMBK_OFFSET UNITYSDK_OFFSET(0x163C0CA0)
#define AKOBFMCEJKL_MGGAOGDCIEL_OFFSET UNITYSDK_OFFSET(0x163C3900)
#define AKOBFMCEJKL_MLEAHPKNALJ_OFFSET UNITYSDK_OFFSET(0x163C2A50)
#define AKOBFMCEJKL_MPNHIDLBCDD_OFFSET UNITYSDK_OFFSET(0x163C0630)
#define AKOBFMCEJKL_ONOLKHILFLA_OFFSET UNITYSDK_OFFSET(0x163C3BA0)
#define AKOBFMCEJKL_PBBEINJGAOE_OFFSET UNITYSDK_OFFSET(0x163BF830)
#define AKOBFMCEJKL_PBFEIELCJBH_OFFSET UNITYSDK_OFFSET(0x163C22A0)
#define AKOBFMCEJKL_PIEMPJLCGKC_OFFSET UNITYSDK_OFFSET(0x163BFB90)
#define AKOBFMCEJKL_SET_DRAGPOINTDELTA_OFFSET UNITYSDK_OFFSET(0x163C5260)
#define AKOBFMCEJKL_SET_ISSCREENPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x163C5240)

inline static constexpr unsigned int AKOBFMCEJKL_TypeDefinitionIndex = 74434;

	class AKOBFMCEJKL : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _CacheBeyondSelectTargets_k__BackingField; // 0x10
		::RPG::GameCore::SkillData* KCICKBIHDGI; // 0x18
		::System::Collections::Generic::List_1<::FOPPJDFMDGH>* JEIAJCIOCMO; // 0x20
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* GNCGHCIGBEK; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>* BOHJHHDMCEE; // 0x30
		::RPG::GameCore::GameEntity* BOIFNBDCMFH; // 0x38
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* __BackRowBeyondLightToDarkCacheList_k__BackingField; // 0x40
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* __BackRowBeyondDarkToLightCacheList_k__BackingField; // 0x48
		::RPG::GameCore::EntityManager* LPILDKDAGDP; // 0x50
		::RPG::GameCore::LevelUIComponent* CFKHNPGEAJA; // 0x58
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _CacheCurrentMergedTargets_k__BackingField; // 0x60
		::RPG::GameCore::TurnBasedGameMode* NFJODADGJNM; // 0x68
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* CBABFLDLCAO; // 0x70
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _CacheCurrentTargets_k__BackingField; // 0x78
		::RPG::GameCore::TeamDataComponent* EMGGDPMOIHB; // 0x80
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* FOIGOLICPDO; // 0x88
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _CacheCurrentSubTargets_k__BackingField; // 0x90
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x98
		::RPG::GameCore::SkillCharacterComponent* HAKHAGBFHOK; // 0xA0
		::RPG::GameCore::TeamFormationComponent* BCKCNKFLBIA; // 0xA8
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _CacheFadeTargets_k__BackingField; // 0xB0
		::RPG::GameCore::SkillConfig* NODIDMKBNJD; // 0xB8
		::RPG::GameCore::TransformComponent* CGAGGFKPMJN; // 0xC0
		::System::Single FLDGBHDDLFJ; // 0xC8
		::System::Boolean _IsScreenPointerDown_k__BackingField; // 0xCC
		::System::Boolean LHOCFEBNPCE; // 0xCD
		::System::Boolean CJGHKLCCJCE; // 0xCE
		::System::Boolean CPCEGFMBLMP; // 0xCF
		::System::Single _DragPointDelta_k__BackingField; // 0xD0
		// static const ::System::Object DCEFNJLMOLA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBFMCEJKL_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::BattleInstance* a1, ::RPG::GameCore::LevelUIComponent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*, ::RPG::GameCore::LevelUIComponent*))((::PBYTE)hIl2Cpp + AKOBFMCEJKL_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKOBFMCEJKL_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBFMCEJKL_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void PIEMPJLCGKC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKOBFMCEJKL_PIEMPJLCGKC_OFFSET))(this, a1);
		}

		::System::Boolean FHDGLHBAGGK(::UnityEngine::Vector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + AKOBFMCEJKL_FHDGLHBAGGK_OFFSET))(this, a1);
		}

		::System::Boolean FFIPOAPCELK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AKOBFMCEJKL_FFIPOAPCELK_OFFSET))(this, a1);
		}

		::System::Void INLEJMCDJMD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKOBFMCEJKL_INLEJMCDJMD_OFFSET))(this, a1);
		}

		::System::Void AINHHFAGEHH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBFMCEJKL_AINHHFAGEHH_OFFSET))(this);
		}

		::System::Void DGAJLOHBHBH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKOBFMCEJKL_DGAJLOHBHBH_OFFSET))(this, a1);
		}

		::System::Void JHCGANDHBHL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBFMCEJKL_JHCGANDHBHL_OFFSET))(this);
		}

		::System::Void PBBEINJGAOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBFMCEJKL_PBBEINJGAOE_OFFSET))(this);
		}

		::System::Void AGNLBPEBLCG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AKOBFMCEJKL_AGNLBPEBLCG_OFFSET))(this, a1);
		}

		::System::Void JPBNDIAMKDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBFMCEJKL_JPBNDIAMKDC_OFFSET))(this);
		}

		::System::Void EEBEJCNHHOB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AKOBFMCEJKL_EEBEJCNHHOB_OFFSET))(this, a1);
		}

		::System::Void KBNKCMBPFGE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AKOBFMCEJKL_KBNKCMBPFGE_OFFSET))(this, a1);
		}

		::System::Void LHPLNMPMNIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBFMCEJKL_LHPLNMPMNIA_OFFSET))(this);
		}

		::System::Void KOCIINMPJMH(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AKOBFMCEJKL_KOCIINMPJMH_OFFSET))(this, a1, a2);
		}

		::System::Void CKFAAOFAADC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBFMCEJKL_CKFAAOFAADC_OFFSET))(this);
		}

		::System::Boolean EPDENPCJHIN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBFMCEJKL_EPDENPCJHIN_OFFSET))(this);
		}

		::System::Void MPNHIDLBCDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBFMCEJKL_MPNHIDLBCDD_OFFSET))(this);
		}

		::System::Boolean HELEMMGKPPO(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AKOBFMCEJKL_HELEMMGKPPO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 CKIECDKGPGB(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AKOBFMCEJKL_CKIECDKGPGB_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean HAENBLAPJGC(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AKOBFMCEJKL_HAENBLAPJGC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean CLMIPKKHFKG(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AKOBFMCEJKL_CLMIPKKHFKG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean JIMJBPFLBBM(::UnityEngine::Vector2 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::System::Int32))((::PBYTE)hIl2Cpp + AKOBFMCEJKL_JIMJBPFLBBM_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::TeamFormationComponent* FIMIACGAPGK()
		{
			return ((::RPG::GameCore::TeamFormationComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBFMCEJKL_FIMIACGAPGK_OFFSET))(this);
		}

		::System::Void JMCCNPIPPNA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKOBFMCEJKL_JMCCNPIPPNA_OFFSET))(this, a1);
		}

		::System::Void PBFEIELCJBH(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKOBFMCEJKL_PBFEIELCJBH_OFFSET))(this, a1);
		}

		::System::Void JNCNAHANDPP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBFMCEJKL_JNCNAHANDPP_OFFSET))(this);
		}

		::System::Void MFOPGHPBMBK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKOBFMCEJKL_MFOPGHPBMBK_OFFSET))(this, a1);
		}

		::System::Void CLOLCGNAFOA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBFMCEJKL_CLOLCGNAFOA_OFFSET))(this);
		}

		::System::Void MGGAOGDCIEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBFMCEJKL_MGGAOGDCIEL_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* LLAFAFPPJOG(::System::Boolean a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKOBFMCEJKL_LLAFAFPPJOG_OFFSET))(this, a1);
		}

		::System::Boolean ONOLKHILFLA(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + AKOBFMCEJKL_ONOLKHILFLA_OFFSET))(this, a1, a2);
		}

		::System::Boolean FHOMIPDFGLE(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AKOBFMCEJKL_FHOMIPDFGLE_OFFSET))(this, a1);
		}

		::System::Boolean MLEAHPKNALJ(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + AKOBFMCEJKL_MLEAHPKNALJ_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* JAIACAEHHAD()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBFMCEJKL_JAIACAEHHAD_OFFSET))(this);
		}

		::System::Void MAAHDDFMMDA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBFMCEJKL_MAAHDDFMMDA_OFFSET))(this);
		}

		::System::Void FHPLEEMBBON(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AKOBFMCEJKL_FHPLEEMBBON_OFFSET))(this, a1);
		}

		::System::Void MAJMDHPJGBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBFMCEJKL_MAJMDHPJGBC_OFFSET))(this);
		}

		::System::Void MBOEOJDIJMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBFMCEJKL_MBOEOJDIJMM_OFFSET))(this);
		}

		::System::Void BFAHGFEDOGF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBFMCEJKL_BFAHGFEDOGF_OFFSET))(this);
		}

		::System::Void KIDCGBMKJBA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBFMCEJKL_KIDCGBMKJBA_OFFSET))(this);
		}

		::System::Void COEELAFOAML(::RPG::GameCore::GameEntity* a1, ::AKOBFMCEJKL_LABGODKGGEM a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::AKOBFMCEJKL_LABGODKGGEM))((::PBYTE)hIl2Cpp + AKOBFMCEJKL_COEELAFOAML_OFFSET))(this, a1, a2);
		}

		::System::Void AMMMDALENGO(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + AKOBFMCEJKL_AMMMDALENGO_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsScreenPointerDown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBFMCEJKL_GET_ISSCREENPOINTERDOWN_OFFSET))(this);
		}

		::System::Void set_IsScreenPointerDown(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKOBFMCEJKL_SET_ISSCREENPOINTERDOWN_OFFSET))(this, a1);
		}

		::System::Single get_DragPointDelta()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBFMCEJKL_GET_DRAGPOINTDELTA_OFFSET))(this);
		}

		::System::Void set_DragPointDelta(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKOBFMCEJKL_SET_DRAGPOINTDELTA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get_CacheCurrentTargets()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBFMCEJKL_GET_CACHECURRENTTARGETS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get_CacheCurrentSubTargets()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBFMCEJKL_GET_CACHECURRENTSUBTARGETS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get_CacheBeyondSelectTargets()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBFMCEJKL_GET_CACHEBEYONDSELECTTARGETS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get_CacheFadeTargets()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBFMCEJKL_GET_CACHEFADETARGETS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get_CacheCurrentMergedTargets()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBFMCEJKL_GET_CACHECURRENTMERGEDTARGETS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get__BackRowBeyondLightToDarkCacheList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBFMCEJKL_GET__BACKROWBEYONDLIGHTTODARKCACHELIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get__BackRowBeyondDarkToLightCacheList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOBFMCEJKL_GET__BACKROWBEYONDDARKTOLIGHTCACHELIST_OFFSET))(this);
		}

	};
