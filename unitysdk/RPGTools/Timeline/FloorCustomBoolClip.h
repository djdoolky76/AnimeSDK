#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
namespace RPGTools::Timeline { class FCVSimulationParam; }
namespace RPGTools::Timeline { class FloorCustomBoolClip; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_FLOORCUSTOMBOOLCLIP_AEFNNMLANNA_OFFSET UNITYSDK_OFFSET(0xE8FB090)
#define RPGTOOLS_TIMELINE_FLOORCUSTOMBOOLCLIP_CCKGKFBCHAM_OFFSET UNITYSDK_OFFSET(0xE8FB3E0)
#define RPGTOOLS_TIMELINE_FLOORCUSTOMBOOLCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE8FB250)
#define RPGTOOLS_TIMELINE_FLOORCUSTOMBOOLCLIP_CTOR_OFFSET UNITYSDK_OFFSET(0xE8FB440)
#define RPGTOOLS_TIMELINE_FLOORCUSTOMBOOLCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xE8FB240)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int FloorCustomBoolClip_TypeDefinitionIndex = 48124;

	class FloorCustomBoolClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* Name; // 0x18
		::System::Boolean Value; // 0x20
		::System::Boolean RecoverWhenUnLock; // 0x21
		::System::Byte _padding0[0x6];
		::RPGTools::Timeline::FCVSimulationParam* Param; // 0x28
		::System::String* FCVSimulationValue; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_FLOORCUSTOMBOOLCLIP_CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_FLOORCUSTOMBOOLCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_FLOORCUSTOMBOOLCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::System::Void CCKGKFBCHAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_FLOORCUSTOMBOOLCLIP_CCKGKFBCHAM_OFFSET))(this);
		}

		::System::Void AEFNNMLANNA(::RPGTools::Timeline::FloorCustomBoolClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::FloorCustomBoolClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_FLOORCUSTOMBOOLCLIP_AEFNNMLANNA_OFFSET))(this, a1);
		}

	};
}
