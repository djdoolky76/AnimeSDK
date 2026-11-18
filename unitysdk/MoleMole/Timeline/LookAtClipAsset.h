#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_LOOKATCLIPASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x162F8D50)
#define MOLEMOLE_TIMELINE_LOOKATCLIPASSET_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x162F8B80)
#define MOLEMOLE_TIMELINE_LOOKATCLIPASSET_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x162F8B90)
#define MOLEMOLE_TIMELINE_LOOKATCLIPASSET_NKGMOOCIJOH_OFFSET UNITYSDK_OFFSET(0x162F8F20)
#define MOLEMOLE_TIMELINE_LOOKATCLIPASSET_UNITYENGINE_TIMELINE_IRECORDABLECLIPASSET_GET_RECORDEDCLIP_OFFSET UNITYSDK_OFFSET(0x162F8B40)
#define MOLEMOLE_TIMELINE_LOOKATCLIPASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x162F8EC0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int LookAtClipAsset_TypeDefinitionIndex = 92280;

	class LookAtClipAsset : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::UnityEngine::AnimationClip* recordedClip; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATCLIPASSET__CTOR_OFFSET))(this);
		}

		::UnityEngine::AnimationClip* UnityEngine_Timeline_IRecordableClipAsset_get_recordedClip()
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATCLIPASSET_UNITYENGINE_TIMELINE_IRECORDABLECLIPASSET_GET_RECORDEDCLIP_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATCLIPASSET_GET_CLIPCAPS_OFFSET))(this);
		}

		::System::Double get_duration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATCLIPASSET_GET_DURATION_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::GameObject* AMNIHACKELI)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATCLIPASSET_CREATEPLAYABLE_OFFSET))(this, MHPNGBGGMMN, AMNIHACKELI);
		}

		::System::Double NKGMOOCIJOH()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LOOKATCLIPASSET_NKGMOOCIJOH_OFFSET))(this);
		}
	};
}
