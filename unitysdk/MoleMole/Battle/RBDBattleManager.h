#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBGABOFHFHL.h"
#include "unitysdk/KDIBDJABMDM.h"
#include "unitysdk/KMGGCBGCNPM.h"
#include "unitysdk/MoleMole/Battle/RBDBattleManager_OJBIDAFMHMM.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class CIEODNAJCEO;
class DIAEPBNFKBO;
class GHLDLOHAOGM;
class PFFLAOOPDII;
class POJCPPEHHFE;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Battle { class RBDBattleData; }
namespace MoleMole::Battle { class RBDEffectInfo; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_ADHJBHIOADO_OFFSET UNITYSDK_OFFSET(0x11A3E770)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_AOKOMHPOJKA_OFFSET UNITYSDK_OFFSET(0x11A38370)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x11A3DC40)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x11A3E100)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_BULLETTRIGGERDESTRUCTIBLEHIT_OFFSET UNITYSDK_OFFSET(0x11A386B0)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_CHECKENTITYINRUSH_OFFSET UNITYSDK_OFFSET(0x11A398E0)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_CHECKRESVALID_OFFSET UNITYSDK_OFFSET(0x11A378B0)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_CJOMMNANKKA_OFFSET UNITYSDK_OFFSET(0x11A3D930)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_DKIMMFCKEPC_OFFSET UNITYSDK_OFFSET(0x11A3F520)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_EBHBPCBLEMM_OFFSET UNITYSDK_OFFSET(0x11A3FD10)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_EJLNOEOJOLN_OFFSET UNITYSDK_OFFSET(0x11A3F300)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_FBDFJNFGOPC_OFFSET UNITYSDK_OFFSET(0x11A3F890)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_FFIJLGONBLL_OFFSET UNITYSDK_OFFSET(0x11A39660)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x11A3AA60)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_GETRUNTIMEDATA_OFFSET UNITYSDK_OFFSET(0x11A39A90)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_GFCLGINCAOO_OFFSET UNITYSDK_OFFSET(0x11A3BED0)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_HITDESTRUCTIBLE_OFFSET UNITYSDK_OFFSET(0x11A37480)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_IFEBHFNACDJ_OFFSET UNITYSDK_OFFSET(0x11A40480)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_JLNFNJCNEJL_OFFSET UNITYSDK_OFFSET(0x11A3EEE0)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_KANMDKIGDOJ_OFFSET UNITYSDK_OFFSET(0x11A3FFA0)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_KMILCKPHIKM_OFFSET UNITYSDK_OFFSET(0x11A3ACA0)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_KPAFDDABDKB_OFFSET UNITYSDK_OFFSET(0x11A3C3D0)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_LLDNJOADIEN_OFFSET UNITYSDK_OFFSET(0x11A3BC10)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_LPKDCIOMKMD_OFFSET UNITYSDK_OFFSET(0x11A39F60)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_MDJIBGABKBF_OFFSET UNITYSDK_OFFSET(0x11A40250)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_NPPPMCMDKIJ_OFFSET UNITYSDK_OFFSET(0x11A3D260)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_OICLJNDGLKL_OFFSET UNITYSDK_OFFSET(0x11A3ED00)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x11A3E0B0)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_OOGCFKMGADO_OFFSET UNITYSDK_OFFSET(0x11A37D40)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_PROCESSDESTROY_OFFSET UNITYSDK_OFFSET(0x11A3D710)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_PROCESSGROUNDED_OFFSET UNITYSDK_OFFSET(0x11A3D4F0)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_PROCESSHITBREAK_OFFSET UNITYSDK_OFFSET(0x11A3C1A0)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_START_OFFSET UNITYSDK_OFFSET(0x11A3DBF0)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_TRIGGERCOLLIDERASYNC_OFFSET UNITYSDK_OFFSET(0x11A38A60)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x11A3E540)
#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x11A3E420)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int RBDBattleManager_TypeDefinitionIndex = 82383;

	class RBDBattleManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet__raycastHits()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(RBDBattleManager_TypeDefinitionIndex)->GetStaticField(0x31830);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Battle::RBDBattleData*>** StaticGet_m_dicRuntimeDatas()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Battle::RBDBattleData*>**)Il2CppClass::FromTypeDefinitionIndex(RBDBattleManager_TypeDefinitionIndex)->GetStaticField(0x31838);
		}
		static ::System::Collections::Generic::List_1<::POJCPPEHHFE*>** StaticGet_m_lstRuntimeAudioInfos()
		{
			return (::System::Collections::Generic::List_1<::POJCPPEHHFE*>**)Il2CppClass::FromTypeDefinitionIndex(RBDBattleManager_TypeDefinitionIndex)->GetStaticField(0x31840);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Queue_1<::CIEODNAJCEO*>*>** StaticGet_m_dicRuntimeEffects()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Queue_1<::CIEODNAJCEO*>*>**)Il2CppClass::FromTypeDefinitionIndex(RBDBattleManager_TypeDefinitionIndex)->GetStaticField(0x31848);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Battle::RBDEffectInfo*>** StaticGet_m_dicEffectLimits()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Battle::RBDEffectInfo*>**)Il2CppClass::FromTypeDefinitionIndex(RBDBattleManager_TypeDefinitionIndex)->GetStaticField(0x31850);
		}
		static ::Unity::Collections::NativeArray_1<::System::Object*>* StaticGet__castJobInDatas()
		{
			return (::Unity::Collections::NativeArray_1<::System::Object*>*)Il2CppClass::FromTypeDefinitionIndex(RBDBattleManager_TypeDefinitionIndex)->GetStaticField(0xA740);
		}
		static ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>* StaticGet__hitResults()
		{
			return (::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>*)Il2CppClass::FromTypeDefinitionIndex(RBDBattleManager_TypeDefinitionIndex)->GetStaticField(0xA750);
		}
		static ::System::Int32* StaticGet_m_nArrayCurIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RBDBattleManager_TypeDefinitionIndex)->GetStaticField(0xA760);
		}
		static ::System::Boolean* StaticGet_ENABLE_HIT_DESTRUCTIBLE()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RBDBattleManager_TypeDefinitionIndex)->GetStaticField(0xA764);
		}
		static ::Unity::Collections::NativeArray_1<::System::Int32>* StaticGet__hitCounts()
		{
			return (::Unity::Collections::NativeArray_1<::System::Int32>*)Il2CppClass::FromTypeDefinitionIndex(RBDBattleManager_TypeDefinitionIndex)->GetStaticField(0xA768);
		}
		static ::Unity::Collections::NativeArray_1<::System::Object*>* StaticGet__castBaseDatas()
		{
			return (::Unity::Collections::NativeArray_1<::System::Object*>*)Il2CppClass::FromTypeDefinitionIndex(RBDBattleManager_TypeDefinitionIndex)->GetStaticField(0xA778);
		}
		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet__hitResultsInJob()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(RBDBattleManager_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		// static const ::System::Single RETAIN_AUDIO_TIME; // 0x0
		// static const ::System::Int32 MAX_HIT_RESULT_NUM = 0x8; // 0x0
		// static const ::System::Int32 MAX_CAST_DATA_NUM = 0x10; // 0x0
		// static const ::System::String* CUSTOM_BREAK_PROPERTY_NAME; // 0x0
		// static const ::System::Int32 DEFAULT_EFFECT_LIMIT_NUM = 0x5; // 0x0
		// static const ::System::String* EVADE_ANIMATOR_TAG; // 0x0
		// static const ::System::String* EVADE_BACK_ANIMATOR_TAG; // 0x0
		::System::Boolean m_bOpenLogicRBD; // 0x18
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::List_1<::MoleMole::Battle::RBDEffectInfo*>* m_lstRBDEffectInfos; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::Battle::RBDBattleData*>* m_RBDDatas; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Boolean HitDestructible(::KDIBDJABMDM IMLLDOHDCNC, ::System::UInt32 IJAENCFFJEA, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>* JFGCINDEHOP)
		{
			return ((::System::Boolean(*)(::KDIBDJABMDM, ::System::UInt32, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_HITDESTRUCTIBLE_OFFSET))(IMLLDOHDCNC, IJAENCFFJEA, JFGCINDEHOP);
		}

		static ::System::Void BulletTriggerDestructibleHit(::KDIBDJABMDM IMLLDOHDCNC, ::System::UInt32 IJAENCFFJEA, ::PFFLAOOPDII* FEJBAMAHKKA)
		{
			return ((::System::Void(*)(::KDIBDJABMDM, ::System::UInt32, ::PFFLAOOPDII*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_BULLETTRIGGERDESTRUCTIBLEHIT_OFFSET))(IMLLDOHDCNC, IJAENCFFJEA, FEJBAMAHKKA);
		}

		static ::System::Void TriggerColliderAsync(::KDIBDJABMDM IMLLDOHDCNC, ::System::UInt32 IJAENCFFJEA)
		{
			return ((::System::Void(*)(::KDIBDJABMDM, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_TRIGGERCOLLIDERASYNC_OFFSET))(IMLLDOHDCNC, IJAENCFFJEA);
		}

		static ::System::Boolean CheckEntityInRush(::DIAEPBNFKBO* HBNBIBADGNH)
		{
			return ((::System::Boolean(*)(::DIAEPBNFKBO*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_CHECKENTITYINRUSH_OFFSET))(HBNBIBADGNH);
		}

		static ::MoleMole::Battle::RBDBattleManager_OJBIDAFMHMM CheckResValid(::KDIBDJABMDM IMLLDOHDCNC, ::System::UInt32 IJAENCFFJEA, ::System::Int32 DOLFGBPBAIN, ::UnityEngine::Vector3 LKKJMPKFCIA, ::UnityEngine::Vector3 LBKMCOKBJEA, ::UnityEngine::Vector3 ANNNDENOJJG)
		{
			return ((::MoleMole::Battle::RBDBattleManager_OJBIDAFMHMM(*)(::KDIBDJABMDM, ::System::UInt32, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_CHECKRESVALID_OFFSET))(IMLLDOHDCNC, IJAENCFFJEA, DOLFGBPBAIN, LKKJMPKFCIA, LBKMCOKBJEA, ANNNDENOJJG);
		}

		static ::MoleMole::Battle::RBDBattleData* GetRuntimeData(::System::Int32 MGMDLMBEDJF)
		{
			return ((::MoleMole::Battle::RBDBattleData*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_GETRUNTIMEDATA_OFFSET))(MGMDLMBEDJF);
		}

		static ::System::Void FixedUpdate(::System::Single LHLNCMNBGAG)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_FIXEDUPDATE_OFFSET))(LHLNCMNBGAG);
		}

		static ::System::Void ProcessHitBreak(::Il2CppArray<::System::Object*>* FHGFMBBLNPA, ::System::Int32 ANFFADCGGHI)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_PROCESSHITBREAK_OFFSET))(FHGFMBBLNPA, ANFFADCGGHI);
		}

		static ::System::Void ProcessGrounded(::Il2CppArray<::System::Object*>* FHGFMBBLNPA, ::System::Int32 ANFFADCGGHI)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_PROCESSGROUNDED_OFFSET))(FHGFMBBLNPA, ANFFADCGGHI);
		}

		static ::System::Void ProcessDestroy(::Il2CppArray<::System::Object*>* FHGFMBBLNPA, ::System::Int32 ANFFADCGGHI)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_PROCESSDESTROY_OFFSET))(FHGFMBBLNPA, ANFFADCGGHI);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_ONDESTROY_OFFSET))(this);
		}

		static ::System::Void LLDNJOADIEN(::System::Boolean FBILHHBPEHD, ::MoleMole::Battle::RBDBattleData* MKBCMHIAMHF)
		{
			return ((::System::Void(*)(::System::Boolean, ::MoleMole::Battle::RBDBattleData*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_LLDNJOADIEN_OFFSET))(FBILHHBPEHD, MKBCMHIAMHF);
		}

		static ::System::Single OOGCFKMGADO(::System::Int32 HJIJHNHLPOJ, ::KDIBDJABMDM IMLLDOHDCNC, ::System::UInt32 IJAENCFFJEA)
		{
			return ((::System::Single(*)(::System::Int32, ::KDIBDJABMDM, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_OOGCFKMGADO_OFFSET))(HJIJHNHLPOJ, IMLLDOHDCNC, IJAENCFFJEA);
		}

		static ::System::Void AOKOMHPOJKA(::System::Int32 HJIJHNHLPOJ, ::UnityEngine::Vector3 ANNNDENOJJG)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_AOKOMHPOJKA_OFFSET))(HJIJHNHLPOJ, ANNNDENOJJG);
		}

		static ::System::Void GFCLGINCAOO()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_GFCLGINCAOO_OFFSET))();
		}

		::System::Void BBOMJDBNHIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_BBOMJDBNHIC_OFFSET))(this);
		}

		static ::System::Void JLNFNJCNEJL(::MoleMole::Battle::RBDBattleData* MKBCMHIAMHF)
		{
			return ((::System::Void(*)(::MoleMole::Battle::RBDBattleData*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_JLNFNJCNEJL_OFFSET))(MKBCMHIAMHF);
		}

		static ::MoleMole::Battle::RBDBattleManager_OJBIDAFMHMM LPKDCIOMKMD(::MoleMole::Battle::RBDBattleData* MKBCMHIAMHF, ::KDIBDJABMDM IMLLDOHDCNC, ::UnityEngine::Vector3 LKKJMPKFCIA, ::UnityEngine::Vector3 LBKMCOKBJEA, ::UnityEngine::Vector3 ANNNDENOJJG, ::MoleMole::Battle::Entity* MFMPICKHAMJ)
		{
			return ((::MoleMole::Battle::RBDBattleManager_OJBIDAFMHMM(*)(::MoleMole::Battle::RBDBattleData*, ::KDIBDJABMDM, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_LPKDCIOMKMD_OFFSET))(MKBCMHIAMHF, IMLLDOHDCNC, LKKJMPKFCIA, LBKMCOKBJEA, ANNNDENOJJG, MFMPICKHAMJ);
		}

		static ::System::Void EJLNOEOJOLN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_EJLNOEOJOLN_OFFSET))();
		}

		static ::System::Void KMILCKPHIKM()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_KMILCKPHIKM_OFFSET))();
		}

		static ::System::Boolean DKIMMFCKEPC(::System::String* KIPAABMPICE, ::UnityEngine::Vector3 CKPGOKHECCH)
		{
			return ((::System::Boolean(*)(::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_DKIMMFCKEPC_OFFSET))(KIPAABMPICE, CKPGOKHECCH);
		}

		static ::System::Void CJOMMNANKKA(::System::Int32 ANFFADCGGHI, ::System::Int32 BDNCMNNDOBB)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_CJOMMNANKKA_OFFSET))(ANFFADCGGHI, BDNCMNNDOBB);
		}

		::System::Void BJANDJKKNCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_BJANDJKKNCD_OFFSET))(this);
		}

		::System::Void FBDFJNFGOPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_FBDFJNFGOPC_OFFSET))(this);
		}

		static ::System::Void NPPPMCMDKIJ(::System::Int32 ANFFADCGGHI, ::System::Int32 BDNCMNNDOBB)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_NPPPMCMDKIJ_OFFSET))(ANFFADCGGHI, BDNCMNNDOBB);
		}

		static ::System::Void KANMDKIGDOJ(::System::String* HIAIKHDFCLN, ::MoleMole::Battle::RBDBattleData* MKBCMHIAMHF, ::System::Boolean BCILCINLCGC)
		{
			return ((::System::Void(*)(::System::String*, ::MoleMole::Battle::RBDBattleData*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_KANMDKIGDOJ_OFFSET))(HIAIKHDFCLN, MKBCMHIAMHF, BCILCINLCGC);
		}

		static ::System::Void EBHBPCBLEMM()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_EBHBPCBLEMM_OFFSET))();
		}

		static ::System::Void FFIJLGONBLL(::KDIBDJABMDM BNCDPFLLGKD, ::System::UInt32 LONODJEPPGL, ::EBGABOFHFHL GKNOAHFGNKJ, ::UnityEngine::Vector3 FGLJPLFOOKH, ::UnityEngine::Vector3 JKJBHEJKNDO, ::System::Single NCCDJLDKFGA, ::UnityEngine::Vector3 DAAEHEHLLLD, ::System::Single KGKGLNJAJGN, ::System::Int32 LBPIPEAKPDG)
		{
			return ((::System::Void(*)(::KDIBDJABMDM, ::System::UInt32, ::EBGABOFHFHL, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_FFIJLGONBLL_OFFSET))(BNCDPFLLGKD, LONODJEPPGL, GKNOAHFGNKJ, FGLJPLFOOKH, JKJBHEJKNDO, NCCDJLDKFGA, DAAEHEHLLLD, KGKGLNJAJGN, LBPIPEAKPDG);
		}

		static ::System::Boolean MDJIBGABKBF(::System::String* KIPAABMPICE)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_MDJIBGABKBF_OFFSET))(KIPAABMPICE);
		}

		::System::Boolean IFEBHFNACDJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_IFEBHFNACDJ_OFFSET))(this);
		}

		::System::Void ADHJBHIOADO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_ADHJBHIOADO_OFFSET))(this);
		}

		static ::System::Void KPAFDDABDKB(::KMGGCBGCNPM IMLLDOHDCNC, ::System::Int32 ANFFADCGGHI, ::System::Int32 BDNCMNNDOBB, ::UnityEngine::Vector3 CKPGOKHECCH, ::UnityEngine::Vector3 DAAEHEHLLLD, ::System::Single AINCMLCGIDK)
		{
			return ((::System::Void(*)(::KMGGCBGCNPM, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_KPAFDDABDKB_OFFSET))(IMLLDOHDCNC, ANFFADCGGHI, BDNCMNNDOBB, CKPGOKHECCH, DAAEHEHLLLD, AINCMLCGIDK);
		}

		static ::System::Void OICLJNDGLKL()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_OICLJNDGLKL_OFFSET))();
		}
	};
}
