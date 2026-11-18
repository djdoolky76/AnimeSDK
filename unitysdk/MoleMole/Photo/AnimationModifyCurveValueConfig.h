#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/Foundation/NativeMemoryRequestHandle.h"
#include "unitysdk/JINKCNHJDGF.h"
#include "unitysdk/PMBCHGNJMKF.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace Foundation { class NativeMemory; }
namespace Foundation { class NativeMemoryBuilder; }
namespace MoleMole::Photo { class AnimationModifyCurveValueItem; }
namespace MoleMole::Photo { class Skeleton; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class Animator; }

#define MOLEMOLE_PHOTO_ANIMATIONMODIFYCURVEVALUECONFIG_CREATE_OFFSET UNITYSDK_OFFSET(0x131135B0)
#define MOLEMOLE_PHOTO_ANIMATIONMODIFYCURVEVALUECONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET UNITYSDK_OFFSET(0x13113450)
#define MOLEMOLE_PHOTO_ANIMATIONMODIFYCURVEVALUECONFIG_GET_NAMES_OFFSET UNITYSDK_OFFSET(0x13113E30)
#define MOLEMOLE_PHOTO_ANIMATIONMODIFYCURVEVALUECONFIG_REQUEST_OFFSET UNITYSDK_OFFSET(0x13113BD0)
#define MOLEMOLE_PHOTO_ANIMATIONMODIFYCURVEVALUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x13113F60)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int AnimationModifyCurveValueConfig_TypeDefinitionIndex = 84641;

	class AnimationModifyCurveValueConfig : public ::System::Object
	{
	public:
		::Il2CppArray<::MoleMole::Photo::AnimationModifyCurveValueItem*>* items; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONMODIFYCURVEVALUECONFIG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_DynamicMemoryCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONMODIFYCURVEVALUECONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET))(this);
		}

		::JINKCNHJDGF Create(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::Animator* ICAAMDMMDDJ, ::PMBCHGNJMKF& AAOCANGHBDG, ::Foundation::NativeMemory* HOMNNKAIOHF, ::System::ReadOnlySpan_1_F48FB86071006F3E<::Foundation::NativeMemoryRequestHandle> BBCMGINHDNK)
		{
			return ((::JINKCNHJDGF(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animator*, ::PMBCHGNJMKF&, ::Foundation::NativeMemory*, ::System::ReadOnlySpan_1_F48FB86071006F3E<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONMODIFYCURVEVALUECONFIG_CREATE_OFFSET))(this, MHPNGBGGMMN, ICAAMDMMDDJ, AAOCANGHBDG, HOMNNKAIOHF, BBCMGINHDNK);
		}

		::System::Void Request(::UnityEngine::Animator* ICAAMDMMDDJ, ::MoleMole::Photo::Skeleton* NEGDIIDKGIA, ::Foundation::NativeMemoryBuilder* GENNIFDPOAM, ::System::Span_1_9011FAD97750D224<::Foundation::NativeMemoryRequestHandle> AJMCCOEAIFE)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::MoleMole::Photo::Skeleton*, ::Foundation::NativeMemoryBuilder*, ::System::Span_1_9011FAD97750D224<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONMODIFYCURVEVALUECONFIG_REQUEST_OFFSET))(this, ICAAMDMMDDJ, NEGDIIDKGIA, GENNIFDPOAM, AJMCCOEAIFE);
		}

		::System::Collections::Generic::IEnumerable_1<::Foundation::Unreal::FName>* get_Names()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::Foundation::Unreal::FName>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONMODIFYCURVEVALUECONFIG_GET_NAMES_OFFSET))(this);
		}
	};
}
