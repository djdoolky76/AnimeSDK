#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOPPJDFMDGH.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/System/Object.h"
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
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JCHCMMOKOOB_AGNLBPEBLCG_OFFSET UNITYSDK_OFFSET(0xB8D1E50)
#define JCHCMMOKOOB_AINHHFAGEHH_OFFSET UNITYSDK_OFFSET(0xB8D1030)
#define JCHCMMOKOOB_ALAKODEDPED_OFFSET UNITYSDK_OFFSET(0xB8CFD20)
#define JCHCMMOKOOB_AMMMDALENGO_OFFSET UNITYSDK_OFFSET(0xB8D4350)
#define JCHCMMOKOOB_BFAHGFEDOGF_OFFSET UNITYSDK_OFFSET(0xB8D64F0)
#define JCHCMMOKOOB_CKFAAOFAADC_OFFSET UNITYSDK_OFFSET(0xB8D02A0)
#define JCHCMMOKOOB_CKIECDKGPGB_OFFSET UNITYSDK_OFFSET(0xB8D22E0)
#define JCHCMMOKOOB_CLMIPKKHFKG_OFFSET UNITYSDK_OFFSET(0xB8D2560)
#define JCHCMMOKOOB_CLOLCGNAFOA_OFFSET UNITYSDK_OFFSET(0xB8D27C0)
#define JCHCMMOKOOB_CTOR_OFFSET UNITYSDK_OFFSET(0xB8D6E40)
#define JCHCMMOKOOB_DGAJLOHBHBH_OFFSET UNITYSDK_OFFSET(0xB8D1B90)
#define JCHCMMOKOOB_EEBEJCNHHOB_OFFSET UNITYSDK_OFFSET(0xB8D1F40)
#define JCHCMMOKOOB_EPDENPCJHIN_OFFSET UNITYSDK_OFFSET(0xB8D0460)
#define JCHCMMOKOOB_FFIPOAPCELK_OFFSET UNITYSDK_OFFSET(0xB8D0E10)
#define JCHCMMOKOOB_FHDGLHBAGGK_OFFSET UNITYSDK_OFFSET(0xB8CFD80)
#define JCHCMMOKOOB_FHOMIPDFGLE_OFFSET UNITYSDK_OFFSET(0xB8D41E0)
#define JCHCMMOKOOB_FHPLEEMBBON_OFFSET UNITYSDK_OFFSET(0xB8D3B30)
#define JCHCMMOKOOB_FIMIACGAPGK_OFFSET UNITYSDK_OFFSET(0xB8D00B0)
#define JCHCMMOKOOB_FOPOAGJGLMC_OFFSET UNITYSDK_OFFSET(0xB8D4760)
#define JCHCMMOKOOB_GET_CACHEBEYONDSELECTTARGETS_OFFSET UNITYSDK_OFFSET(0xB8D6DF0)
#define JCHCMMOKOOB_GET_CACHECURRENTMERGEDTARGETS_OFFSET UNITYSDK_OFFSET(0xB8D6E10)
#define JCHCMMOKOOB_GET_CACHECURRENTSUBTARGETS_OFFSET UNITYSDK_OFFSET(0xB8D6DE0)
#define JCHCMMOKOOB_GET_CACHECURRENTTARGETS_OFFSET UNITYSDK_OFFSET(0xB8D6DD0)
#define JCHCMMOKOOB_GET_CACHEFADETARGETS_OFFSET UNITYSDK_OFFSET(0xB8D6E00)
#define JCHCMMOKOOB_GET_DRAGPOINTDELTA_OFFSET UNITYSDK_OFFSET(0xB8D6DB0)
#define JCHCMMOKOOB_GET_ISSCREENPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0xB8D6D90)
#define JCHCMMOKOOB_GET__BACKROWBEYONDDARKTOLIGHTCACHELIST_OFFSET UNITYSDK_OFFSET(0xB8D6E30)
#define JCHCMMOKOOB_GET__BACKROWBEYONDLIGHTTODARKCACHELIST_OFFSET UNITYSDK_OFFSET(0xB8D6E20)
#define JCHCMMOKOOB_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xB8CFAF0)
#define JCHCMMOKOOB_HAENBLAPJGC_OFFSET UNITYSDK_OFFSET(0xB8D2480)
#define JCHCMMOKOOB_HELEMMGKPPO_OFFSET UNITYSDK_OFFSET(0xB8D1FE0)
#define JCHCMMOKOOB_INLEJMCDJMD_OFFSET UNITYSDK_OFFSET(0xB8D0CC0)
#define JCHCMMOKOOB_JAIACAEHHAD_OFFSET UNITYSDK_OFFSET(0xB8D46D0)
#define JCHCMMOKOOB_JHCGANDHBHL_OFFSET UNITYSDK_OFFSET(0xB8D1E00)
#define JCHCMMOKOOB_JIMJBPFLBBM_OFFSET UNITYSDK_OFFSET(0xB8D0AB0)
#define JCHCMMOKOOB_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB8CF9D0)
#define JCHCMMOKOOB_JMCCNPIPPNA_OFFSET UNITYSDK_OFFSET(0xB8CFA30)
#define JCHCMMOKOOB_JNCNAHANDPP_OFFSET UNITYSDK_OFFSET(0xB8D0C70)
#define JCHCMMOKOOB_JPBNDIAMKDC_OFFSET UNITYSDK_OFFSET(0xB8D1550)
#define JCHCMMOKOOB_KBNKCMBPFGE_OFFSET UNITYSDK_OFFSET(0xB8D1F90)
#define JCHCMMOKOOB_KIDCGBMKJBA_OFFSET UNITYSDK_OFFSET(0xB8D1120)
#define JCHCMMOKOOB_KOCIINMPJMH_OFFSET UNITYSDK_OFFSET(0xB8D1C20)
#define JCHCMMOKOOB_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB8CF810)
#define JCHCMMOKOOB_LHPLNMPMNIA_OFFSET UNITYSDK_OFFSET(0xB8D1920)
#define JCHCMMOKOOB_LLAFAFPPJOG_OFFSET UNITYSDK_OFFSET(0xB8D2B00)
#define JCHCMMOKOOB_MAAHDDFMMDA_OFFSET UNITYSDK_OFFSET(0xB8D33A0)
#define JCHCMMOKOOB_MAJMDHPJGBC_OFFSET UNITYSDK_OFFSET(0xB8D18A0)
#define JCHCMMOKOOB_MBOEOJDIJMM_OFFSET UNITYSDK_OFFSET(0xB8D6430)
#define JCHCMMOKOOB_MFOPGHPBMBK_OFFSET UNITYSDK_OFFSET(0xB8D14C0)
#define JCHCMMOKOOB_MGGAOGDCIEL_OFFSET UNITYSDK_OFFSET(0xB8D3CD0)
#define JCHCMMOKOOB_MIPBAMLJGBH_OFFSET UNITYSDK_OFFSET(0xB8D0030)
#define JCHCMMOKOOB_MLEAHPKNALJ_OFFSET UNITYSDK_OFFSET(0xB8D2EB0)
#define JCHCMMOKOOB_MPNHIDLBCDD_OFFSET UNITYSDK_OFFSET(0xB8D07F0)
#define JCHCMMOKOOB_NHLFGJBBIKB_OFFSET UNITYSDK_OFFSET(0xB8D55D0)
#define JCHCMMOKOOB_ODKOMPANJFA_OFFSET UNITYSDK_OFFSET(0xB8D0D40)
#define JCHCMMOKOOB_ONOLKHILFLA_OFFSET UNITYSDK_OFFSET(0xB8D3F80)
#define JCHCMMOKOOB_PBBEINJGAOE_OFFSET UNITYSDK_OFFSET(0xB8CF880)
#define JCHCMMOKOOB_PBFEIELCJBH_OFFSET UNITYSDK_OFFSET(0xB8D2750)
#define JCHCMMOKOOB_PIEMPJLCGKC_OFFSET UNITYSDK_OFFSET(0xB8CFC00)
#define JCHCMMOKOOB_SET_DRAGPOINTDELTA_OFFSET UNITYSDK_OFFSET(0xB8D6DC0)
#define JCHCMMOKOOB_SET_ISSCREENPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0xB8D6DA0)

