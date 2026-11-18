#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/Foundation/Coroutine/DebugInfoType.h"
#include "unitysdk/Foundation/Coroutine/Segment.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/Foundation/Coroutine/CoroutineManager_ProcessIndex.h"

namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Threading { class Thread; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class CustomYieldInstruction; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class WWW; }

#define FOUNDATION_COROUTINE_COROUTINEMANAGER_ADDTAG_OFFSET UNITYSDK_OFFSET(0x18A791C0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_ADD_ONPREEXECUTE_OFFSET UNITYSDK_OFFSET(0x18A719E0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x18A71EA0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLCONTINUOUSLYONINSTANCE_1_OFFSET UNITYSDK_OFFSET(0x18A845F0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLCONTINUOUSLYONINSTANCE_OFFSET UNITYSDK_OFFSET(0x18A84090)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLCONTINUOUSLY_1_OFFSET UNITYSDK_OFFSET(0x18A84220)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLCONTINUOUSLY_OFFSET UNITYSDK_OFFSET(0x18A83F00)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLDELAYEDONINSTANCE_1_OFFSET UNITYSDK_OFFSET(0x18A825B0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLDELAYEDONINSTANCE_OFFSET UNITYSDK_OFFSET(0x18A81630)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLDELAYED_1_OFFSET UNITYSDK_OFFSET(0x18A819E0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLDELAYED_2_OFFSET UNITYSDK_OFFSET(0x18A81D70)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLDELAYED_3_OFFSET UNITYSDK_OFFSET(0x18A82210)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLDELAYED_OFFSET UNITYSDK_OFFSET(0x18A81200)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLPERIODICALLYONINSTANCE_1_OFFSET UNITYSDK_OFFSET(0x18A83AD0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLPERIODICALLYONINSTANCE_OFFSET UNITYSDK_OFFSET(0x18A832A0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLPERIODICALLYUNTIL_OFFSET UNITYSDK_OFFSET(0x18A84C70)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLPERIODICALLY_1_OFFSET UNITYSDK_OFFSET(0x18A836B0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLPERIODICALLY_OFFSET UNITYSDK_OFFSET(0x18A82DF0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_CLOSEWAITINGPROCESS_OFFSET UNITYSDK_OFFSET(0x18A758B0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_COINDEXEXTRACT_OFFSET UNITYSDK_OFFSET(0x18A7A3D0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_COINDEXISNULL_OFFSET UNITYSDK_OFFSET(0x18A75790)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_COINDEXPEEK_OFFSET UNITYSDK_OFFSET(0x18A7E5E0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_COINDEXREPLACE_OFFSET UNITYSDK_OFFSET(0x18A7EB80)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_CREATENEWHANDLE_OFFSET UNITYSDK_OFFSET(0x18A7F2A0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_DESTROYIMMEDIATE_1_OFFSET UNITYSDK_OFFSET(0x18A857B0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_DESTROYIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x18A85770)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_DESTROYOBJECT_1_OFFSET UNITYSDK_OFFSET(0x18A85710)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_DESTROYOBJECT_OFFSET UNITYSDK_OFFSET(0x18A856D0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_DESTROY_1_OFFSET UNITYSDK_OFFSET(0x18A85500)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_DESTROY_OFFSET UNITYSDK_OFFSET(0x18A854C0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_FINDOBJECTOFTYPE_1_OFFSET UNITYSDK_OFFSET(0x18A85960)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_FINDOBJECTSOFTYPE_1_OFFSET UNITYSDK_OFFSET(0x18A859A0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x18A74810)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x18A79FA0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_GETSEGMENTTIME_OFFSET UNITYSDK_OFFSET(0x18A7D8B0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_GET_DELTATIME_OFFSET UNITYSDK_OFFSET(0x18A71970)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x18A713B0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_GET_LOCALTIME_OFFSET UNITYSDK_OFFSET(0x18A71340)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_GET_MAINTHREAD_OFFSET UNITYSDK_OFFSET(0x18A71BA0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_HANDLEISINWAITINGLIST_OFFSET UNITYSDK_OFFSET(0x18A80450)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_KILLCOROUTINESONINSTANCE_1_OFFSET UNITYSDK_OFFSET(0x18A7A0D0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_KILLCOROUTINESONINSTANCE_2_OFFSET UNITYSDK_OFFSET(0x18A7A6D0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_KILLCOROUTINESONINSTANCE_OFFSET UNITYSDK_OFFSET(0x18A796E0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_KILLCOROUTINES_1_OFFSET UNITYSDK_OFFSET(0x18A79CD0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_KILLCOROUTINES_2_OFFSET UNITYSDK_OFFSET(0x18A7A4F0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_KILLCOROUTINES_OFFSET UNITYSDK_OFFSET(0x18A793D0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x18A74FD0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_LOCKCOROUTINE_OFFSET UNITYSDK_OFFSET(0x18A80BC0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_NULLIFY_1_OFFSET UNITYSDK_OFFSET(0x18A7AAE0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_NULLIFY_OFFSET UNITYSDK_OFFSET(0x18A7E020)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18A723E0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_PAUSECOROUTINESONINSTANCE_1_OFFSET UNITYSDK_OFFSET(0x18A7B1D0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_PAUSECOROUTINESONINSTANCE_2_OFFSET UNITYSDK_OFFSET(0x18A7C450)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_PAUSECOROUTINESONINSTANCE_OFFSET UNITYSDK_OFFSET(0x18A7ADE0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_PAUSECOROUTINES_1_OFFSET UNITYSDK_OFFSET(0x18A7B080)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_PAUSECOROUTINES_2_OFFSET UNITYSDK_OFFSET(0x18A7C270)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_PAUSECOROUTINES_OFFSET UNITYSDK_OFFSET(0x18A7AC10)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_PRINT_OFFSET UNITYSDK_OFFSET(0x18A859E0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_REMOVETAG_OFFSET UNITYSDK_OFFSET(0x18A75AA0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_REMOVEUNUSED_OFFSET UNITYSDK_OFFSET(0x18A73580)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_REMOVE_ONPREEXECUTE_OFFSET UNITYSDK_OFFSET(0x18A71AC0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_RESETTIMECOUNTONINSTANCE_OFFSET UNITYSDK_OFFSET(0x18A79C70)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_RESUMECOROUTINESONINSTANCE_1_OFFSET UNITYSDK_OFFSET(0x18A7CEE0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_RESUMECOROUTINESONINSTANCE_2_OFFSET UNITYSDK_OFFSET(0x18A7D310)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_RESUMECOROUTINESONINSTANCE_OFFSET UNITYSDK_OFFSET(0x18A7C7D0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_RESUMECOROUTINES_1_OFFSET UNITYSDK_OFFSET(0x18A7CD90)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_RESUMECOROUTINES_2_OFFSET UNITYSDK_OFFSET(0x18A7D130)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_RESUMECOROUTINES_OFFSET UNITYSDK_OFFSET(0x18A7C600)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_RUNCOROUTINEINTERNAL_OFFSET UNITYSDK_OFFSET(0x18A75F60)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_RUNCOROUTINEONINSTANCE_1_OFFSET UNITYSDK_OFFSET(0x18A78720)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_RUNCOROUTINEONINSTANCE_2_OFFSET UNITYSDK_OFFSET(0x18A789B0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_RUNCOROUTINEONINSTANCE_3_OFFSET UNITYSDK_OFFSET(0x18A78C50)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_RUNCOROUTINEONINSTANCE_OFFSET UNITYSDK_OFFSET(0x18A78690)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_RUNCOROUTINE_1_OFFSET UNITYSDK_OFFSET(0x18A77A60)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_RUNCOROUTINE_2_OFFSET UNITYSDK_OFFSET(0x18A77D90)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_RUNCOROUTINE_3_OFFSET UNITYSDK_OFFSET(0x18A78070)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_RUNCOROUTINE_4_OFFSET UNITYSDK_OFFSET(0x18A78370)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_RUNCOROUTINE_OFFSET UNITYSDK_OFFSET(0x18A75C90)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_SETPAUSE_OFFSET UNITYSDK_OFFSET(0x18A7B290)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x18A71E40)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_SET_MAINTHREAD_OFFSET UNITYSDK_OFFSET(0x18A71C00)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_STARTCOROUTINE_1_OFFSET UNITYSDK_OFFSET(0x18A85390)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_STARTCOROUTINE_AUTO_OFFSET UNITYSDK_OFFSET(0x18A853E0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_STARTCOROUTINE_OFFSET UNITYSDK_OFFSET(0x18A85340)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_STOPALLCOROUTINES_OFFSET UNITYSDK_OFFSET(0x18A85480)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_STOPCOROUTINE_OFFSET UNITYSDK_OFFSET(0x18A85430)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_UNLOCKCOROUTINE_OFFSET UNITYSDK_OFFSET(0x18A81000)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_UPDATETIMEVALUES_OFFSET UNITYSDK_OFFSET(0x18A73410)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x18A72540)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_WAITFORSECONDSONINSTANCE_OFFSET UNITYSDK_OFFSET(0x18A7F510)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_WAITFORSECONDS_OFFSET UNITYSDK_OFFSET(0x18A7EFC0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_WAITUNTILDONEWRAPPER_OFFSET UNITYSDK_OFFSET(0x18A7FE00)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_WAITUNTILDONE_1_OFFSET UNITYSDK_OFFSET(0x18A7F790)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_WAITUNTILDONE_2_OFFSET UNITYSDK_OFFSET(0x18A80570)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_WAITUNTILDONE_3_OFFSET UNITYSDK_OFFSET(0x18A80870)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_WAITUNTILDONE_4_OFFSET UNITYSDK_OFFSET(0x18A80A10)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER_WAITUNTILDONE_OFFSET UNITYSDK_OFFSET(0x18A7F580)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER__CALLCONTINUOUSLYUNTIL_OFFSET UNITYSDK_OFFSET(0x18A85020)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER__CALLCONTINUOUSLY_OFFSET UNITYSDK_OFFSET(0x18A831D0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A85E00)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x18A85A20)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER__DELAYEDCALL_1_OFFSET UNITYSDK_OFFSET(0x18A82170)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER__DELAYEDCALL_OFFSET UNITYSDK_OFFSET(0x18A81580)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER__INJECTDELAY_OFFSET UNITYSDK_OFFSET(0x18A7E8D0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER__STARTWHENDONE_1_OFFSET UNITYSDK_OFFSET(0x18A807E0)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER__STARTWHENDONE_2_OFFSET UNITYSDK_OFFSET(0x18A80980)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER__STARTWHENDONE_3_OFFSET UNITYSDK_OFFSET(0x18A80B30)
#define FOUNDATION_COROUTINE_COROUTINEMANAGER__STARTWHENDONE_OFFSET UNITYSDK_OFFSET(0x18A7FD70)

