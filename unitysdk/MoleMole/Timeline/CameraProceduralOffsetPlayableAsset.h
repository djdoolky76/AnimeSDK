#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/CameraProceduralAxisSettings.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_CAMERAPROCEDURALOFFSETPLAYABLEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x13F16160)
#define MOLEMOLE_TIMELINE_CAMERAPROCEDURALOFFSETPLAYABLEASSET_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x13F16150)
#define MOLEMOLE_TIMELINE_CAMERAPROCEDURALOFFSETPLAYABLEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x13F163C0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int CameraProceduralOffsetPlayableAsset_TypeDefinitionIndex = 77091;

	class CameraProceduralOffsetPlayableAsset : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::MoleMole::Timeline::CameraProceduralAxisSettings X; // 0x18
		::MoleMole::Timeline::CameraProceduralAxisSettings Y; // 0x48
		::MoleMole::Timeline::CameraProceduralAxisSettings Z; // 0x78
		::System::Int32 Seed; // 0xA8
		::System::Single Irregularity; // 0xAC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMERAPROCEDURALOFFSETPLAYABLEASSET__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMERAPROCEDURALOFFSETPLAYABLEASSET_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::GameObject* AMNIHACKELI)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMERAPROCEDURALOFFSETPLAYABLEASSET_CREATEPLAYABLE_OFFSET))(this, MHPNGBGGMMN, AMNIHACKELI);
		}
	};
}