inline static constexpr unsigned int JCHCMMOKOOB_TypeDefinitionIndex = 74282;

	class JCHCMMOKOOB : public ::System::Object
	{
	public:
		::RPG::GameCore::SkillData* KCICKBIHDGI; // 0x10
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _CacheCurrentTargets_k__BackingField; // 0x20
		::RPG::GameCore::TeamFormationComponent* BCKCNKFLBIA; // 0x28
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* GNCGHCIGBEK; // 0x30
		::System::Collections::Generic::List_1<::FOPPJDFMDGH>* JEIAJCIOCMO; // 0x38
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _CacheBeyondSelectTargets_k__BackingField; // 0x40
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _CacheFadeTargets_k__BackingField; // 0x48
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _CacheCurrentSubTargets_k__BackingField; // 0x50
		::RPG::GameCore::GameEntity* BOIFNBDCMFH; // 0x58
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* __BackRowBeyondDarkToLightCacheList_k__BackingField; // 0x60
		::RPG::GameCore::EntityManager* LPILDKDAGDP; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>* BOHJHHDMCEE; // 0x70
		::RPG::GameCore::TurnBasedGameMode* NFJODADGJNM; // 0x78
		::RPG::GameCore::SkillConfig* NODIDMKBNJD; // 0x80
		::RPG::GameCore::SkillCharacterComponent* HAKHAGBFHOK; // 0x88
		::RPG::GameCore::TransformComponent* CGAGGFKPMJN; // 0x90
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* CBABFLDLCAO; // 0x98
		::RPG::GameCore::LevelUIComponent* NNMDCMDKFHO; // 0xA0
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* FOIGOLICPDO; // 0xA8
		::RPG::GameCore::TeamDataComponent* EMGGDPMOIHB; // 0xB0
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _CacheCurrentMergedTargets_k__BackingField; // 0xB8
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* __BackRowBeyondLightToDarkCacheList_k__BackingField; // 0xC0
		::System::Single _DragPointDelta_k__BackingField; // 0xC8
		::System::Boolean _IsScreenPointerDown_k__BackingField; // 0xCC
		::System::Boolean CPCEGFMBLMP; // 0xCD
		::System::Boolean CJGHKLCCJCE; // 0xCE
		::System::Boolean LHOCFEBNPCE; // 0xCF
		::System::Single FLDGBHDDLFJ; // 0xD0
		// static const ::System::Object DCEFNJLMOLA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::BattleInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void PIEMPJLCGKC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_PIEMPJLCGKC_OFFSET))(this, a1);
		}

		::System::Boolean FHDGLHBAGGK(::UnityEngine::Vector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_FHDGLHBAGGK_OFFSET))(this, a1);
		}

		::System::Boolean ODKOMPANJFA(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_ODKOMPANJFA_OFFSET))(this, a1, a2);
		}

		::System::Boolean FFIPOAPCELK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_FFIPOAPCELK_OFFSET))(this, a1);
		}

		::System::Void INLEJMCDJMD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_INLEJMCDJMD_OFFSET))(this, a1);
		}

		::System::Void AINHHFAGEHH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_AINHHFAGEHH_OFFSET))(this);
		}

		::System::Void DGAJLOHBHBH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_DGAJLOHBHBH_OFFSET))(this, a1);
		}

		::System::Void JHCGANDHBHL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_JHCGANDHBHL_OFFSET))(this);
		}

		::System::Void PBBEINJGAOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_PBBEINJGAOE_OFFSET))(this);
		}

		::System::Void AGNLBPEBLCG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_AGNLBPEBLCG_OFFSET))(this, a1);
		}

		::System::Void JPBNDIAMKDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_JPBNDIAMKDC_OFFSET))(this);
		}

		::System::Void EEBEJCNHHOB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_EEBEJCNHHOB_OFFSET))(this, a1);
		}

		::System::Void KBNKCMBPFGE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_KBNKCMBPFGE_OFFSET))(this, a1);
		}

		::System::Void LHPLNMPMNIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_LHPLNMPMNIA_OFFSET))(this);
		}

		::System::Void KOCIINMPJMH(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_KOCIINMPJMH_OFFSET))(this, a1, a2);
		}

		::System::Void CKFAAOFAADC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_CKFAAOFAADC_OFFSET))(this);
		}

		::System::Boolean EPDENPCJHIN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_EPDENPCJHIN_OFFSET))(this);
		}

		::System::Void MPNHIDLBCDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_MPNHIDLBCDD_OFFSET))(this);
		}

		::System::Boolean HELEMMGKPPO(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_HELEMMGKPPO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 CKIECDKGPGB(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_CKIECDKGPGB_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean HAENBLAPJGC(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_HAENBLAPJGC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean CLMIPKKHFKG(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_CLMIPKKHFKG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean JIMJBPFLBBM(::UnityEngine::Vector2 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::System::Int32))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_JIMJBPFLBBM_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::TeamFormationComponent* FIMIACGAPGK()
		{
			return ((::RPG::GameCore::TeamFormationComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_FIMIACGAPGK_OFFSET))(this);
		}

		::System::Void JMCCNPIPPNA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_JMCCNPIPPNA_OFFSET))(this, a1);
		}

		::System::Void PBFEIELCJBH(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_PBFEIELCJBH_OFFSET))(this, a1);
		}

		::System::Void JNCNAHANDPP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_JNCNAHANDPP_OFFSET))(this);
		}

		::System::Void MFOPGHPBMBK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_MFOPGHPBMBK_OFFSET))(this, a1);
		}

		::System::Void CLOLCGNAFOA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_CLOLCGNAFOA_OFFSET))(this);
		}

		::System::Void MGGAOGDCIEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_MGGAOGDCIEL_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* LLAFAFPPJOG(::System::Boolean a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_LLAFAFPPJOG_OFFSET))(this, a1);
		}

		::System::Boolean ONOLKHILFLA(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_ONOLKHILFLA_OFFSET))(this, a1, a2);
		}

		::System::Boolean FHOMIPDFGLE(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_FHOMIPDFGLE_OFFSET))(this, a1);
		}

		::System::Boolean MLEAHPKNALJ(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_MLEAHPKNALJ_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* JAIACAEHHAD()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_JAIACAEHHAD_OFFSET))(this);
		}

		::System::Void MAAHDDFMMDA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_MAAHDDFMMDA_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* FOPOAGJGLMC(::RPG::GameCore::AliveStateMask a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID, ::RPG::GameCore::AliveStateMask, ::System::Boolean))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_FOPOAGJGLMC_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* NHLFGJBBIKB(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AliveStateMask a2)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveStateMask))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_NHLFGJBBIKB_OFFSET))(this, a1, a2);
		}

		::System::Void FHPLEEMBBON(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_FHPLEEMBBON_OFFSET))(this, a1);
		}

		::System::Void MAJMDHPJGBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_MAJMDHPJGBC_OFFSET))(this);
		}

		::System::Void MBOEOJDIJMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_MBOEOJDIJMM_OFFSET))(this);
		}

		::System::Void BFAHGFEDOGF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_BFAHGFEDOGF_OFFSET))(this);
		}

		::System::Void KIDCGBMKJBA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_KIDCGBMKJBA_OFFSET))(this);
		}

		::System::Void AMMMDALENGO(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_AMMMDALENGO_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsScreenPointerDown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_GET_ISSCREENPOINTERDOWN_OFFSET))(this);
		}

		::System::Void set_IsScreenPointerDown(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_SET_ISSCREENPOINTERDOWN_OFFSET))(this, a1);
		}

		::System::Single get_DragPointDelta()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_GET_DRAGPOINTDELTA_OFFSET))(this);
		}

		::System::Void set_DragPointDelta(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_SET_DRAGPOINTDELTA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get_CacheCurrentTargets()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_GET_CACHECURRENTTARGETS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get_CacheCurrentSubTargets()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_GET_CACHECURRENTSUBTARGETS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get_CacheBeyondSelectTargets()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_GET_CACHEBEYONDSELECTTARGETS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get_CacheFadeTargets()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_GET_CACHEFADETARGETS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get_CacheCurrentMergedTargets()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_GET_CACHECURRENTMERGEDTARGETS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get__BackRowBeyondLightToDarkCacheList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_GET__BACKROWBEYONDLIGHTTODARKCACHELIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get__BackRowBeyondDarkToLightCacheList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_GET__BACKROWBEYONDDARKTOLIGHTCACHELIST_OFFSET))(this);
		}

		::System::Int32 ALAKODEDPED()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_ALAKODEDPED_OFFSET))(this);
		}

		::RPG::GameCore::LevelUIComponent* MIPBAMLJGBH()
		{
			return ((::RPG::GameCore::LevelUIComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCHCMMOKOOB_MIPBAMLJGBH_OFFSET))(this);
		}

	};
