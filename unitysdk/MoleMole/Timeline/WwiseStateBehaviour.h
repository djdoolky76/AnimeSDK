#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_TIMELINE_WWISESTATEBEHAVIOUR_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x162FC0A0)
#define MOLEMOLE_TIMELINE_WWISESTATEBEHAVIOUR_HMFCFBCMFAK_OFFSET UNITYSDK_OFFSET(0x162FC090)
#define MOLEMOLE_TIMELINE_WWISESTATEBEHAVIOUR_LPFIECFFOOJ_OFFSET UNITYSDK_OFFSET(0x162FBE10)
#define MOLEMOLE_TIMELINE_WWISESTATEBEHAVIOUR_MOONNIIOGKP_OFFSET UNITYSDK_OFFSET(0x162FC0B0)
#define MOLEMOLE_TIMELINE_WWISESTATEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x162FBD80)
#define MOLEMOLE_TIMELINE_WWISESTATEBEHAVIOUR_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x162FBD30)
#define MOLEMOLE_TIMELINE_WWISESTATEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x162FBFD0)
#define MOLEMOLE_TIMELINE_WWISESTATEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x162FC080)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int WwiseStateBehaviour_TypeDefinitionIndex = 38903;

	class WwiseStateBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::String* stateGroup; // 0x10
		::System::String* state; // 0x18
		::System::Boolean _fired; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISESTATEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISESTATEBEHAVIOUR_ONGRAPHSTART_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISESTATEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISESTATEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
		}

		::System::Void HMFCFBCMFAK(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISESTATEBEHAVIOUR_HMFCFBCMFAK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void LPFIECFFOOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISESTATEBEHAVIOUR_LPFIECFFOOJ_OFFSET))(this);
		}

		::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISESTATEBEHAVIOUR_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
		}

		::System::Void MOONNIIOGKP(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISESTATEBEHAVIOUR_MOONNIIOGKP_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
