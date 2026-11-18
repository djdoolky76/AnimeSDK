#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR_DMOOPGDILEG_OFFSET UNITYSDK_OFFSET(0x13A0AF80)
#define MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR_GET_CANPLAYSUBTITLE_OFFSET UNITYSDK_OFFSET(0x13A0ABB0)
#define MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x13A0AF70)
#define MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR_HMFCFBCMFAK_OFFSET UNITYSDK_OFFSET(0x13A0AF60)
#define MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR_LMGCBKENOPJ_OFFSET UNITYSDK_OFFSET(0x13A0AF40)
#define MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR_MIDMHINHEGI_OFFSET UNITYSDK_OFFSET(0x13A0AFC0)
#define MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR_MOONNIIOGKP_OFFSET UNITYSDK_OFFSET(0x13A0AF50)
#define MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x13A0AD30)
#define MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x13A0ACA0)
#define MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x13A0AC00)
#define MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x13A0AC50)
#define MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x13A0AED0)
#define MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x13A0AF30)
#define MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x13A0ADC0)
#define MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x13A0AF20)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int DialogBehaviour_TypeDefinitionIndex = 84793;

	class DialogBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::String* subtitleKey; // 0x10
		::System::Single subtitleDelay; // 0x18
		::System::Boolean _needPlay; // 0x1C
		::System::Boolean _isPlaying; // 0x1D
		::System::Byte _padding0[0x2];
		::System::Single _currTimer; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Boolean get_canPlaySubtitle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR_GET_CANPLAYSUBTITLE_OFFSET))(this);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR_ONGRAPHSTART_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR_ONGRAPHSTOP_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void LMGCBKENOPJ(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR_LMGCBKENOPJ_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void MOONNIIOGKP(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR_MOONNIIOGKP_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void HMFCFBCMFAK(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR_HMFCFBCMFAK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
		}

		::System::Void DMOOPGDILEG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR_DMOOPGDILEG_OFFSET))(this);
		}

		::System::Void MIDMHINHEGI(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DIALOGBEHAVIOUR_MIDMHINHEGI_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}
	};
}
