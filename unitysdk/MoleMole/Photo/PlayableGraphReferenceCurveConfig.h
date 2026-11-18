#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IDCGMDKLNED.h"
#include "unitysdk/IGOJCCPHHAC.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BHGCFCKEDAP.h"
#include "unitysdk/Foundation/NativeMemoryBlob.h"
#include "unitysdk/Foundation/NativeMemoryRequestHandle.h"
#include "unitysdk/Foundation/NativeVariableArray_1.h"
#include "unitysdk/OANIIFNKPDK.h"
#include "unitysdk/PMBCHGNJMKF.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Keyframe.h"

namespace Foundation { class NativeMemory; }
namespace Foundation { class NativeMemoryBuilder; }
namespace MoleMole::Photo { class Skeleton; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Animator; }

#define MOLEMOLE_PHOTO_PLAYABLEGRAPHREFERENCECURVECONFIG_BHDFOAEAGHM_OFFSET UNITYSDK_OFFSET(0x1194E270)
#define MOLEMOLE_PHOTO_PLAYABLEGRAPHREFERENCECURVECONFIG_CNBEOBKNCHD_OFFSET UNITYSDK_OFFSET(0x1194D930)
#define MOLEMOLE_PHOTO_PLAYABLEGRAPHREFERENCECURVECONFIG_CREATE_OFFSET UNITYSDK_OFFSET(0x1194AD80)
#define MOLEMOLE_PHOTO_PLAYABLEGRAPHREFERENCECURVECONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET UNITYSDK_OFFSET(0x1194D390)
#define MOLEMOLE_PHOTO_PLAYABLEGRAPHREFERENCECURVECONFIG_HAACGBPDBEL_OFFSET UNITYSDK_OFFSET(0x1194E7B0)
#define MOLEMOLE_PHOTO_PLAYABLEGRAPHREFERENCECURVECONFIG_HCNJJMAHKHK_OFFSET UNITYSDK_OFFSET(0x1194DF10)
#define MOLEMOLE_PHOTO_PLAYABLEGRAPHREFERENCECURVECONFIG_LKIKCGDHDHN_OFFSET UNITYSDK_OFFSET(0x1194E400)
#define MOLEMOLE_PHOTO_PLAYABLEGRAPHREFERENCECURVECONFIG_MCAJJHDAHCG_OFFSET UNITYSDK_OFFSET(0x1194DBB0)
#define MOLEMOLE_PHOTO_PLAYABLEGRAPHREFERENCECURVECONFIG_NFEMHIJAKND_OFFSET UNITYSDK_OFFSET(0x1194DA50)
#define MOLEMOLE_PHOTO_PLAYABLEGRAPHREFERENCECURVECONFIG_REQUEST_OFFSET UNITYSDK_OFFSET(0x1194D3A0)
#define MOLEMOLE_PHOTO_PLAYABLEGRAPHREFERENCECURVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1194D920)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int PlayableGraphReferenceCurveConfig_TypeDefinitionIndex = 68681;

	class PlayableGraphReferenceCurveConfig : public ::System::Object
	{
	public:
		// static const ::System::Int32 IntervalAllocIndex = 0x0; // 0x0
		// static const ::System::Int32 EvaluateAllocIndex = 0x1; // 0x0
		// static const ::System::Int32 DerivativeAllocIndex = 0x2; // 0x0
		// static const ::System::Int32 IntegrateAllocIndex = 0x3; // 0x0
		// static const ::System::Int32 AllocCount = 0x4; // 0x0
		::UnityEngine::AnimationCurve* curve; // 0x10
		::IDCGMDKLNED flag; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEGRAPHREFERENCECURVECONFIG__CTOR_OFFSET))(this);
		}

		::BHGCFCKEDAP Create(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::Animator* ICAAMDMMDDJ, ::PMBCHGNJMKF& AAOCANGHBDG, ::Foundation::NativeMemory* HOMNNKAIOHF, ::System::ReadOnlySpan_1_F48FB86071006F3E<::Foundation::NativeMemoryRequestHandle> BBCMGINHDNK)
		{
			return ((::BHGCFCKEDAP(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animator*, ::PMBCHGNJMKF&, ::Foundation::NativeMemory*, ::System::ReadOnlySpan_1_F48FB86071006F3E<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEGRAPHREFERENCECURVECONFIG_CREATE_OFFSET))(this, MHPNGBGGMMN, ICAAMDMMDDJ, AAOCANGHBDG, HOMNNKAIOHF, BBCMGINHDNK);
		}

		::System::Int32 get_DynamicMemoryCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEGRAPHREFERENCECURVECONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET))(this);
		}

		::System::Void Request(::UnityEngine::Animator* ICAAMDMMDDJ, ::MoleMole::Photo::Skeleton* NEGDIIDKGIA, ::Foundation::NativeMemoryBuilder* GENNIFDPOAM, ::System::Span_1_9011FAD97750D224<::Foundation::NativeMemoryRequestHandle> AJMCCOEAIFE)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::MoleMole::Photo::Skeleton*, ::Foundation::NativeMemoryBuilder*, ::System::Span_1_9011FAD97750D224<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEGRAPHREFERENCECURVECONFIG_REQUEST_OFFSET))(this, ICAAMDMMDDJ, NEGDIIDKGIA, GENNIFDPOAM, AJMCCOEAIFE);
		}

		::System::Boolean CNBEOBKNCHD(::Foundation::NativeMemory* KCMFABOHGCD, ::Foundation::NativeMemoryRequestHandle HPCILAJBBHH, ::Foundation::NativeVariableArray_1<::OANIIFNKPDK>& PHHDHIBOCKA)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::NativeMemory*, ::Foundation::NativeMemoryRequestHandle, ::Foundation::NativeVariableArray_1<::OANIIFNKPDK>&))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEGRAPHREFERENCECURVECONFIG_CNBEOBKNCHD_OFFSET))(this, KCMFABOHGCD, HPCILAJBBHH, PHHDHIBOCKA);
		}

		static ::System::Void NFEMHIJAKND(::UnityEngine::Keyframe& FFKBEGIHIGG, ::UnityEngine::Keyframe& CKADGLGJJAB, ::Foundation::NativeMemoryBlob CJLBBGMPBDP, ::System::Int32& BOGPAHGJOJK, ::IGOJCCPHHAC IMOAKEGINJP)
		{
			return ((::System::Void(*)(::UnityEngine::Keyframe&, ::UnityEngine::Keyframe&, ::Foundation::NativeMemoryBlob, ::System::Int32&, ::IGOJCCPHHAC))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEGRAPHREFERENCECURVECONFIG_NFEMHIJAKND_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB, CJLBBGMPBDP, BOGPAHGJOJK, IMOAKEGINJP);
		}

		::System::Boolean MCAJJHDAHCG(::Foundation::NativeMemory* KCMFABOHGCD, ::Foundation::NativeMemoryRequestHandle ACLAAGKMJCF, ::Foundation::NativeMemoryBlob& PHHDHIBOCKA)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::NativeMemory*, ::Foundation::NativeMemoryRequestHandle, ::Foundation::NativeMemoryBlob&))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEGRAPHREFERENCECURVECONFIG_MCAJJHDAHCG_OFFSET))(this, KCMFABOHGCD, ACLAAGKMJCF, PHHDHIBOCKA);
		}

		::System::Boolean HCNJJMAHKHK(::Foundation::NativeMemory* KCMFABOHGCD, ::Foundation::NativeMemoryRequestHandle CDAMAAPCCBM, ::Foundation::NativeMemoryBlob& PHHDHIBOCKA)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::NativeMemory*, ::Foundation::NativeMemoryRequestHandle, ::Foundation::NativeMemoryBlob&))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEGRAPHREFERENCECURVECONFIG_HCNJJMAHKHK_OFFSET))(this, KCMFABOHGCD, CDAMAAPCCBM, PHHDHIBOCKA);
		}

		static ::System::Void BHDFOAEAGHM(::UnityEngine::Keyframe& FFKBEGIHIGG, ::UnityEngine::Keyframe& CKADGLGJJAB, ::Foundation::NativeMemoryBlob CJLBBGMPBDP, ::System::Int32& BOGPAHGJOJK, ::IGOJCCPHHAC IMOAKEGINJP)
		{
			return ((::System::Void(*)(::UnityEngine::Keyframe&, ::UnityEngine::Keyframe&, ::Foundation::NativeMemoryBlob, ::System::Int32&, ::IGOJCCPHHAC))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEGRAPHREFERENCECURVECONFIG_BHDFOAEAGHM_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB, CJLBBGMPBDP, BOGPAHGJOJK, IMOAKEGINJP);
		}

		::System::Boolean LKIKCGDHDHN(::Foundation::NativeMemory* KCMFABOHGCD, ::Foundation::NativeMemoryRequestHandle KGLGHNANAEG, ::Foundation::NativeMemoryBlob& PHHDHIBOCKA)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::NativeMemory*, ::Foundation::NativeMemoryRequestHandle, ::Foundation::NativeMemoryBlob&))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEGRAPHREFERENCECURVECONFIG_LKIKCGDHDHN_OFFSET))(this, KCMFABOHGCD, KGLGHNANAEG, PHHDHIBOCKA);
		}

		static ::System::Void HAACGBPDBEL(::UnityEngine::Keyframe& FFKBEGIHIGG, ::UnityEngine::Keyframe& CKADGLGJJAB, ::Foundation::NativeMemoryBlob CJLBBGMPBDP, ::System::Int32& BOGPAHGJOJK, ::IGOJCCPHHAC IMOAKEGINJP)
		{
			return ((::System::Void(*)(::UnityEngine::Keyframe&, ::UnityEngine::Keyframe&, ::Foundation::NativeMemoryBlob, ::System::Int32&, ::IGOJCCPHHAC))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_PLAYABLEGRAPHREFERENCECURVECONFIG_HAACGBPDBEL_OFFSET))(FFKBEGIHIGG, CKADGLGJJAB, CJLBBGMPBDP, BOGPAHGJOJK, IMOAKEGINJP);
		}
	};
}
