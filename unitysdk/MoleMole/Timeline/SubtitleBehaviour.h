#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

class AFMGFPCAPIE_MOKCAEPFFCP;
namespace System { class String; }

#define MOLEMOLE_TIMELINE_SUBTITLEBEHAVIOUR_HMFCFBCMFAK_OFFSET UNITYSDK_OFFSET(0x14BD6FA0)
#define MOLEMOLE_TIMELINE_SUBTITLEBEHAVIOUR_KOPLHACOBFC_OFFSET UNITYSDK_OFFSET(0x14BD6C20)
#define MOLEMOLE_TIMELINE_SUBTITLEBEHAVIOUR_MIDMHINHEGI_OFFSET UNITYSDK_OFFSET(0x14BD6F90)
#define MOLEMOLE_TIMELINE_SUBTITLEBEHAVIOUR_MOONNIIOGKP_OFFSET UNITYSDK_OFFSET(0x14BD6F80)
#define MOLEMOLE_TIMELINE_SUBTITLEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x14BD6E20)
#define MOLEMOLE_TIMELINE_SUBTITLEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x14BD6CC0)
#define MOLEMOLE_TIMELINE_SUBTITLEBEHAVIOUR_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x14BD6AF0)
#define MOLEMOLE_TIMELINE_SUBTITLEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x14BD6F70)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int SubtitleBehaviour_TypeDefinitionIndex = 84964;

	class SubtitleBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::String* textKey; // 0x10
		::System::Int32 languageType; // 0x18
		::System::Int32 subtitlePos; // 0x1C
		::AFMGFPCAPIE_MOKCAEPFFCP* _subtitleViewer; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SUBTITLEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SUBTITLEBEHAVIOUR_ONGRAPHSTART_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SUBTITLEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SUBTITLEBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
		}

		::System::Void MOONNIIOGKP(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SUBTITLEBEHAVIOUR_MOONNIIOGKP_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void MIDMHINHEGI(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SUBTITLEBEHAVIOUR_MIDMHINHEGI_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void HMFCFBCMFAK(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SUBTITLEBEHAVIOUR_HMFCFBCMFAK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Boolean KOPLHACOBFC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SUBTITLEBEHAVIOUR_KOPLHACOBFC_OFFSET))(this);
		}
	};
}
