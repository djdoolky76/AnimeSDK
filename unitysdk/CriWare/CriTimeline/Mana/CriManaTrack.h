#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define CRIWARE_CRITIMELINE_MANA_CRIMANATRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x1FFC9440)
#define CRIWARE_CRITIMELINE_MANA_CRIMANATRACK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1FFCA0C0)
#define CRIWARE_CRITIMELINE_MANA_CRIMANATRACK_REMOVETRACKFROMBINDDICT_OFFSET UNITYSDK_OFFSET(0x1FFC9D60)
#define CRIWARE_CRITIMELINE_MANA_CRIMANATRACK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FFCA190)
#define CRIWARE_CRITIMELINE_MANA_CRIMANATRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1FFCA120)

namespace CriWare::CriTimeline::Mana
{
	inline static constexpr unsigned int CriManaTrack_TypeDefinitionIndex = 34586;

	class CriManaTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Guid>** StaticGet_bindDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Guid>**)Il2CppClass::FromTypeDefinitionIndex(CriManaTrack_TypeDefinitionIndex)->GetStaticField(0x2A5A0);
		}
		::System::Boolean frameSync; // 0xB0
		::System::Boolean checkPosWithinClip; // 0xB1
		::System::Byte _padding0[0x2];
		::System::Guid guid; // 0xB4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANATRACK__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANATRACK__CCTOR_OFFSET))();
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go, ::System::Int32 inputCount)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANATRACK_CREATETRACKMIXER_OFFSET))(this, graph, go, inputCount);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANATRACK_ONDESTROY_OFFSET))(this);
		}

		static ::System::Void RemoveTrackFromBindDict(::CriWare::CriTimeline::Mana::CriManaTrack* trackAsset)
		{
			return ((::System::Void(*)(::CriWare::CriTimeline::Mana::CriManaTrack*))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANATRACK_REMOVETRACKFROMBINDDICT_OFFSET))(trackAsset);
		}
	};
}
