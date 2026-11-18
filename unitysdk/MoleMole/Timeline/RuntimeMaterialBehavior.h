#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/BaseTimeline/BaseTimelineBehavior.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class RuntimeMaterialCompRecorderInfo; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Timeline { class AnimationTrack; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_AJJPLCHPEME_OFFSET UNITYSDK_OFFSET(0x15AE8720)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x15AE8A50)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_BGHCCFKLHNO_OFFSET UNITYSDK_OFFSET(0x15AE8420)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_BNHLINFOPFM_OFFSET UNITYSDK_OFFSET(0x15AE8430)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_EEEPHBMCNEN_OFFSET UNITYSDK_OFFSET(0x15AE8A30)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_EMFJABOBFFO_OFFSET UNITYSDK_OFFSET(0x15AE7530)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x15AE71C0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_GET_REFERENCETARGET_OFFSET UNITYSDK_OFFSET(0x15AE7280)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x15AE7100)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_GFCNMJHBMMG_OFFSET UNITYSDK_OFFSET(0x15AE8D60)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_HFFCKPDPHOC_OFFSET UNITYSDK_OFFSET(0x15AE7BB0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_HLHBNDBODPC_OFFSET UNITYSDK_OFFSET(0x15AE7FD0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_HMGHLMMLMBP_OFFSET UNITYSDK_OFFSET(0x15AE7D10)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_IAKIJFCADNL_OFFSET UNITYSDK_OFFSET(0x15AE7860)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_JEINNALOJDE_OFFSET UNITYSDK_OFFSET(0x15AE8FA0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_JMGDLBOJKML_OFFSET UNITYSDK_OFFSET(0x15AE7B70)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_KGDPLBLHHFJ_OFFSET UNITYSDK_OFFSET(0x15AE8FC0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_LMGCBKENOPJ_OFFSET UNITYSDK_OFFSET(0x15AE8FB0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_OFMFPDACPLH_OFFSET UNITYSDK_OFFSET(0x15AE8A40)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x15AE77B0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x15AE7AA0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x15AE7760)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x15AE7B00)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_ONPLAY_OFFSET UNITYSDK_OFFSET(0x15AE7800)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_ONPROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x15AE72A0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x15AE8410)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_SET_REFERENCETARGET_OFFSET UNITYSDK_OFFSET(0x15AE7290)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x15AE7F50)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int RuntimeMaterialBehavior_TypeDefinitionIndex = 56336;

	class RuntimeMaterialBehavior : public ::MoleMole::Timeline::BaseTimeline::BaseTimelineBehavior
	{
	public:
		::UnityEngine::Timeline::AnimationTrack* kFrameTrack; // 0x18
		::UnityEngine::Timeline::TimelineClip* parentRecorderClip; // 0x20
		::UnityEngine::GameObject* referenceGameObj; // 0x28
		::System::Boolean RefreshRenderEntities; // 0x30
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::List_1<::MoleMole::Timeline::RuntimeMaterialCompRecorderInfo*>* CompInfos; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Double get_startTime()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_GET_STARTTIME_OFFSET))(this);
		}

		::System::Double get_endTime()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_GET_ENDTIME_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_referenceTarget()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_GET_REFERENCETARGET_OFFSET))(this);
		}

		::System::Void set_referenceTarget(::UnityEngine::GameObject* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_SET_REFERENCETARGET_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void OnProcessFrame(::UnityEngine::Playables::Playable BBAPGLCBDOF, ::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC, ::System::Single IECOJPMPJMP, ::System::Int32 DFDHKJHBBAD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_ONPROCESSFRAME_OFFSET))(this, BBAPGLCBDOF, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC, IECOJPMPJMP, DFDHKJHBBAD);
		}

		::System::Void OnPlayableCreate(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_ONPLAYABLECREATE_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_ONGRAPHSTOP_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void OnPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_ONPLAY_OFFSET))(this);
		}

		::System::Void OnPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_ONPAUSE_OFFSET))(this);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void JMGDLBOJKML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_JMGDLBOJKML_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Renderer*>* HFFCKPDPHOC()
		{
			return ((::Il2CppArray<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_HFFCKPDPHOC_OFFSET))(this);
		}

		::System::Void HMGHLMMLMBP(::System::Boolean IAOJECCOMPN, ::System::Boolean MLLBKHOAAGG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_HMGHLMMLMBP_OFFSET))(this, IAOJECCOMPN, MLLBKHOAAGG);
		}

		::UnityEngine::MeshRenderer* HLHBNDBODPC(::Il2CppArray<::System::String*>* NHPCMDCKANK)
		{
			return ((::UnityEngine::MeshRenderer*(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_HLHBNDBODPC_OFFSET))(this, NHPCMDCKANK);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void BGHCCFKLHNO(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_BGHCCFKLHNO_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void EMFJABOBFFO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_EMFJABOBFFO_OFFSET))(this);
		}

		::System::Void BNHLINFOPFM(::System::ValueTuple_3<::UnityEngine::Renderer*, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*> OAKOMCMGFEE)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::UnityEngine::Renderer*, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*>))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_BNHLINFOPFM_OFFSET))(this, OAKOMCMGFEE);
		}

		::System::Void AJJPLCHPEME(::UnityEngine::GameObject* PEJHKGJMNBI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_AJJPLCHPEME_OFFSET))(this, PEJHKGJMNBI);
		}

		::System::Void EEEPHBMCNEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_EEEPHBMCNEN_OFFSET))(this);
		}

		::System::Void IAKIJFCADNL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_IAKIJFCADNL_OFFSET))(this);
		}

		::System::Void OFMFPDACPLH(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::Playable KMGKAIDEIBA, ::UnityEngine::Playables::FrameData FDHMCIFPNCK, ::System::Object* MPBJAGIKPJM, ::System::Single DDMDINPGCFI, ::System::Int32 CEIDLKIHMLC)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_OFMFPDACPLH_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
		}

		::System::Void BBOMJDBNHIC(::UnityEngine::GameObject* AHHHFPNNANM, ::UnityEngine::Timeline::AnimationTrack* JDBLFJPLPHK, ::UnityEngine::Timeline::TimelineClip* MOIHAKKIAMA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::AnimationTrack*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_BBOMJDBNHIC_OFFSET))(this, AHHHFPNNANM, JDBLFJPLPHK, MOIHAKKIAMA);
		}

		::System::Void JEINNALOJDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_JEINNALOJDE_OFFSET))(this);
		}

		::System::Void LMGCBKENOPJ(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_LMGCBKENOPJ_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void GFCNMJHBMMG(::UnityEngine::GameObject* KLEHKPCFDMG)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_GFCNMJHBMMG_OFFSET))(this, KLEHKPCFDMG);
		}

		::System::Void KGDPLBLHHFJ(::System::Boolean IAOJECCOMPN, ::UnityEngine::Material* AEIHFBNNLBP)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_KGDPLBLHHFJ_OFFSET))(this, IAOJECCOMPN, AEIHFBNNLBP);
		}
	};
}
