#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/NativeMemoryRequestHandle.h"
#include "unitysdk/OMFPGFJGCLF.h"
#include "unitysdk/PMBCHGNJMKF.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace Foundation { class NativeMemory; }
namespace Foundation { class NativeMemoryBuilder; }
namespace MoleMole::Photo { class RotationRatioCurve; }
namespace MoleMole::Photo { class Skeleton; }
namespace MoleMole::Photo { class TranslationRatioCurve; }
namespace UnityEngine { class Animator; }

#define MOLEMOLE_PHOTO_MOTIONRATIOCURVE_CREATE_OFFSET UNITYSDK_OFFSET(0x135C9650)
#define MOLEMOLE_PHOTO_MOTIONRATIOCURVE_GET_DYNAMICMEMORYCOUNT_OFFSET UNITYSDK_OFFSET(0x135CA040)
#define MOLEMOLE_PHOTO_MOTIONRATIOCURVE_REQUEST_OFFSET UNITYSDK_OFFSET(0x135CA0A0)
#define MOLEMOLE_PHOTO_MOTIONRATIOCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x135CA220)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int MotionRatioCurve_TypeDefinitionIndex = 85647;

	class MotionRatioCurve : public ::System::Object
	{
	public:
		::MoleMole::Photo::TranslationRatioCurve* translation; // 0x10
		::MoleMole::Photo::RotationRatioCurve* rotation; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_MOTIONRATIOCURVE__CTOR_OFFSET))(this);
		}

		::OMFPGFJGCLF Create(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::Animator* ICAAMDMMDDJ, ::PMBCHGNJMKF& AAOCANGHBDG, ::Foundation::NativeMemory* HOMNNKAIOHF, ::System::ReadOnlySpan_1_F48FB86071006F3E<::Foundation::NativeMemoryRequestHandle> BBCMGINHDNK)
		{
			return ((::OMFPGFJGCLF(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animator*, ::PMBCHGNJMKF&, ::Foundation::NativeMemory*, ::System::ReadOnlySpan_1_F48FB86071006F3E<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_MOTIONRATIOCURVE_CREATE_OFFSET))(this, MHPNGBGGMMN, ICAAMDMMDDJ, AAOCANGHBDG, HOMNNKAIOHF, BBCMGINHDNK);
		}

		::System::Int32 get_DynamicMemoryCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_MOTIONRATIOCURVE_GET_DYNAMICMEMORYCOUNT_OFFSET))(this);
		}

		::System::Void Request(::UnityEngine::Animator* ICAAMDMMDDJ, ::MoleMole::Photo::Skeleton* NEGDIIDKGIA, ::Foundation::NativeMemoryBuilder* GENNIFDPOAM, ::System::Span_1_9011FAD97750D224<::Foundation::NativeMemoryRequestHandle> AJMCCOEAIFE)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::MoleMole::Photo::Skeleton*, ::Foundation::NativeMemoryBuilder*, ::System::Span_1_9011FAD97750D224<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_MOTIONRATIOCURVE_REQUEST_OFFSET))(this, ICAAMDMMDDJ, NEGDIIDKGIA, GENNIFDPOAM, AJMCCOEAIFE);
		}
	};
}
