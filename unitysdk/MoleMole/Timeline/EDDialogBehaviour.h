#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_TIMELINE_EDDIALOGBEHAVIOUR_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x1A726D90)
#define MOLEMOLE_TIMELINE_EDDIALOGBEHAVIOUR_HMFCFBCMFAK_OFFSET UNITYSDK_OFFSET(0x1A726DA0)
#define MOLEMOLE_TIMELINE_EDDIALOGBEHAVIOUR_LMGCBKENOPJ_OFFSET UNITYSDK_OFFSET(0x1A726D70)
#define MOLEMOLE_TIMELINE_EDDIALOGBEHAVIOUR_MIDMHINHEGI_OFFSET UNITYSDK_OFFSET(0x1A726DB0)
#define MOLEMOLE_TIMELINE_EDDIALOGBEHAVIOUR_MOONNIIOGKP_OFFSET UNITYSDK_OFFSET(0x1A726DC0)
#define MOLEMOLE_TIMELINE_EDDIALOGBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1A726C00)
#define MOLEMOLE_TIMELINE_EDDIALOGBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1A726B80)
#define MOLEMOLE_TIMELINE_EDDIALOGBEHAVIOUR_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x1A726AE0)
#define MOLEMOLE_TIMELINE_EDDIALOGBEHAVIOUR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x1A726B30)
#define MOLEMOLE_TIMELINE_EDDIALOGBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1A726D10)
#define MOLEMOLE_TIMELINE_EDDIALOGBEHAVIOUR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x1A726D80)
#define MOLEMOLE_TIMELINE_EDDIALOGBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1A726C80)
#define MOLEMOLE_TIMELINE_EDDIALOGBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A726D60)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int EDDialogBehaviour_TypeDefinitionIndex = 56220;

	class EDDialogBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::String* leftTopTextKey; // 0x10
		::System::String* bottomSubtitleKey; // 0x18
		::System::String* middleTextKey; // 0x20
		::Il2CppArray<::System::String*>* leftTextKeys; // 0x28
		::System::String* middleTopTextKey; // 0x30
		::System::Int32 languageType; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDDIALOGBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDDIALOGBEHAVIOUR_ONGRAPHSTART_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDDIALOGBEHAVIOUR_ONGRAPHSTOP_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDDIALOGBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDDIALOGBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDDIALOGBEHAVIOUR_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDDIALOGBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void LMGCBKENOPJ(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDDIALOGBEHAVIOUR_LMGCBKENOPJ_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDDIALOGBEHAVIOUR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDDIALOGBEHAVIOUR_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
		}

		::System::Void HMFCFBCMFAK(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDDIALOGBEHAVIOUR_HMFCFBCMFAK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void MIDMHINHEGI(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDDIALOGBEHAVIOUR_MIDMHINHEGI_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void MOONNIIOGKP(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EDDIALOGBEHAVIOUR_MOONNIIOGKP_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
