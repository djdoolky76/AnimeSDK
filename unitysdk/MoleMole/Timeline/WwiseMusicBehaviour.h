#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class String; }

#define MOLEMOLE_TIMELINE_WWISEMUSICBEHAVIOUR_HMFCFBCMFAK_OFFSET UNITYSDK_OFFSET(0x162FBD10)
#define MOLEMOLE_TIMELINE_WWISEMUSICBEHAVIOUR_MOONNIIOGKP_OFFSET UNITYSDK_OFFSET(0x162FBD20)
#define MOLEMOLE_TIMELINE_WWISEMUSICBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x162FBA80)
#define MOLEMOLE_TIMELINE_WWISEMUSICBEHAVIOUR_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x162FBA30)
#define MOLEMOLE_TIMELINE_WWISEMUSICBEHAVIOUR_OOAHGAEBCJH_OFFSET UNITYSDK_OFFSET(0x162FBB10)
#define MOLEMOLE_TIMELINE_WWISEMUSICBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x162FBD00)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int WwiseMusicBehaviour_TypeDefinitionIndex = 40211;

	class WwiseMusicBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::String* customParam; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEMUSICBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEMUSICBEHAVIOUR_ONGRAPHSTART_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEMUSICBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
		}

		::System::Void HMFCFBCMFAK(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEMUSICBEHAVIOUR_HMFCFBCMFAK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void OOAHGAEBCJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEMUSICBEHAVIOUR_OOAHGAEBCJH_OFFSET))(this);
		}

		::System::Void MOONNIIOGKP(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEMUSICBEHAVIOUR_MOONNIIOGKP_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
