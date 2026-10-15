#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/OverrideTransform_ControlType.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_CTOR_OFFSET UNITYSDK_OFFSET(0xE913650)
#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_FIPPPOFIDHG_OFFSET UNITYSDK_OFFSET(0xE9131F0)
#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_LBKIGGMFDCM_OFFSET UNITYSDK_OFFSET(0xE912BC0)
#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_LLBOIGPIIIJ_1_OFFSET UNITYSDK_OFFSET(0xE912C90)
#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_LLBOIGPIIIJ_OFFSET UNITYSDK_OFFSET(0xE912210)
#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_MADKFHCKNJI_OFFSET UNITYSDK_OFFSET(0xE912D00)
#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_MPKEAJNHNCL_OFFSET UNITYSDK_OFFSET(0xE913240)
#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xE912E50)
#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xE912EB0)
#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xE912F20)

namespace RPGTools::Timeline
{
	class OverrideTransformMixer : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::Il2CppArray<::System::Double>* _ClipStartArray; // 0x10
		::Il2CppArray<::System::Double>* _ClipEndArray; // 0x18
		::RPGTools::Timeline::OverrideTransform_ControlType _ControlType; // 0x20
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Object*>* _OverrideTransformEntities; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_CTOR_OFFSET))(this);
		}

		::System::Void LLBOIGPIIIJ(::UnityEngine::Timeline::TrackAsset* a1, ::UnityEngine::GameObject* a2, ::RPGTools::Timeline::OverrideTransform_ControlType a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::GameObject*, ::RPGTools::Timeline::OverrideTransform_ControlType))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_LLBOIGPIIIJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LLBOIGPIIIJ_1(::UnityEngine::Timeline::TrackAsset* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_LLBOIGPIIIJ_1_OFFSET))(this, a1, a2);
		}

		::System::Void LBKIGGMFDCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_LBKIGGMFDCM_OFFSET))(this);
		}

		::System::Void MADKFHCKNJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_MADKFHCKNJI_OFFSET))(this);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_ONGRAPHSTOP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean FIPPPOFIDHG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_FIPPPOFIDHG_OFFSET))(this);
		}

		::System::Void MPKEAJNHNCL(::UnityEngine::Playables::Playable a1, ::System::Double a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::System::Double, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_OVERRIDETRANSFORMMIXER_MPKEAJNHNCL_OFFSET))(this, a1, a2, a3);
		}

	};
}