namespace Foundation::Coroutine
{
	inline static constexpr unsigned int CoroutineManager_TypeDefinitionIndex = 8536;

	class CoroutineManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Foundation::Coroutine::CoroutineManager** StaticGet__instance()
		{
			return (::Foundation::Coroutine::CoroutineManager**)Il2CppClass::FromTypeDefinitionIndex(CoroutineManager_TypeDefinitionIndex)->GetStaticField(0x67E0);
		}
		static ::System::Func_3<::System::Collections::Generic::IEnumerator_1<::System::Single>*, ::Foundation::Coroutine::CoroutineHandle, ::System::Collections::Generic::IEnumerator_1<::System::Single>*>** StaticGet_ReplacementFunction()
		{
			return (::System::Func_3<::System::Collections::Generic::IEnumerator_1<::System::Single>*, ::Foundation::Coroutine::CoroutineHandle, ::System::Collections::Generic::IEnumerator_1<::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(CoroutineManager_TypeDefinitionIndex)->GetStaticField(0x67E8);
		}
		static ::System::Action** StaticGet_OnPreExecute()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(CoroutineManager_TypeDefinitionIndex)->GetStaticField(0x67F0);
		}
		static ::System::Action** StaticGet_OnPostExecute()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(CoroutineManager_TypeDefinitionIndex)->GetStaticField(0x67F8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Byte, ::Foundation::Coroutine::CoroutineManager*>** StaticGet_ActiveInstances()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Byte, ::Foundation::Coroutine::CoroutineManager*>**)Il2CppClass::FromTypeDefinitionIndex(CoroutineManager_TypeDefinitionIndex)->GetStaticField(0x6800);
		}
		static ::System::Threading::Thread** StaticGet__MainThread_k__BackingField()
		{
			return (::System::Threading::Thread**)Il2CppClass::FromTypeDefinitionIndex(CoroutineManager_TypeDefinitionIndex)->GetStaticField(0x6808);
		}
		static ::System::Single* StaticGet_WaitForOneFrame()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(CoroutineManager_TypeDefinitionIndex)->GetStaticField(0x3590);
		}
		static ::System::Boolean* StaticGet__tmpBool()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CoroutineManager_TypeDefinitionIndex)->GetStaticField(0x3594);
		}
		static ::Foundation::Coroutine::CoroutineHandle* StaticGet__tmpHandle()
		{
			return (::Foundation::Coroutine::CoroutineHandle*)Il2CppClass::FromTypeDefinitionIndex(CoroutineManager_TypeDefinitionIndex)->GetStaticField(0x3598);
		}
		// static const ::System::UInt16 FramesUntilMaintenance = 0x40; // 0x0
		// static const ::System::Int32 ProcessArrayChunkSize = 0x40; // 0x0
		// static const ::System::Int32 InitialBufferSizeLarge = 0x100; // 0x0
		// static const ::System::Int32 InitialBufferSizeMedium = 0x40; // 0x0
		// static const ::System::Int32 InitialBufferSizeSmall = 0x8; // 0x0
		::System::Single TimeBetweenSlowUpdateCalls; // 0x18
		::Foundation::Coroutine::DebugInfoType ProfilerDebugAmount; // 0x1C
		::System::Int32 UpdateCoroutines; // 0x20
		::System::Int32 FixedUpdateCoroutines; // 0x24
		::System::Int32 LateUpdateCoroutines; // 0x28
		::System::Int32 SlowUpdateCoroutines; // 0x2C
		::System::Single localTime; // 0x30
		::System::Single deltaTime; // 0x34
		::System::Int32 _currentUpdateFrame; // 0x38
		::System::Int32 _currentLateUpdateFrame; // 0x3C
		::System::Int32 _currentFixedUpdateFrame; // 0x40
		::System::Int32 _currentSlowUpdateFrame; // 0x44
		::System::Int32 _nextUpdateProcessSlot; // 0x48
		::System::Int32 _nextLateUpdateProcessSlot; // 0x4C
		::System::Int32 _nextFixedUpdateProcessSlot; // 0x50
		::System::Int32 _nextSlowUpdateProcessSlot; // 0x54
		::System::Int32 _lastUpdateProcessSlot; // 0x58
		::System::Int32 _lastLateUpdateProcessSlot; // 0x5C
		::System::Int32 _lastFixedUpdateProcessSlot; // 0x60
		::System::Int32 _lastSlowUpdateProcessSlot; // 0x64
		::System::Single _lastUpdateTime; // 0x68
		::System::Single _lastLateUpdateTime; // 0x6C
		::System::Single _lastFixedUpdateTime; // 0x70
		::System::Single _lastSlowUpdateTime; // 0x74
		::System::Single _lastSlowUpdateDeltaTime; // 0x78
		::System::UInt16 _framesSinceUpdate; // 0x7C
		::System::UInt16 _expansions; // 0x7E
		::System::Byte _instanceID; // 0x80
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::Dictionary_2<::Foundation::Coroutine::CoroutineHandle, ::System::Collections::Generic::HashSet_1<::Foundation::Coroutine::CoroutineHandle>*>* _waitingTriggers; // 0x88
		::System::Collections::Generic::Dictionary_2<::Foundation::Coroutine::CoroutineHandle, ::System::Object*>* _handleToIndex; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::Foundation::Coroutine::CoroutineHandle>* _indexToHandle; // 0x98
		::System::Collections::Generic::Dictionary_2<::Foundation::Coroutine::CoroutineHandle, ::System::String*>* _processTags; // 0xA0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::Foundation::Coroutine::CoroutineHandle>*>* _taggedProcesses; // 0xA8
		::Il2CppArray<::System::Collections::Generic::IEnumerator_1<::System::Single>*>* UpdateProcesses; // 0xB0
		::Il2CppArray<::System::Collections::Generic::IEnumerator_1<::System::Single>*>* LateUpdateProcesses; // 0xB8
		::Il2CppArray<::System::Collections::Generic::IEnumerator_1<::System::Single>*>* FixedUpdateProcesses; // 0xC0
		::Il2CppArray<::System::Collections::Generic::IEnumerator_1<::System::Single>*>* SlowUpdateProcesses; // 0xC8
		::Il2CppArray<::System::Boolean>* UpdatePaused; // 0xD0
		::Il2CppArray<::System::Boolean>* LateUpdatePaused; // 0xD8
		::Il2CppArray<::System::Boolean>* FixedUpdatePaused; // 0xE0
		::Il2CppArray<::System::Boolean>* SlowUpdatePaused; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Single get_LocalTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_GET_LOCALTIME_OFFSET))();
		}

		static ::System::Single get_DeltaTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_GET_DELTATIME_OFFSET))();
		}

		static ::System::Void add_OnPreExecute(::System::Action* value)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_ADD_ONPREEXECUTE_OFFSET))(value);
		}

		static ::System::Void remove_OnPreExecute(::System::Action* value)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_REMOVE_ONPREEXECUTE_OFFSET))(value);
		}

		static ::System::Threading::Thread* get_MainThread()
		{
			return ((::System::Threading::Thread*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_GET_MAINTHREAD_OFFSET))();
		}

		static ::System::Void set_MainThread(::System::Threading::Thread* value)
		{
			return ((::System::Void(*)(::System::Threading::Thread*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_SET_MAINTHREAD_OFFSET))(value);
		}

		static ::Foundation::Coroutine::CoroutineManager* get_Instance()
		{
			return ((::Foundation::Coroutine::CoroutineManager*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::Foundation::Coroutine::CoroutineManager* value)
		{
			return ((::System::Void(*)(::Foundation::Coroutine::CoroutineManager*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_SET_INSTANCE_OFFSET))(value);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_UPDATE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void RemoveUnused()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_REMOVEUNUSED_OFFSET))(this);
		}

		static ::Foundation::Coroutine::CoroutineHandle RunCoroutine(::System::Collections::Generic::IEnumerator_1<::System::Single>* coroutine)
		{
			return ((::Foundation::Coroutine::CoroutineHandle(*)(::System::Collections::Generic::IEnumerator_1<::System::Single>*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_RUNCOROUTINE_OFFSET))(coroutine);
		}

		static ::Foundation::Coroutine::CoroutineHandle RunCoroutine_1(::System::Collections::Generic::IEnumerator_1<::System::Single>* coroutine, ::Foundation::Coroutine::CoroutineHandle handle, ::Foundation::Coroutine::Segment timing)
		{
			return ((::Foundation::Coroutine::CoroutineHandle(*)(::System::Collections::Generic::IEnumerator_1<::System::Single>*, ::Foundation::Coroutine::CoroutineHandle, ::Foundation::Coroutine::Segment))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_RUNCOROUTINE_1_OFFSET))(coroutine, handle, timing);
		}

		static ::Foundation::Coroutine::CoroutineHandle RunCoroutine_2(::System::Collections::Generic::IEnumerator_1<::System::Single>* coroutine, ::System::String* tag)
		{
			return ((::Foundation::Coroutine::CoroutineHandle(*)(::System::Collections::Generic::IEnumerator_1<::System::Single>*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_RUNCOROUTINE_2_OFFSET))(coroutine, tag);
		}

		static ::Foundation::Coroutine::CoroutineHandle RunCoroutine_3(::System::Collections::Generic::IEnumerator_1<::System::Single>* coroutine, ::Foundation::Coroutine::Segment timing)
		{
			return ((::Foundation::Coroutine::CoroutineHandle(*)(::System::Collections::Generic::IEnumerator_1<::System::Single>*, ::Foundation::Coroutine::Segment))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_RUNCOROUTINE_3_OFFSET))(coroutine, timing);
		}

		static ::Foundation::Coroutine::CoroutineHandle RunCoroutine_4(::System::Collections::Generic::IEnumerator_1<::System::Single>* coroutine, ::Foundation::Coroutine::Segment timing, ::System::String* tag)
		{
			return ((::Foundation::Coroutine::CoroutineHandle(*)(::System::Collections::Generic::IEnumerator_1<::System::Single>*, ::Foundation::Coroutine::Segment, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_RUNCOROUTINE_4_OFFSET))(coroutine, timing, tag);
		}

		::Foundation::Coroutine::CoroutineHandle RunCoroutineOnInstance(::System::Collections::Generic::IEnumerator_1<::System::Single>* coroutine)
		{
			return ((::Foundation::Coroutine::CoroutineHandle(*)(::PVOID, ::System::Collections::Generic::IEnumerator_1<::System::Single>*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_RUNCOROUTINEONINSTANCE_OFFSET))(this, coroutine);
		}

		::Foundation::Coroutine::CoroutineHandle RunCoroutineOnInstance_1(::System::Collections::Generic::IEnumerator_1<::System::Single>* coroutine, ::System::String* tag)
		{
			return ((::Foundation::Coroutine::CoroutineHandle(*)(::PVOID, ::System::Collections::Generic::IEnumerator_1<::System::Single>*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_RUNCOROUTINEONINSTANCE_1_OFFSET))(this, coroutine, tag);
		}

		::Foundation::Coroutine::CoroutineHandle RunCoroutineOnInstance_2(::System::Collections::Generic::IEnumerator_1<::System::Single>* coroutine, ::Foundation::Coroutine::Segment timing)
		{
			return ((::Foundation::Coroutine::CoroutineHandle(*)(::PVOID, ::System::Collections::Generic::IEnumerator_1<::System::Single>*, ::Foundation::Coroutine::Segment))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_RUNCOROUTINEONINSTANCE_2_OFFSET))(this, coroutine, timing);
		}

		::Foundation::Coroutine::CoroutineHandle RunCoroutineOnInstance_3(::System::Collections::Generic::IEnumerator_1<::System::Single>* coroutine, ::Foundation::Coroutine::Segment timing, ::System::String* tag)
		{
			return ((::Foundation::Coroutine::CoroutineHandle(*)(::PVOID, ::System::Collections::Generic::IEnumerator_1<::System::Single>*, ::Foundation::Coroutine::Segment, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_RUNCOROUTINEONINSTANCE_3_OFFSET))(this, coroutine, timing, tag);
		}

		::Foundation::Coroutine::CoroutineHandle RunCoroutineInternal(::System::Collections::Generic::IEnumerator_1<::System::Single>* coroutine, ::Foundation::Coroutine::Segment timing, ::System::String* tag, ::Foundation::Coroutine::CoroutineHandle handle, ::System::Boolean prewarm)
		{
			return ((::Foundation::Coroutine::CoroutineHandle(*)(::PVOID, ::System::Collections::Generic::IEnumerator_1<::System::Single>*, ::Foundation::Coroutine::Segment, ::System::String*, ::Foundation::Coroutine::CoroutineHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_RUNCOROUTINEINTERNAL_OFFSET))(this, coroutine, timing, tag, handle, prewarm);
		}

		static ::System::Int32 KillCoroutines()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_KILLCOROUTINES_OFFSET))();
		}

		::System::Int32 KillCoroutinesOnInstance()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_KILLCOROUTINESONINSTANCE_OFFSET))(this);
		}

		static ::System::Int32 KillCoroutines_1(::Foundation::Coroutine::CoroutineHandle handle)
		{
			return ((::System::Int32(*)(::Foundation::Coroutine::CoroutineHandle))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_KILLCOROUTINES_1_OFFSET))(handle);
		}

		::System::Int32 KillCoroutinesOnInstance_1(::Foundation::Coroutine::CoroutineHandle handle)
		{
			return ((::System::Int32(*)(::PVOID, ::Foundation::Coroutine::CoroutineHandle))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_KILLCOROUTINESONINSTANCE_1_OFFSET))(this, handle);
		}

		static ::System::Int32 KillCoroutines_2(::System::String* tag)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_KILLCOROUTINES_2_OFFSET))(tag);
		}

		::System::Int32 KillCoroutinesOnInstance_2(::System::String* tag)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_KILLCOROUTINESONINSTANCE_2_OFFSET))(this, tag);
		}

		static ::System::Int32 PauseCoroutines()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_PAUSECOROUTINES_OFFSET))();
		}

		::System::Int32 PauseCoroutinesOnInstance()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_PAUSECOROUTINESONINSTANCE_OFFSET))(this);
		}

		static ::System::Int32 PauseCoroutines_1(::Foundation::Coroutine::CoroutineHandle handle)
		{
			return ((::System::Int32(*)(::Foundation::Coroutine::CoroutineHandle))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_PAUSECOROUTINES_1_OFFSET))(handle);
		}

		::System::Int32 PauseCoroutinesOnInstance_1(::Foundation::Coroutine::CoroutineHandle handle)
		{
			return ((::System::Int32(*)(::PVOID, ::Foundation::Coroutine::CoroutineHandle))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_PAUSECOROUTINESONINSTANCE_1_OFFSET))(this, handle);
		}

		static ::System::Int32 PauseCoroutines_2(::System::String* tag)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_PAUSECOROUTINES_2_OFFSET))(tag);
		}

		::System::Int32 PauseCoroutinesOnInstance_2(::System::String* tag)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_PAUSECOROUTINESONINSTANCE_2_OFFSET))(this, tag);
		}

		static ::System::Int32 ResumeCoroutines()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_RESUMECOROUTINES_OFFSET))();
		}

		::System::Int32 ResumeCoroutinesOnInstance()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_RESUMECOROUTINESONINSTANCE_OFFSET))(this);
		}

		static ::System::Int32 ResumeCoroutines_1(::Foundation::Coroutine::CoroutineHandle handle)
		{
			return ((::System::Int32(*)(::Foundation::Coroutine::CoroutineHandle))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_RESUMECOROUTINES_1_OFFSET))(handle);
		}

		::System::Int32 ResumeCoroutinesOnInstance_1(::Foundation::Coroutine::CoroutineHandle handle)
		{
			return ((::System::Int32(*)(::PVOID, ::Foundation::Coroutine::CoroutineHandle))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_RESUMECOROUTINESONINSTANCE_1_OFFSET))(this, handle);
		}

		static ::System::Int32 ResumeCoroutines_2(::System::String* tag)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_RESUMECOROUTINES_2_OFFSET))(tag);
		}

		::System::Int32 ResumeCoroutinesOnInstance_2(::System::String* tag)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_RESUMECOROUTINESONINSTANCE_2_OFFSET))(this, tag);
		}

		::System::Boolean UpdateTimeValues(::Foundation::Coroutine::Segment segment)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Coroutine::Segment))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_UPDATETIMEVALUES_OFFSET))(this, segment);
		}

		::System::Single GetSegmentTime(::Foundation::Coroutine::Segment segment)
		{
			return ((::System::Single(*)(::PVOID, ::Foundation::Coroutine::Segment))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_GETSEGMENTTIME_OFFSET))(this, segment);
		}

		::System::Void ResetTimeCountOnInstance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_RESETTIMECOUNTONINSTANCE_OFFSET))(this);
		}

		static ::Foundation::Coroutine::CoroutineManager* GetInstance(::System::Byte ID)
		{
			return ((::Foundation::Coroutine::CoroutineManager*(*)(::System::Byte))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_GETINSTANCE_OFFSET))(ID);
		}

		::System::Void AddTag(::System::String* tag, ::Foundation::Coroutine::CoroutineHandle coindex)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Foundation::Coroutine::CoroutineHandle))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_ADDTAG_OFFSET))(this, tag, coindex);
		}

		::System::Void RemoveTag(::Foundation::Coroutine::CoroutineHandle coindex)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Coroutine::CoroutineHandle))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_REMOVETAG_OFFSET))(this, coindex);
		}

		::System::Boolean Nullify(::Foundation::Coroutine::CoroutineHandle handle)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Coroutine::CoroutineHandle))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_NULLIFY_OFFSET))(this, handle);
		}

		::System::Boolean Nullify_1(::Foundation::Coroutine::CoroutineManager_ProcessIndex coindex)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Coroutine::CoroutineManager_ProcessIndex))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_NULLIFY_1_OFFSET))(this, coindex);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* CoindexExtract(::Foundation::Coroutine::CoroutineManager_ProcessIndex coindex)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::Foundation::Coroutine::CoroutineManager_ProcessIndex))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_COINDEXEXTRACT_OFFSET))(this, coindex);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* CoindexPeek(::Foundation::Coroutine::CoroutineManager_ProcessIndex coindex)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::Foundation::Coroutine::CoroutineManager_ProcessIndex))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_COINDEXPEEK_OFFSET))(this, coindex);
		}

		::System::Boolean CoindexIsNull(::Foundation::Coroutine::CoroutineManager_ProcessIndex coindex)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Coroutine::CoroutineManager_ProcessIndex))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_COINDEXISNULL_OFFSET))(this, coindex);
		}

		::System::Boolean SetPause(::Foundation::Coroutine::CoroutineManager_ProcessIndex coindex, ::System::Boolean newPausedState)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Coroutine::CoroutineManager_ProcessIndex, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_SETPAUSE_OFFSET))(this, coindex, newPausedState);
		}

		static ::System::Collections::Generic::IEnumerator_1<::System::Single>* _InjectDelay(::System::Collections::Generic::IEnumerator_1<::System::Single>* proc, ::System::Single delayTime)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::System::Collections::Generic::IEnumerator_1<::System::Single>*, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER__INJECTDELAY_OFFSET))(proc, delayTime);
		}

		::System::Void CoindexReplace(::Foundation::Coroutine::CoroutineManager_ProcessIndex coindex, ::System::Collections::Generic::IEnumerator_1<::System::Single>* replacement)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Coroutine::CoroutineManager_ProcessIndex, ::System::Collections::Generic::IEnumerator_1<::System::Single>*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_COINDEXREPLACE_OFFSET))(this, coindex, replacement);
		}

		static ::System::Single WaitForSeconds(::System::Single waitTime, ::System::Single ratio)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_WAITFORSECONDS_OFFSET))(waitTime, ratio);
		}

		static ::Foundation::Coroutine::CoroutineHandle CreateNewHandle()
		{
			return ((::Foundation::Coroutine::CoroutineHandle(*)())((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_CREATENEWHANDLE_OFFSET))();
		}

		::System::Single WaitForSecondsOnInstance(::System::Single waitTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_WAITFORSECONDSONINSTANCE_OFFSET))(this, waitTime);
		}

		static ::System::Single WaitUntilDone(::Foundation::Coroutine::CoroutineHandle otherCoroutine)
		{
			return ((::System::Single(*)(::Foundation::Coroutine::CoroutineHandle))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_WAITUNTILDONE_OFFSET))(otherCoroutine);
		}

		static ::System::Single WaitUntilDone_1(::Foundation::Coroutine::CoroutineHandle otherCoroutine, ::System::Boolean warnOnIssue)
		{
			return ((::System::Single(*)(::Foundation::Coroutine::CoroutineHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_WAITUNTILDONE_1_OFFSET))(otherCoroutine, warnOnIssue);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* WaitUntilDoneWrapper(::System::Collections::Generic::IEnumerator_1<::System::Single>* coptr, ::Foundation::Coroutine::CoroutineHandle handle)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::Collections::Generic::IEnumerator_1<::System::Single>*, ::Foundation::Coroutine::CoroutineHandle))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_WAITUNTILDONEWRAPPER_OFFSET))(this, coptr, handle);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* _StartWhenDone(::Foundation::Coroutine::CoroutineHandle handle, ::System::Collections::Generic::IEnumerator_1<::System::Single>* proc)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::Foundation::Coroutine::CoroutineHandle, ::System::Collections::Generic::IEnumerator_1<::System::Single>*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER__STARTWHENDONE_OFFSET))(this, handle, proc);
		}

		::System::Void CloseWaitingProcess(::Foundation::Coroutine::CoroutineHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Coroutine::CoroutineHandle))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_CLOSEWAITINGPROCESS_OFFSET))(this, handle);
		}

		::System::Boolean HandleIsInWaitingList(::Foundation::Coroutine::CoroutineHandle handle)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Coroutine::CoroutineHandle))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_HANDLEISINWAITINGLIST_OFFSET))(this, handle);
		}

		static ::System::Single WaitUntilDone_2(::UnityEngine::WWW* wwwObject)
		{
			return ((::System::Single(*)(::UnityEngine::WWW*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_WAITUNTILDONE_2_OFFSET))(wwwObject);
		}

		static ::System::Collections::Generic::IEnumerator_1<::System::Single>* _StartWhenDone_1(::UnityEngine::WWW* www, ::System::Collections::Generic::IEnumerator_1<::System::Single>* pausedProc)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::UnityEngine::WWW*, ::System::Collections::Generic::IEnumerator_1<::System::Single>*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER__STARTWHENDONE_1_OFFSET))(www, pausedProc);
		}

		static ::System::Single WaitUntilDone_3(::UnityEngine::AsyncOperation* operation)
		{
			return ((::System::Single(*)(::UnityEngine::AsyncOperation*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_WAITUNTILDONE_3_OFFSET))(operation);
		}

		static ::System::Collections::Generic::IEnumerator_1<::System::Single>* _StartWhenDone_2(::UnityEngine::AsyncOperation* operation, ::System::Collections::Generic::IEnumerator_1<::System::Single>* pausedProc)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::UnityEngine::AsyncOperation*, ::System::Collections::Generic::IEnumerator_1<::System::Single>*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER__STARTWHENDONE_2_OFFSET))(operation, pausedProc);
		}

		static ::System::Single WaitUntilDone_4(::UnityEngine::CustomYieldInstruction* operation)
		{
			return ((::System::Single(*)(::UnityEngine::CustomYieldInstruction*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_WAITUNTILDONE_4_OFFSET))(operation);
		}

		static ::System::Collections::Generic::IEnumerator_1<::System::Single>* _StartWhenDone_3(::UnityEngine::CustomYieldInstruction* operation, ::System::Collections::Generic::IEnumerator_1<::System::Single>* pausedProc)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::UnityEngine::CustomYieldInstruction*, ::System::Collections::Generic::IEnumerator_1<::System::Single>*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER__STARTWHENDONE_3_OFFSET))(operation, pausedProc);
		}

		::System::Boolean LockCoroutine(::Foundation::Coroutine::CoroutineHandle coroutine, ::Foundation::Coroutine::CoroutineHandle key)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Coroutine::CoroutineHandle, ::Foundation::Coroutine::CoroutineHandle))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_LOCKCOROUTINE_OFFSET))(this, coroutine, key);
		}

		::System::Boolean UnlockCoroutine(::Foundation::Coroutine::CoroutineHandle coroutine, ::Foundation::Coroutine::CoroutineHandle key)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Coroutine::CoroutineHandle, ::Foundation::Coroutine::CoroutineHandle))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_UNLOCKCOROUTINE_OFFSET))(this, coroutine, key);
		}

		static ::Foundation::Coroutine::CoroutineHandle CallDelayed(::System::Single delay, ::System::Action* action)
		{
			return ((::Foundation::Coroutine::CoroutineHandle(*)(::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLDELAYED_OFFSET))(delay, action);
		}

		::Foundation::Coroutine::CoroutineHandle CallDelayedOnInstance(::System::Single delay, ::System::Action* action)
		{
			return ((::Foundation::Coroutine::CoroutineHandle(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLDELAYEDONINSTANCE_OFFSET))(this, delay, action);
		}

		static ::Foundation::Coroutine::CoroutineHandle CallDelayed_1(::System::Single delay, ::System::Action* action, ::UnityEngine::GameObject* cancelWith)
		{
			return ((::Foundation::Coroutine::CoroutineHandle(*)(::System::Single, ::System::Action*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLDELAYED_1_OFFSET))(delay, action, cancelWith);
		}

		static ::Foundation::Coroutine::CoroutineHandle CallDelayed_2(::System::Single delay, ::Foundation::Coroutine::CoroutineHandle handle, ::System::Action* action, ::Foundation::Coroutine::Segment timing)
		{
			return ((::Foundation::Coroutine::CoroutineHandle(*)(::System::Single, ::Foundation::Coroutine::CoroutineHandle, ::System::Action*, ::Foundation::Coroutine::Segment))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLDELAYED_2_OFFSET))(delay, handle, action, timing);
		}

		static ::Foundation::Coroutine::CoroutineHandle CallDelayed_3(::System::Single delay, ::System::Action* action, ::Foundation::Coroutine::Segment timing)
		{
			return ((::Foundation::Coroutine::CoroutineHandle(*)(::System::Single, ::System::Action*, ::Foundation::Coroutine::Segment))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLDELAYED_3_OFFSET))(delay, action, timing);
		}

		::Foundation::Coroutine::CoroutineHandle CallDelayedOnInstance_1(::System::Single delay, ::System::Action* action, ::UnityEngine::GameObject* cancelWith)
		{
			return ((::Foundation::Coroutine::CoroutineHandle(*)(::PVOID, ::System::Single, ::System::Action*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLDELAYEDONINSTANCE_1_OFFSET))(this, delay, action, cancelWith);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* _DelayedCall(::System::Single delay, ::System::Action* action, ::UnityEngine::GameObject* cancelWith)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::Single, ::System::Action*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER__DELAYEDCALL_OFFSET))(this, delay, action, cancelWith);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* _DelayedCall_1(::System::Single delay, ::System::Action* action)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER__DELAYEDCALL_1_OFFSET))(this, delay, action);
		}

		static ::Foundation::Coroutine::CoroutineHandle CallPeriodically(::System::Single timeframe, ::System::Single period, ::System::Action* action, ::System::Action* onDone)
		{
			return ((::Foundation::Coroutine::CoroutineHandle(*)(::System::Single, ::System::Single, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLPERIODICALLY_OFFSET))(timeframe, period, action, onDone);
		}

		::Foundation::Coroutine::CoroutineHandle CallPeriodicallyOnInstance(::System::Single timeframe, ::System::Single period, ::System::Action* action, ::System::Action* onDone)
		{
			return ((::Foundation::Coroutine::CoroutineHandle(*)(::PVOID, ::System::Single, ::System::Single, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLPERIODICALLYONINSTANCE_OFFSET))(this, timeframe, period, action, onDone);
		}

		static ::Foundation::Coroutine::CoroutineHandle CallPeriodically_1(::System::Single timeframe, ::System::Single period, ::System::Action* action, ::Foundation::Coroutine::Segment timing, ::System::Action* onDone)
		{
			return ((::Foundation::Coroutine::CoroutineHandle(*)(::System::Single, ::System::Single, ::System::Action*, ::Foundation::Coroutine::Segment, ::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLPERIODICALLY_1_OFFSET))(timeframe, period, action, timing, onDone);
		}

		::Foundation::Coroutine::CoroutineHandle CallPeriodicallyOnInstance_1(::System::Single timeframe, ::System::Single period, ::System::Action* action, ::Foundation::Coroutine::Segment timing, ::System::Action* onDone)
		{
			return ((::Foundation::Coroutine::CoroutineHandle(*)(::PVOID, ::System::Single, ::System::Single, ::System::Action*, ::Foundation::Coroutine::Segment, ::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLPERIODICALLYONINSTANCE_1_OFFSET))(this, timeframe, period, action, timing, onDone);
		}

		static ::Foundation::Coroutine::CoroutineHandle CallContinuously(::System::Single timeframe, ::System::Action* action, ::System::Action* onDone)
		{
			return ((::Foundation::Coroutine::CoroutineHandle(*)(::System::Single, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLCONTINUOUSLY_OFFSET))(timeframe, action, onDone);
		}

		::Foundation::Coroutine::CoroutineHandle CallContinuouslyOnInstance(::System::Single timeframe, ::System::Action* action, ::System::Action* onDone)
		{
			return ((::Foundation::Coroutine::CoroutineHandle(*)(::PVOID, ::System::Single, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLCONTINUOUSLYONINSTANCE_OFFSET))(this, timeframe, action, onDone);
		}

		static ::Foundation::Coroutine::CoroutineHandle CallContinuously_1(::System::Single timeframe, ::System::Action* action, ::Foundation::Coroutine::Segment timing, ::System::Action* onDone)
		{
			return ((::Foundation::Coroutine::CoroutineHandle(*)(::System::Single, ::System::Action*, ::Foundation::Coroutine::Segment, ::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLCONTINUOUSLY_1_OFFSET))(timeframe, action, timing, onDone);
		}

		::Foundation::Coroutine::CoroutineHandle CallContinuouslyOnInstance_1(::System::Single timeframe, ::System::Action* action, ::Foundation::Coroutine::Segment timing, ::System::Action* onDone)
		{
			return ((::Foundation::Coroutine::CoroutineHandle(*)(::PVOID, ::System::Single, ::System::Action*, ::Foundation::Coroutine::Segment, ::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLCONTINUOUSLYONINSTANCE_1_OFFSET))(this, timeframe, action, timing, onDone);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* _CallContinuously(::System::Single timeframe, ::System::Single period, ::System::Action* action, ::System::Action* onDone)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::Single, ::System::Single, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER__CALLCONTINUOUSLY_OFFSET))(this, timeframe, period, action, onDone);
		}

		static ::Foundation::Coroutine::CoroutineHandle CallPeriodicallyUntil(::System::Single period, ::System::Func_1<::System::Boolean>* predicate, ::System::Action* action, ::System::Action* onDone)
		{
			return ((::Foundation::Coroutine::CoroutineHandle(*)(::System::Single, ::System::Func_1<::System::Boolean>*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_CALLPERIODICALLYUNTIL_OFFSET))(period, predicate, action, onDone);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* _CallContinuouslyUntil(::System::Single period, ::System::Func_1<::System::Boolean>* predicate, ::System::Action* action, ::System::Action* onDone)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::Single, ::System::Func_1<::System::Boolean>*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER__CALLCONTINUOUSLYUNTIL_OFFSET))(this, period, predicate, action, onDone);
		}

		::UnityEngine::Coroutine* StartCoroutine(::System::String* methodName, ::System::Object* value)
		{
			return ((::UnityEngine::Coroutine*(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_STARTCOROUTINE_OFFSET))(this, methodName, value);
		}

		::UnityEngine::Coroutine* StartCoroutine_1(::System::String* methodName)
		{
			return ((::UnityEngine::Coroutine*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_STARTCOROUTINE_1_OFFSET))(this, methodName);
		}

		::UnityEngine::Coroutine* StartCoroutine_Auto(::System::Collections::IEnumerator* routine)
		{
			return ((::UnityEngine::Coroutine*(*)(::PVOID, ::System::Collections::IEnumerator*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_STARTCOROUTINE_AUTO_OFFSET))(this, routine);
		}

		::System::Void StopCoroutine(::System::String* methodName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_STOPCOROUTINE_OFFSET))(this, methodName);
		}

		::System::Void StopAllCoroutines()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_STOPALLCOROUTINES_OFFSET))(this);
		}

		static ::System::Void Destroy(::UnityEngine::Object* obj)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_DESTROY_OFFSET))(obj);
		}

		static ::System::Void Destroy_1(::UnityEngine::Object* obj, ::System::Single f)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_DESTROY_1_OFFSET))(obj, f);
		}

		static ::System::Void DestroyObject(::UnityEngine::Object* obj)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_DESTROYOBJECT_OFFSET))(obj);
		}

		static ::System::Void DestroyObject_1(::UnityEngine::Object* obj, ::System::Single f)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_DESTROYOBJECT_1_OFFSET))(obj, f);
		}

		static ::System::Void DestroyImmediate(::UnityEngine::Object* obj)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_DESTROYIMMEDIATE_OFFSET))(obj);
		}

		static ::System::Void DestroyImmediate_1(::UnityEngine::Object* obj, ::System::Boolean b)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_DESTROYIMMEDIATE_1_OFFSET))(obj, b);
		}

		static ::UnityEngine::Object* FindObjectOfType_1(::System::Type* t)
		{
			return ((::UnityEngine::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_FINDOBJECTOFTYPE_1_OFFSET))(t);
		}

		static ::Il2CppArray<::UnityEngine::Object*>* FindObjectsOfType_1(::System::Type* t)
		{
			return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_FINDOBJECTSOFTYPE_1_OFFSET))(t);
		}

		static ::System::Void print(::System::Object* message)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_COROUTINE_COROUTINEMANAGER_PRINT_OFFSET))(message);
		}
	};
}
