#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/ModifiableContactPair.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/PhysicsScene.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

class AIOGGGIHCAE;
class CBHALHKAKLC;
class CrowdModuleMonoListener;
class GEKNEEMAHBC;
class LFDDLEHKGIK;
class MonoEntityPostSimulationUpdateListener;
namespace MoleMole { class MonoEntityIKUpdateListener; }
namespace System { class Action; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class WaitForEndOfFrame; }
namespace UnityEngine { class WaitForFixedUpdate; }
template <typename T1, typename T2> class CNKGGMABMGE_2;

#define MOLEMOLE_GAMEENGINE_ADDDEPENDENCY_OFFSET UNITYSDK_OFFSET(0x14316BD0)
#define MOLEMOLE_GAMEENGINE_ADD_ONFRAMESTART_OFFSET UNITYSDK_OFFSET(0x14316630)
#define MOLEMOLE_GAMEENGINE_AFTERLOCALSTORAGELOADED_OFFSET UNITYSDK_OFFSET(0x14318C80)
#define MOLEMOLE_GAMEENGINE_AJBGCBFHLFJ_OFFSET UNITYSDK_OFFSET(0x14323940)
#define MOLEMOLE_GAMEENGINE_AKAELJJKAOB_OFFSET UNITYSDK_OFFSET(0x1431D210)
#define MOLEMOLE_GAMEENGINE_AKJOPBDGGKE_OFFSET UNITYSDK_OFFSET(0x14317C40)
#define MOLEMOLE_GAMEENGINE_AWAKE_OFFSET UNITYSDK_OFFSET(0x14316C60)
#define MOLEMOLE_GAMEENGINE_BIFHBOOLOAH_OFFSET UNITYSDK_OFFSET(0x14322300)
#define MOLEMOLE_GAMEENGINE_BINDEXTRAUPDATEPHASECALLBACK_OFFSET UNITYSDK_OFFSET(0x143176E0)
#define MOLEMOLE_GAMEENGINE_BMFHJKPABFA_OFFSET UNITYSDK_OFFSET(0x143187D0)
#define MOLEMOLE_GAMEENGINE_BNIGANIDEGL_OFFSET UNITYSDK_OFFSET(0x14324200)
#define MOLEMOLE_GAMEENGINE_CINPGGCAJPI_OFFSET UNITYSDK_OFFSET(0x1431FFF0)
#define MOLEMOLE_GAMEENGINE_CKAHBMBIJIM_OFFSET UNITYSDK_OFFSET(0x1431F3F0)
#define MOLEMOLE_GAMEENGINE_CKHFIDJIICA_OFFSET UNITYSDK_OFFSET(0x14321560)
#define MOLEMOLE_GAMEENGINE_CLAMPDOUBLE_OFFSET UNITYSDK_OFFSET(0x14316290)
#define MOLEMOLE_GAMEENGINE_CMMJCPIOLDL_OFFSET UNITYSDK_OFFSET(0x14321FA0)
#define MOLEMOLE_GAMEENGINE_CPKNNCBJKDH_OFFSET UNITYSDK_OFFSET(0x14319380)
#define MOLEMOLE_GAMEENGINE_CREATEWHENRESTART_OFFSET UNITYSDK_OFFSET(0x1431FAB0)
#define MOLEMOLE_GAMEENGINE_DBHMMFEKKID_OFFSET UNITYSDK_OFFSET(0x143202C0)
#define MOLEMOLE_GAMEENGINE_DISPOSEWHENRESTART_OFFSET UNITYSDK_OFFSET(0x1431FCD0)
#define MOLEMOLE_GAMEENGINE_DNFDNCOHLBH_OFFSET UNITYSDK_OFFSET(0x14322280)
#define MOLEMOLE_GAMEENGINE_DNIAECLNCGD_OFFSET UNITYSDK_OFFSET(0x14319650)
#define MOLEMOLE_GAMEENGINE_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x14318D80)
#define MOLEMOLE_GAMEENGINE_FORCEQUITAPPLICATION2_OFFSET UNITYSDK_OFFSET(0x1431F130)
#define MOLEMOLE_GAMEENGINE_FORCEQUITAPPLICATION_OFFSET UNITYSDK_OFFSET(0x1431EEE0)
#define MOLEMOLE_GAMEENGINE_GCDLMFAPPDB_OFFSET UNITYSDK_OFFSET(0x14321930)
#define MOLEMOLE_GAMEENGINE_GETCURGAMECONTEXT_OFFSET UNITYSDK_OFFSET(0x1431F790)
#define MOLEMOLE_GAMEENGINE_GETCURGAMETYPE_OFFSET UNITYSDK_OFFSET(0x1431F6F0)
#define MOLEMOLE_GAMEENGINE_GETLASTGAMECONTEXT_OFFSET UNITYSDK_OFFSET(0x1431F7E0)
#define MOLEMOLE_GAMEENGINE_GETLASTGAMETYPE_OFFSET UNITYSDK_OFFSET(0x1431F740)
#define MOLEMOLE_GAMEENGINE_GETNAPSEED_OFFSET UNITYSDK_OFFSET(0x14316730)
#define MOLEMOLE_GAMEENGINE_GET_APPLICATIONTARGETFRAMERATE_OFFSET UNITYSDK_OFFSET(0x143161B0)
#define MOLEMOLE_GAMEENGINE_GET_BUDGETSEC_OFFSET UNITYSDK_OFFSET(0x143161C0)
#define MOLEMOLE_GAMEENGINE_GET_CURGAME_OFFSET UNITYSDK_OFFSET(0x143163D0)
#define MOLEMOLE_GAMEENGINE_GET_CURRENTRUNSEED_OFFSET UNITYSDK_OFFSET(0x14316BB0)
#define MOLEMOLE_GAMEENGINE_GET_CURUISCENE_OFFSET UNITYSDK_OFFSET(0x143163E0)
#define MOLEMOLE_GAMEENGINE_GET_HANDLEINPUTINEARLYUPDATE_OFFSET UNITYSDK_OFFSET(0x14316330)
#define MOLEMOLE_GAMEENGINE_GET_ISDEVLEVEL_OFFSET UNITYSDK_OFFSET(0x14316440)
#define MOLEMOLE_GAMEENGINE_GET_ISLOADING_OFFSET UNITYSDK_OFFSET(0x143165D0)
#define MOLEMOLE_GAMEENGINE_GET_ISRESTART_OFFSET UNITYSDK_OFFSET(0x143163C0)
#define MOLEMOLE_GAMEENGINE_GET_ISSEEDED_OFFSET UNITYSDK_OFFSET(0x14316BC0)
#define MOLEMOLE_GAMEENGINE_GET_USEFULLTIMELIMIT_OFFSET UNITYSDK_OFFSET(0x14316190)
#define MOLEMOLE_GAMEENGINE_GET_USETIMELIMIT_OFFSET UNITYSDK_OFFSET(0x14316170)
#define MOLEMOLE_GAMEENGINE_GLOAGPFEFCJ_OFFSET UNITYSDK_OFFSET(0x14322E60)
#define MOLEMOLE_GAMEENGINE_GMKBFENBJJE_OFFSET UNITYSDK_OFFSET(0x14324A10)
#define MOLEMOLE_GAMEENGINE_GOTOLOGINGAME_OFFSET UNITYSDK_OFFSET(0x1431F830)
#define MOLEMOLE_GAMEENGINE_HDCEJHKDCIK_OFFSET UNITYSDK_OFFSET(0x14322380)
#define MOLEMOLE_GAMEENGINE_IKLPMFJLFDH_OFFSET UNITYSDK_OFFSET(0x14321710)
#define MOLEMOLE_GAMEENGINE_INITCONFIGDATA_OFFSET UNITYSDK_OFFSET(0x1431ECE0)
#define MOLEMOLE_GAMEENGINE_INITWHENRESTART_OFFSET UNITYSDK_OFFSET(0x1431FB00)
#define MOLEMOLE_GAMEENGINE_JECIPCJHNCH_OFFSET UNITYSDK_OFFSET(0x14316D50)
#define MOLEMOLE_GAMEENGINE_JHGOGOPMGBK_OFFSET UNITYSDK_OFFSET(0x14317EF0)
#define MOLEMOLE_GAMEENGINE_JJIHHJDOGKJ_OFFSET UNITYSDK_OFFSET(0x14324C90)
#define MOLEMOLE_GAMEENGINE_JMJGOEMOCOG_OFFSET UNITYSDK_OFFSET(0x14323980)
#define MOLEMOLE_GAMEENGINE_KFGNEKMALPI_OFFSET UNITYSDK_OFFSET(0x1431BD10)
#define MOLEMOLE_GAMEENGINE_KLPOBDPCMPC_OFFSET UNITYSDK_OFFSET(0x14316D90)
#define MOLEMOLE_GAMEENGINE_KMGAEJAJCFN_OFFSET UNITYSDK_OFFSET(0x1431D1A0)
#define MOLEMOLE_GAMEENGINE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1431C450)
#define MOLEMOLE_GAMEENGINE_LAUNCHERGAME_OFFSET UNITYSDK_OFFSET(0x1431F2C0)
#define MOLEMOLE_GAMEENGINE_LEIOJINEDHA_OFFSET UNITYSDK_OFFSET(0x143220B0)
#define MOLEMOLE_GAMEENGINE_MJLAPCGNMAM_OFFSET UNITYSDK_OFFSET(0x14324B20)
#define MOLEMOLE_GAMEENGINE_MJMCDPPDAPC_OFFSET UNITYSDK_OFFSET(0x14323D10)
#define MOLEMOLE_GAMEENGINE_MKDGHEMJIHI_OFFSET UNITYSDK_OFFSET(0x14323A10)
#define MOLEMOLE_GAMEENGINE_NAMKCDGIIPM_OFFSET UNITYSDK_OFFSET(0x1431CE50)
#define MOLEMOLE_GAMEENGINE_NNFLPJKLAOE_OFFSET UNITYSDK_OFFSET(0x14324880)
#define MOLEMOLE_GAMEENGINE_NPHNJABKNLH_OFFSET UNITYSDK_OFFSET(0x1431FB50)
#define MOLEMOLE_GAMEENGINE_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0x1431EAE0)
#define MOLEMOLE_GAMEENGINE_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x1431E650)
#define MOLEMOLE_GAMEENGINE_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x1431E330)
#define MOLEMOLE_GAMEENGINE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1431CF90)
#define MOLEMOLE_GAMEENGINE_PMLANGFADHB_OFFSET UNITYSDK_OFFSET(0x14320160)
#define MOLEMOLE_GAMEENGINE_POCKCPAPOFA_OFFSET UNITYSDK_OFFSET(0x1431BF80)
#define MOLEMOLE_GAMEENGINE_REGISTERCONTACTMODIFYEVENTCCD_OFFSET UNITYSDK_OFFSET(0x14319BB0)
#define MOLEMOLE_GAMEENGINE_REGISTERCONTACTMODIFYEVENT_OFFSET UNITYSDK_OFFSET(0x143198E0)
#define MOLEMOLE_GAMEENGINE_REMOVE_ONFRAMESTART_OFFSET UNITYSDK_OFFSET(0x143166B0)
#define MOLEMOLE_GAMEENGINE_SETLOADINGSTAGE_OFFSET UNITYSDK_OFFSET(0x1431F690)
#define MOLEMOLE_GAMEENGINE_SETUPCURRENTCULTURE_OFFSET UNITYSDK_OFFSET(0x14318820)
#define MOLEMOLE_GAMEENGINE_SET_BUDGETSEC_OFFSET UNITYSDK_OFFSET(0x143161D0)
#define MOLEMOLE_GAMEENGINE_SET_CURRENTRUNSEED_OFFSET UNITYSDK_OFFSET(0x14316AE0)
#define MOLEMOLE_GAMEENGINE_SET_HANDLEINPUTINEARLYUPDATE_OFFSET UNITYSDK_OFFSET(0x14316340)
#define MOLEMOLE_GAMEENGINE_SET_ISDEVLEVEL_OFFSET UNITYSDK_OFFSET(0x14316450)
#define MOLEMOLE_GAMEENGINE_SET_USEFULLTIMELIMIT_OFFSET UNITYSDK_OFFSET(0x143161A0)
#define MOLEMOLE_GAMEENGINE_SET_USETIMELIMIT_OFFSET UNITYSDK_OFFSET(0x14316180)
#define MOLEMOLE_GAMEENGINE_START_OFFSET UNITYSDK_OFFSET(0x14317A50)
#define MOLEMOLE_GAMEENGINE_TESTANDINFORMFRAMESTART_OFFSET UNITYSDK_OFFSET(0x14318C10)
#define MOLEMOLE_GAMEENGINE_UNBINDEXTRAUPDATECALLBACK_OFFSET UNITYSDK_OFFSET(0x143178C0)
#define MOLEMOLE_GAMEENGINE_UNREGISTERCONTACTMODIFYEVENTCCD_OFFSET UNITYSDK_OFFSET(0x14319D70)
#define MOLEMOLE_GAMEENGINE_UNREGISTERCONTACTMODIFYEVENT_OFFSET UNITYSDK_OFFSET(0x14319AA0)
#define MOLEMOLE_GAMEENGINE_UPDATE_OFFSET UNITYSDK_OFFSET(0x14319E80)
#define MOLEMOLE_GAMEENGINE__CCTOR_OFFSET UNITYSDK_OFFSET(0x14320150)
#define MOLEMOLE_GAMEENGINE__CTOR_OFFSET UNITYSDK_OFFSET(0x14320090)

