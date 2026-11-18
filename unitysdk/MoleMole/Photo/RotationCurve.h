#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/NativeMemoryRequestHandle.h"
#include "unitysdk/IKMMEGFBOIC.h"
#include "unitysdk/PMBCHGNJMKF.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace Foundation { class NativeMemory; }
namespace Foundation { class NativeMemoryBuilder; }
namespace MoleMole::Photo { class Skeleton; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Animator; }

#define MOLEMOLE_PHOTO_ROTATIONCURVE_CREATE_OFFSET UNITYSDK_OFFSET(0x1A712FC0)
#define MOLEMOLE_PHOTO_ROTATIONCURVE_GET_DYNAMICMEMORYCOUNT_OFFSET UNITYSDK_OFFSET(0x1A7136F0)
#define MOLEMOLE_PHOTO_ROTATIONCURVE_REQUEST_OFFSET UNITYSDK_OFFSET(0x1A713700)
#define MOLEMOLE_PHOTO_ROTATIONCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A713840)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int RotationCurve_TypeDefinitionIndex = 47837;

	class RotationCurve : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* x; // 0x10
		::UnityEngine::AnimationCurve* y; // 0x18
		::UnityEngine::AnimationCurve* z; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ROTATIONCURVE__CTOR_OFFSET))(this);
		}

		::IKMMEGFBOIC Create(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::Animator* ICAAMDMMDDJ, ::PMBCHGNJMKF& AAOCANGHBDG, ::Foundation::NativeMemory* HOMNNKAIOHF, ::System::ReadOnlySpan_1_F48FB86071006F3E<::Foundation::NativeMemoryRequestHandle> BBCMGINHDNK)
		{
			return ((::IKMMEGFBOIC(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animator*, ::PMBCHGNJMKF&, ::Foundation::NativeMemory*, ::System::ReadOnlySpan_1_F48FB86071006F3E<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ROTATIONCURVE_CREATE_OFFSET))(this, MHPNGBGGMMN, ICAAMDMMDDJ, AAOCANGHBDG, HOMNNKAIOHF, BBCMGINHDNK);
		}

		::System::Int32 get_DynamicMemoryCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ROTATIONCURVE_GET_DYNAMICMEMORYCOUNT_OFFSET))(this);
		}

		::System::Void Request(::UnityEngine::Animator* ICAAMDMMDDJ, ::MoleMole::Photo::Skeleton* NEGDIIDKGIA, ::Foundation::NativeMemoryBuilder* GENNIFDPOAM, ::System::Span_1_9011FAD97750D224<::Foundation::NativeMemoryRequestHandle> AJMCCOEAIFE)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::MoleMole::Photo::Skeleton*, ::Foundation::NativeMemoryBuilder*, ::System::Span_1_9011FAD97750D224<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ROTATIONCURVE_REQUEST_OFFSET))(this, ICAAMDMMDDJ, NEGDIIDKGIA, GENNIFDPOAM, AJMCCOEAIFE);
		}
	};
}
