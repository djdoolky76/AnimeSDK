#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
namespace RPGTools::Timeline { class FCVSimulationParam; }
namespace RPGTools::Timeline { class FloorCustomFloatClip; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_FLOORCUSTOMFLOATCLIP_AEFNNMLANNA_OFFSET UNITYSDK_OFFSET(0xE8F1170)
#define RPGTOOLS_TIMELINE_FLOORCUSTOMFLOATCLIP_CCKGKFBCHAM_OFFSET UNITYSDK_OFFSET(0xE8F1550)
#define RPGTOOLS_TIMELINE_FLOORCUSTOMFLOATCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE8F13F0)
#define RPGTOOLS_TIMELINE_FLOORCUSTOMFLOATCLIP_CTOR_OFFSET UNITYSDK_OFFSET(0xE8F15B0)
#define RPGTOOLS_TIMELINE_FLOORCUSTOMFLOATCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xE8F13E0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int FloorCustomFloatClip_TypeDefinitionIndex = 48126;

	class FloorCustomFloatClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* Name; // 0x18
		::System::Single Value; // 0x20
		::System::Boolean RecoverWhenUnLock; // 0x24
		::System::Byte _padding0[0x3];
		::RPGTools::Timeline::FCVSimulationParam* Param; // 0x28
		::System::String* FCVSimulationValue; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_FLOORCUSTOMFLOATCLIP_CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_FLOORCUSTOMFLOATCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_FLOORCUSTOMFLOATCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::System::Void CCKGKFBCHAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_FLOORCUSTOMFLOATCLIP_CCKGKFBCHAM_OFFSET))(this);
		}

		::System::Void AEFNNMLANNA(::RPGTools::Timeline::FloorCustomFloatClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::FloorCustomFloatClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_FLOORCUSTOMFLOATCLIP_AEFNNMLANNA_OFFSET))(this, a1);
		}

	};
}
