#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FFHBHCGJMHL.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Profiling/ProfilerMarkerWithObject.h"
class CKDKMLKHCKK;
class GLAKFODMCPH;
class HHECHLOIEJO;
class LDMKDJJLOIL;
class PHPFBBDLPNL_GDPCFEDMCHC;
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define GBHFOGMDJPF_AIIKDJHDNPM_OFFSET UNITYSDK_OFFSET(0x1594FC20)
#define GBHFOGMDJPF_BIAFMDJPINJ_OFFSET UNITYSDK_OFFSET(0x159502B0)
#define GBHFOGMDJPF_CCTOR_OFFSET UNITYSDK_OFFSET(0x15950920)
#define GBHFOGMDJPF_CLEAR_OFFSET UNITYSDK_OFFSET(0x15950000)
#define GBHFOGMDJPF_CTOR_OFFSET UNITYSDK_OFFSET(0x15950820)
#define GBHFOGMDJPF_FGFNOGFECKF_OFFSET UNITYSDK_OFFSET(0x1594FE50)
#define GBHFOGMDJPF_GETUNEVALUATEDNEXTSTATE_OFFSET UNITYSDK_OFFSET(0x15950520)
#define GBHFOGMDJPF_GETUNITYANIMATOR_OFFSET UNITYSDK_OFFSET(0x159505B0)
#define GBHFOGMDJPF_GET_ANIMATORMOVECALLBACKORDER_OFFSET UNITYSDK_OFFSET(0x159505F0)
#define GBHFOGMDJPF_GET_ANIMATORNOTINIT_OFFSET UNITYSDK_OFFSET(0x15950490)
#define GBHFOGMDJPF_GET_DYNAMICANIMEVENTDATALIST_OFFSET UNITYSDK_OFFSET(0x159504F0)
#define GBHFOGMDJPF_GET_ENABLEANIMATORMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15950600)
#define GBHFOGMDJPF_GET_NEEDRESETEVENT_OFFSET UNITYSDK_OFFSET(0x159504B0)
#define GBHFOGMDJPF_GET_ONANIMATIONSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x159504D0)
#define GBHFOGMDJPF_GET_ONANIMATORMOVECALLBACKMAP_OFFSET UNITYSDK_OFFSET(0x15950510)
#define GBHFOGMDJPF_GET_REENTRYCOUNTER_OFFSET UNITYSDK_OFFSET(0x15950470)
#define GBHFOGMDJPF_GET_TASKCONTEXT_OFFSET UNITYSDK_OFFSET(0x15950380)
#define GBHFOGMDJPF_GET_WORLDREF_OFFSET UNITYSDK_OFFSET(0x15950350)
#define GBHFOGMDJPF_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0x159503A0)
#define GBHFOGMDJPF_NIBAHFGIODH_OFFSET UNITYSDK_OFFSET(0x15950370)
#define GBHFOGMDJPF_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0x15950610)
#define GBHFOGMDJPF_OPOELFHJNIF_OFFSET UNITYSDK_OFFSET(0x159501E0)
#define GBHFOGMDJPF_PCKLFPFPAMP_OFFSET UNITYSDK_OFFSET(0x1594FF30)
#define GBHFOGMDJPF_QUERYSTATENORAMLIZEDSTARTTIME_OFFSET UNITYSDK_OFFSET(0x15950560)
#define GBHFOGMDJPF_SET_ANIMATORNOTINIT_OFFSET UNITYSDK_OFFSET(0x159504A0)
#define GBHFOGMDJPF_SET_DYNAMICANIMEVENTDATALIST_OFFSET UNITYSDK_OFFSET(0x15950500)
#define GBHFOGMDJPF_SET_NEEDRESETEVENT_OFFSET UNITYSDK_OFFSET(0x159504C0)
#define GBHFOGMDJPF_SET_ONANIMATIONSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x159504E0)
#define GBHFOGMDJPF_SET_REENTRYCOUNTER_OFFSET UNITYSDK_OFFSET(0x15950480)
#define GBHFOGMDJPF_SET_TASKCONTEXT_OFFSET UNITYSDK_OFFSET(0x15950390)
#define GBHFOGMDJPF_SET_WORLDREF_OFFSET UNITYSDK_OFFSET(0x15950360)

	class GBHFOGMDJPF : public ::System::Object
	{
	public:
		::RPG::GameCore::TaskContext* _TaskContext_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* _OnAnimatorMoveCallbackMap_k__BackingField; // 0x18
		::RPG::GameCore::GameEntity* EENKEBPDHCN; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::CKDKMLKHCKK*>* HBAEGPCNBNJ; // 0x28
		::System::Collections::Generic::List_1<::LDMKDJJLOIL*>* _DynamicAnimEventDataList_k__BackingField; // 0x30
		::RPG::GameCore::GameWorld* _WorldRef_k__BackingField; // 0x38
		::HHECHLOIEJO* EGKMMHCBAEM; // 0x40
		::UnityEngine::Animator* APPGGMLEPLN; // 0x48
		::Il2CppArray<::System::String*>* NBNJJDIMDKE; // 0x50
		::PHPFBBDLPNL_GDPCFEDMCHC* _OnAnimationStateChange_k__BackingField; // 0x58
		::Entitas::IEntity* KAKEIDJDNHJ; // 0x60
		::Il2CppArray<::System::String*>* DGACBCPDJMJ; // 0x68
		::FFHBHCGJMHL JFLIFHEFPFH; // 0x70
		::System::Boolean _AnimatorNotInit_k__BackingField; // 0x80
		::System::Boolean _NeedResetEvent_k__BackingField; // 0x81
		::System::Byte _padding0[0x2];
		::System::UInt32 OFHDNLFDJCJ; // 0x84
		::System::Int32 _ReEntryCounter_k__BackingField; // 0x88
		static ::Unity::Profiling::ProfilerMarkerWithObject* StaticGet_EBMLLFFBHAG()
		{
			return (::Unity::Profiling::ProfilerMarkerWithObject*)UnitySDK::FromName("", "GBHFOGMDJPF")->GetStaticField(0x14620);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHFOGMDJPF_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBHFOGMDJPF_CCTOR_OFFSET))();
		}

		::System::Void AIIKDJHDNPM(::Entitas::IEntity* a1, ::GLAKFODMCPH* a2, ::Il2CppArray<::System::String*>* a3, ::Il2CppArray<::System::String*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::GLAKFODMCPH*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + GBHFOGMDJPF_AIIKDJHDNPM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 FGFNOGFECKF(::CKDKMLKHCKK* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::CKDKMLKHCKK*))((::PBYTE)hIl2Cpp + GBHFOGMDJPF_FGFNOGFECKF_OFFSET))(this, a1);
		}

		::CKDKMLKHCKK* PCKLFPFPAMP(::System::UInt32 a1)
		{
			return ((::CKDKMLKHCKK*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GBHFOGMDJPF_PCKLFPFPAMP_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHFOGMDJPF_CLEAR_OFFSET))(this);
		}

		::System::Void OPOELFHJNIF(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + GBHFOGMDJPF_OPOELFHJNIF_OFFSET))(this, a1);
		}

		::System::Void BIAFMDJPINJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHFOGMDJPF_BIAFMDJPINJ_OFFSET))(this);
		}

		::RPG::GameCore::GameWorld* get_WorldRef()
		{
			return ((::RPG::GameCore::GameWorld*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHFOGMDJPF_GET_WORLDREF_OFFSET))(this);
		}

		::System::Void set_WorldRef(::RPG::GameCore::GameWorld* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + GBHFOGMDJPF_SET_WORLDREF_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* NIBAHFGIODH()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHFOGMDJPF_NIBAHFGIODH_OFFSET))(this);
		}

		::RPG::GameCore::TaskContext* get_TaskContext()
		{
			return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHFOGMDJPF_GET_TASKCONTEXT_OFFSET))(this);
		}

		::System::Void set_TaskContext(::RPG::GameCore::TaskContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + GBHFOGMDJPF_SET_TASKCONTEXT_OFFSET))(this, a1);
		}

		::System::String* MLMGEFIOION()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHFOGMDJPF_MLMGEFIOION_OFFSET))(this);
		}

		::System::Int32 get_ReEntryCounter()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHFOGMDJPF_GET_REENTRYCOUNTER_OFFSET))(this);
		}

		::System::Void set_ReEntryCounter(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GBHFOGMDJPF_SET_REENTRYCOUNTER_OFFSET))(this, a1);
		}

		::System::Boolean get_AnimatorNotInit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHFOGMDJPF_GET_ANIMATORNOTINIT_OFFSET))(this);
		}

		::System::Void set_AnimatorNotInit(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GBHFOGMDJPF_SET_ANIMATORNOTINIT_OFFSET))(this, a1);
		}

		::System::Boolean get_NeedResetEvent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHFOGMDJPF_GET_NEEDRESETEVENT_OFFSET))(this);
		}

		::System::Void set_NeedResetEvent(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GBHFOGMDJPF_SET_NEEDRESETEVENT_OFFSET))(this, a1);
		}

		::PHPFBBDLPNL_GDPCFEDMCHC* get_OnAnimationStateChange()
		{
			return ((::PHPFBBDLPNL_GDPCFEDMCHC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHFOGMDJPF_GET_ONANIMATIONSTATECHANGE_OFFSET))(this);
		}

		::System::Void set_OnAnimationStateChange(::PHPFBBDLPNL_GDPCFEDMCHC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PHPFBBDLPNL_GDPCFEDMCHC*))((::PBYTE)hIl2Cpp + GBHFOGMDJPF_SET_ONANIMATIONSTATECHANGE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::LDMKDJJLOIL*>* get_DynamicAnimEventDataList()
		{
			return ((::System::Collections::Generic::List_1<::LDMKDJJLOIL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHFOGMDJPF_GET_DYNAMICANIMEVENTDATALIST_OFFSET))(this);
		}

		::System::Void set_DynamicAnimEventDataList(::System::Collections::Generic::List_1<::LDMKDJJLOIL*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::LDMKDJJLOIL*>*))((::PBYTE)hIl2Cpp + GBHFOGMDJPF_SET_DYNAMICANIMEVENTDATALIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* get_OnAnimatorMoveCallbackMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHFOGMDJPF_GET_ONANIMATORMOVECALLBACKMAP_OFFSET))(this);
		}

		::System::Int32 GetUnevaluatedNextState()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHFOGMDJPF_GETUNEVALUATEDNEXTSTATE_OFFSET))(this);
		}

		::System::Single QueryStateNoramlizedStartTime(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GBHFOGMDJPF_QUERYSTATENORAMLIZEDSTARTTIME_OFFSET))(this, a1);
		}

		::UnityEngine::Animator* GetUnityAnimator()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHFOGMDJPF_GETUNITYANIMATOR_OFFSET))(this);
		}

		::System::Int32 get_AnimatorMoveCallbackOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHFOGMDJPF_GET_ANIMATORMOVECALLBACKORDER_OFFSET))(this);
		}

		::System::Boolean get_EnableAnimatorMoveCallback()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHFOGMDJPF_GET_ENABLEANIMATORMOVECALLBACK_OFFSET))(this);
		}

		::System::Void OnAnimatorMove(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + GBHFOGMDJPF_ONANIMATORMOVE_OFFSET))(this, a1);
		}

	};