namespace MoleMole
{
	inline static constexpr unsigned int GameEngine_TypeDefinitionIndex = 81899;

	class GameEngine : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Action** StaticGet_OnUpdateRawInputPreAction()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(GameEngine_TypeDefinitionIndex)->GetStaticField(0x30AD0);
		}
		static ::MoleMole::GameEngine** StaticGet_instance()
		{
			return (::MoleMole::GameEngine**)Il2CppClass::FromTypeDefinitionIndex(GameEngine_TypeDefinitionIndex)->GetStaticField(0x30AD8);
		}
		static ::System::Boolean* StaticGet_QuitApplication()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GameEngine_TypeDefinitionIndex)->GetStaticField(0xA4C0);
		}
		static ::System::Boolean* StaticGet_IJJOEAIOHFO()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GameEngine_TypeDefinitionIndex)->GetStaticField(0xA4C1);
		}
		static ::System::Boolean* StaticGet_JIMOFKCEAHL()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GameEngine_TypeDefinitionIndex)->GetStaticField(0xA4C2);
		}
		static ::System::Boolean* StaticGet_HalfFrameFixedUpdate()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GameEngine_TypeDefinitionIndex)->GetStaticField(0xA4C3);
		}
		static ::System::Boolean* StaticGet_enableEarlyUpdateDeepProfile()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GameEngine_TypeDefinitionIndex)->GetStaticField(0xA4C4);
		}
		// static const ::System::Double NLNPIPOIAOL; // 0x0
		// static const ::System::Double FBNKFGPPHGK; // 0x0
		::System::Boolean _AOODMPBCGDG_k__BackingField; // 0x18
		::System::Boolean _LMDGOKMCNOP_k__BackingField; // 0x19
		::System::Byte _padding0[0x2];
		::System::Int32 MNBFEKNPNMD; // 0x1C
		::System::Double LJKNJLLNKDB; // 0x20
		::UnityEngine::WaitForEndOfFrame* endOfFrame; // 0x28
		::System::Boolean CNBDDHGNOFC; // 0x30
		::System::Byte _padding1[0x3];
		::System::UInt32 FMIHHHJMLKI; // 0x34
		::CrowdModuleMonoListener* MAMEBPFGHCD; // 0x38
		::MoleMole::MonoEntityIKUpdateListener* CLLJBCBMKNN; // 0x40
		::MonoEntityPostSimulationUpdateListener* NMOEIIHMLCG; // 0x48
		::CBHALHKAKLC* GameSceneSwitch; // 0x50
		::System::Boolean KPBJEMIDDGM; // 0x58
		::System::Boolean isSceneDirectlyOpen; // 0x59
		::System::Byte _padding2[0x6];
		::System::Action_1<::System::Single>* OnBeforeUpdate; // 0x60
		::System::Action_1<::System::Single>* OnAfterUpdate; // 0x68
		::System::Action_1<::System::Boolean>* ApplicationFocus; // 0x70
		::System::Action_1<::System::Single>* OnBeforeLateUpdate; // 0x78
		::System::Action_1<::System::Single>* OnAfterLateUpdate; // 0x80
		::System::Action_1<::System::Single>* OnAfterWaitForFixedUpdate; // 0x88
		::System::Action* IEBIDPNGEBJ; // 0x90
		::System::Int32 AELFBJCOHPN; // 0x98
		::System::Int32 KECBMLBMMNK; // 0x9C
		::System::Int32 BMNFJNKMCFO; // 0xA0
		::System::Byte _padding3[0x4];
		::CNKGGMABMGE_2<::System::Int32, ::System::Action_3<::UnityEngine::PhysicsScene, ::System::Int32, ::UnityEngine::ModifiableContactPair>*>* GBBGDAODNAP; // 0xA8
		::CNKGGMABMGE_2<::System::Int32, ::System::Action_3<::UnityEngine::PhysicsScene, ::System::Int32, ::UnityEngine::ModifiableContactPair>*>* GOLOFKCICGM; // 0xB0
		::UnityEngine::WaitForFixedUpdate* ELOOGKBNDHJ; // 0xB8
		::UnityEngine::Coroutine* GMOHBFANPJM; // 0xC0
		::UnityEngine::WaitForEndOfFrame* AFENNFOEHFN; // 0xC8
		::UnityEngine::Coroutine* LEGLGMADCCI; // 0xD0
		::Unity::Jobs::JobHandle CIFKLCLGJKG; // 0xD8
		::System::Boolean DCMMPEFHOIC; // 0xE8
		::System::Byte _padding4[0x7];
		::System::Type* BFNMJICABNC; // 0xF0
		::System::Type* NDDBPDIGNFI; // 0xF8
		::AIOGGGIHCAE* LMABFCDCOJL; // 0x100
		::GEKNEEMAHBC* KMMNMIADLOF; // 0x108
		::GEKNEEMAHBC* ALIJCAEIOHJ; // 0x110

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE__CCTOR_OFFSET))();
		}

		::System::Boolean get_UseTimeLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_GET_USETIMELIMIT_OFFSET))(this);
		}

		::System::Void set_UseTimeLimit(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_SET_USETIMELIMIT_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Boolean get_UseFullTimeLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_GET_USEFULLTIMELIMIT_OFFSET))(this);
		}

		::System::Void set_UseFullTimeLimit(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_SET_USEFULLTIMELIMIT_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Int32 get_ApplicationTargetFrameRate()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_GET_APPLICATIONTARGETFRAMERATE_OFFSET))(this);
		}

		::System::Double get_BudgetSec()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_GET_BUDGETSEC_OFFSET))(this);
		}

		::System::Void set_BudgetSec(::System::Double EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_SET_BUDGETSEC_OFFSET))(this, EGEGIMGMJHN);
		}

		static ::System::Double ClampDouble(::System::Double HFMHOELKCAJ, ::System::Double GDBANLBHNJK, ::System::Double DNFNKBNBJHM)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_CLAMPDOUBLE_OFFSET))(HFMHOELKCAJ, GDBANLBHNJK, DNFNKBNBJHM);
		}

		static ::System::Boolean get_HandleInputInEarlyUpdate()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_GET_HANDLEINPUTINEARLYUPDATE_OFFSET))();
		}

		static ::System::Void set_HandleInputInEarlyUpdate(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_SET_HANDLEINPUTINEARLYUPDATE_OFFSET))(EGEGIMGMJHN);
		}

		::System::Boolean get_IsRestart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_GET_ISRESTART_OFFSET))(this);
		}

		::AIOGGGIHCAE* get_CurGame()
		{
			return ((::AIOGGGIHCAE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_GET_CURGAME_OFFSET))(this);
		}

		::LFDDLEHKGIK* get_CurUIScene()
		{
			return ((::LFDDLEHKGIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_GET_CURUISCENE_OFFSET))(this);
		}

		::System::Boolean get_isDevLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_GET_ISDEVLEVEL_OFFSET))(this);
		}

		::System::Void set_isDevLevel(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_SET_ISDEVLEVEL_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Boolean get_IsLoading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_GET_ISLOADING_OFFSET))(this);
		}

		::System::Void add_OnFrameStart(::System::Action* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_ADD_ONFRAMESTART_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void remove_OnFrameStart(::System::Action* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_REMOVE_ONFRAMESTART_OFFSET))(this, EGEGIMGMJHN);
		}

		static ::System::Int32 GetNapSeed()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_GETNAPSEED_OFFSET))();
		}

		::System::Int32 get_CurrentRunSeed()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_GET_CURRENTRUNSEED_OFFSET))(this);
		}

		::System::Void set_CurrentRunSeed(::System::Int32 EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_SET_CURRENTRUNSEED_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Boolean get_IsSeeded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_GET_ISSEEDED_OFFSET))(this);
		}

		::System::Void AddDependency(::Unity::Jobs::JobHandle BJOOLNIDBJH)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_ADDDEPENDENCY_OFFSET))(this, BJOOLNIDBJH);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_AWAKE_OFFSET))(this);
		}

		::System::Void BindExtraUpdatePhaseCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_BINDEXTRAUPDATEPHASECALLBACK_OFFSET))(this);
		}

		::System::Void UnbindExtraUpdateCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_UNBINDEXTRAUPDATECALLBACK_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_START_OFFSET))(this);
		}

		static ::System::Void SetupCurrentCulture()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_SETUPCURRENTCULTURE_OFFSET))();
		}

		::System::Void TestAndInformFrameStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_TESTANDINFORMFRAMESTART_OFFSET))(this);
		}

		::System::Void AfterLocalStorageLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_AFTERLOCALSTORAGELOADED_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void RegisterContactModifyEvent(::System::Int32 PIPGGOOELKG, ::System::Action_3<::UnityEngine::PhysicsScene, ::System::Int32, ::UnityEngine::ModifiableContactPair>* JHLIDNGONOH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_3<::UnityEngine::PhysicsScene, ::System::Int32, ::UnityEngine::ModifiableContactPair>*))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_REGISTERCONTACTMODIFYEVENT_OFFSET))(this, PIPGGOOELKG, JHLIDNGONOH);
		}

		::System::Void UnregisterContactModifyEvent(::System::Int32 PIPGGOOELKG, ::System::Action_3<::UnityEngine::PhysicsScene, ::System::Int32, ::UnityEngine::ModifiableContactPair>* JHLIDNGONOH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_3<::UnityEngine::PhysicsScene, ::System::Int32, ::UnityEngine::ModifiableContactPair>*))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_UNREGISTERCONTACTMODIFYEVENT_OFFSET))(this, PIPGGOOELKG, JHLIDNGONOH);
		}

		::System::Void RegisterContactModifyEventCCD(::System::Int32 PIPGGOOELKG, ::System::Action_3<::UnityEngine::PhysicsScene, ::System::Int32, ::UnityEngine::ModifiableContactPair>* JHLIDNGONOH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_3<::UnityEngine::PhysicsScene, ::System::Int32, ::UnityEngine::ModifiableContactPair>*))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_REGISTERCONTACTMODIFYEVENTCCD_OFFSET))(this, PIPGGOOELKG, JHLIDNGONOH);
		}

		::System::Void UnregisterContactModifyEventCCD(::System::Int32 PIPGGOOELKG, ::System::Action_3<::UnityEngine::PhysicsScene, ::System::Int32, ::UnityEngine::ModifiableContactPair>* JHLIDNGONOH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_3<::UnityEngine::PhysicsScene, ::System::Int32, ::UnityEngine::ModifiableContactPair>*))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_UNREGISTERCONTACTMODIFYEVENTCCD_OFFSET))(this, PIPGGOOELKG, JHLIDNGONOH);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnApplicationQuit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_ONAPPLICATIONQUIT_OFFSET))(this);
		}

		::System::Void OnApplicationPause(::System::Boolean NOLBECKFLEK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_ONAPPLICATIONPAUSE_OFFSET))(this, NOLBECKFLEK);
		}

		::System::Void OnApplicationFocus(::System::Boolean CGPBOKCEGAO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_ONAPPLICATIONFOCUS_OFFSET))(this, CGPBOKCEGAO);
		}

		::System::Void InitConfigData(::System::Action* ADNIDJNEDGO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_INITCONFIGDATA_OFFSET))(this, ADNIDJNEDGO);
		}

		static ::System::Void ForceQuitApplication()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_FORCEQUITAPPLICATION_OFFSET))();
		}

		static ::System::Void ForceQuitApplication2()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_FORCEQUITAPPLICATION2_OFFSET))();
		}

		::System::Void LauncherGame(::System::Type* EHNJCPCLCOJ, ::GEKNEEMAHBC* AAOCANGHBDG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::GEKNEEMAHBC*))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_LAUNCHERGAME_OFFSET))(this, EHNJCPCLCOJ, AAOCANGHBDG);
		}

		::System::Void SetLoadingStage(::System::Boolean JKBLDFBGBPK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_SETLOADINGSTAGE_OFFSET))(this, JKBLDFBGBPK);
		}

		::System::Type* GetCurGameType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_GETCURGAMETYPE_OFFSET))(this);
		}

		::System::Type* GetLastGameType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_GETLASTGAMETYPE_OFFSET))(this);
		}

		::GEKNEEMAHBC* GetCurGameContext()
		{
			return ((::GEKNEEMAHBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_GETCURGAMECONTEXT_OFFSET))(this);
		}

		::GEKNEEMAHBC* GetLastGameContext()
		{
			return ((::GEKNEEMAHBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_GETLASTGAMECONTEXT_OFFSET))(this);
		}

		::System::Void GoToLoginGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_GOTOLOGINGAME_OFFSET))(this);
		}

		::System::Void CreateWhenRestart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_CREATEWHENRESTART_OFFSET))(this);
		}

		::System::Void InitWhenRestart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_INITWHENRESTART_OFFSET))(this);
		}

		::System::Void DisposeWhenRestart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_DISPOSEWHENRESTART_OFFSET))(this);
		}

		::System::Void KFGNEKMALPI(::System::Single PMNLNNGEIFM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_KFGNEKMALPI_OFFSET))(this, PMNLNNGEIFM);
		}

		::System::Void PMLANGFADHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_PMLANGFADHB_OFFSET))(this);
		}

		::System::Void DBHMMFEKKID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_DBHMMFEKKID_OFFSET))(this);
		}

		::System::Void CKHFIDJIICA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_CKHFIDJIICA_OFFSET))(this);
		}

		::System::Void IKLPMFJLFDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_IKLPMFJLFDH_OFFSET))(this);
		}

		::System::Void GCDLMFAPPDB(::System::Boolean ABNJJHODFNN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_GCDLMFAPPDB_OFFSET))(this, ABNJJHODFNN);
		}

		::System::Void NAMKCDGIIPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_NAMKCDGIIPM_OFFSET))(this);
		}

		::System::Void AKAELJJKAOB(::System::Boolean ABNJJHODFNN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_AKAELJJKAOB_OFFSET))(this, ABNJJHODFNN);
		}

		::System::Void LEIOJINEDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_LEIOJINEDHA_OFFSET))(this);
		}

		::System::Void KLPOBDPCMPC(::System::Boolean ABNJJHODFNN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_KLPOBDPCMPC_OFFSET))(this, ABNJJHODFNN);
		}

		::System::Collections::IEnumerator* DNFDNCOHLBH()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_DNFDNCOHLBH_OFFSET))(this);
		}

		::System::Void JHGOGOPMGBK(::System::Boolean ABNJJHODFNN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_JHGOGOPMGBK_OFFSET))(this, ABNJJHODFNN);
		}

		::System::Void MKDGHEMJIHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_MKDGHEMJIHI_OFFSET))(this);
		}

		::System::Void BMFHJKPABFA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_BMFHJKPABFA_OFFSET))(this);
		}

		::System::Void BNIGANIDEGL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_BNIGANIDEGL_OFFSET))(this);
		}

		::System::Void AKJOPBDGGKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_AKJOPBDGGKE_OFFSET))(this);
		}

		static ::System::Void AJBGCBFHLFJ()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_AJBGCBFHLFJ_OFFSET))();
		}

		::System::Boolean CMMJCPIOLDL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_CMMJCPIOLDL_OFFSET))(this);
		}

		::System::Void NPHNJABKNLH(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_NPHNJABKNLH_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void CPKNNCBJKDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_CPKNNCBJKDH_OFFSET))(this);
		}

		::System::Void JECIPCJHNCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_JECIPCJHNCH_OFFSET))(this);
		}

		::System::Void DNIAECLNCGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_DNIAECLNCGD_OFFSET))(this);
		}

		::System::Void HDCEJHKDCIK(::UnityEngine::PhysicsScene AHGGAKHJMPI, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair> HCPOCAEENKH)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_HDCEJHKDCIK_OFFSET))(this, AHGGAKHJMPI, HCPOCAEENKH);
		}

		::System::Void JMJGOEMOCOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_JMJGOEMOCOG_OFFSET))(this);
		}

		static ::System::Void NNFLPJKLAOE()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_NNFLPJKLAOE_OFFSET))();
		}

		::System::Void MJMCDPPDAPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_MJMCDPPDAPC_OFFSET))(this);
		}

		::System::Void POCKCPAPOFA(::System::Single PMNLNNGEIFM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_POCKCPAPOFA_OFFSET))(this, PMNLNNGEIFM);
		}

		::System::Void GMKBFENBJJE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_GMKBFENBJJE_OFFSET))(this);
		}

		::System::Void CINPGGCAJPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_CINPGGCAJPI_OFFSET))(this);
		}

		::AIOGGGIHCAE* CKAHBMBIJIM(::AIOGGGIHCAE* DDKICDNCJCF, ::GEKNEEMAHBC* EGGOCICCFJC)
		{
			return ((::AIOGGGIHCAE*(*)(::PVOID, ::AIOGGGIHCAE*, ::GEKNEEMAHBC*))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_CKAHBMBIJIM_OFFSET))(this, DDKICDNCJCF, EGGOCICCFJC);
		}

		::System::Collections::IEnumerator* BIFHBOOLOAH()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_BIFHBOOLOAH_OFFSET))(this);
		}

		::System::Void KMGAEJAJCFN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_KMGAEJAJCFN_OFFSET))(this);
		}

		::System::Void GLOAGPFEFCJ(::UnityEngine::PhysicsScene AHGGAKHJMPI, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair> HCPOCAEENKH)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_GLOAGPFEFCJ_OFFSET))(this, AHGGAKHJMPI, HCPOCAEENKH);
		}

		::System::Void MJLAPCGNMAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_MJLAPCGNMAM_OFFSET))(this);
		}

		::System::Void JJIHHJDOGKJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_JJIHHJDOGKJ_OFFSET))(this);
		}
	};
}
