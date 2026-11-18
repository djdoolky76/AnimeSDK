#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace MoleMole::Timeline { class WwiseAudioBehaviour; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_WWISEAUDIOCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x19D00DC0)
#define MOLEMOLE_TIMELINE_WWISEAUDIOCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x19D00DB0)
#define MOLEMOLE_TIMELINE_WWISEAUDIOCLIP_GPGDFMIHALE_OFFSET UNITYSDK_OFFSET(0x19D01160)
#define MOLEMOLE_TIMELINE_WWISEAUDIOCLIP_KOPLHACOBFC_OFFSET UNITYSDK_OFFSET(0x19D01080)
#define MOLEMOLE_TIMELINE_WWISEAUDIOCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x19D011C0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int WwiseAudioClip_TypeDefinitionIndex = 90120;

	class WwiseAudioClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::MoleMole::Timeline::WwiseAudioBehaviour* template_; // 0x18
		::Il2CppArray<::System::Int32>* disableInVoiceLanguages; // 0x20
		::System::Boolean disableMale; // 0x28
		::System::Boolean disableFemale; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::GameObject* AMNIHACKELI)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOCLIP_CREATEPLAYABLE_OFFSET))(this, MHPNGBGGMMN, AMNIHACKELI);
		}

		::System::Boolean GPGDFMIHALE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOCLIP_GPGDFMIHALE_OFFSET))(this);
		}

		::System::Boolean KOPLHACOBFC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOCLIP_KOPLHACOBFC_OFFSET))(this);
		}
	};
}
