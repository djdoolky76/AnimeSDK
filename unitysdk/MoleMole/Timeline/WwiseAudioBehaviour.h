#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

class DFKCHDOOHEE_LIICPEFKGCA;
namespace MoleMole { class TimelineData; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace miHoYoEmotion { class EmoSync; }
namespace miHoYoEmotion { class SequenceClipBakeData; }

#define MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_ABOMOFCEGIK_OFFSET UNITYSDK_OFFSET(0x1C0E4AF0)
#define MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_EPMGEPKPHBL_OFFSET UNITYSDK_OFFSET(0x1C0E48F0)
#define MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_FDAFOGCEBJJ_OFFSET UNITYSDK_OFFSET(0x1C0E3400)
#define MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x1C0E4AC0)
#define MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_HMFCFBCMFAK_OFFSET UNITYSDK_OFFSET(0x1C0E4C50)
#define MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_JOAJINBDHJA_OFFSET UNITYSDK_OFFSET(0x1C0E4940)
#define MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_LGGHMOLHCHC_OFFSET UNITYSDK_OFFSET(0x1C0E46A0)
#define MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_LMGCBKENOPJ_OFFSET UNITYSDK_OFFSET(0x1C0E4AB0)
#define MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_MIDMHINHEGI_OFFSET UNITYSDK_OFFSET(0x1C0E4AE0)
#define MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_MOONNIIOGKP_OFFSET UNITYSDK_OFFSET(0x1C0E4AD0)
#define MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1C0E3860)
#define MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1C0E3370)
#define MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x1C0E2660)
#define MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x1C0E2E10)
#define MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1C0E4840)
#define MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_PCFBHCMPBHJ_OFFSET UNITYSDK_OFFSET(0x1C0E38F0)
#define MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x1C0E48E0)
#define MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1C0E3C90)
#define MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0E4890)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int WwiseAudioBehaviour_TypeDefinitionIndex = 76278;

	class WwiseAudioBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::String* soundName; // 0x10
		::System::String* whiteBoxAudioName; // 0x18
		::System::String* displayName; // 0x20
		::System::String* voKey; // 0x28
		::System::Boolean EmoSync; // 0x30
		::System::Byte _padding0[0x7];
		::miHoYoEmotion::EmoSync* emoSync; // 0x38
		::System::String* emoFacialKey; // 0x40
		::System::String* avatarShowingKey; // 0x48
		::System::String* emoPoseKey; // 0x50
		::UnityEngine::GameObject* followTarget; // 0x58
		::UnityEngine::GameObject* _audioEmitter; // 0x60
		::System::Boolean _isPaused; // 0x68
		::System::Byte _padding1[0x3];
		::System::UInt32 _audioPendingId; // 0x6C
		::System::UInt32 _audioPlayingId; // 0x70
		::System::Boolean _needPlay; // 0x74
		::System::Byte _padding2[0x3];
		::DFKCHDOOHEE_LIICPEFKGCA* _subtitleViewer; // 0x78
		::MoleMole::TimelineData* _data; // 0x80
		::miHoYoEmotion::SequenceClipBakeData* bakeData; // 0x88
		::Foundation::AssetRequestHandle handler; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_ONGRAPHSTART_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_ONGRAPHSTOP_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void EPMGEPKPHBL(::System::UInt32 GFOPLDDFDIA, ::System::UInt32 ELNEEALLBGO)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_EPMGEPKPHBL_OFFSET))(this, GFOPLDDFDIA, ELNEEALLBGO);
		}

		::System::Void JOAJINBDHJA(::System::UInt32 GFOPLDDFDIA, ::System::UInt32 ELNEEALLBGO)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_JOAJINBDHJA_OFFSET))(this, GFOPLDDFDIA, ELNEEALLBGO);
		}

		::System::Void LGGHMOLHCHC(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_LGGHMOLHCHC_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void LMGCBKENOPJ(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_LMGCBKENOPJ_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
		}

		::System::Void MOONNIIOGKP(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_MOONNIIOGKP_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void MIDMHINHEGI(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_MIDMHINHEGI_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void ABOMOFCEGIK(::System::UInt32 GFOPLDDFDIA)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_ABOMOFCEGIK_OFFSET))(this, GFOPLDDFDIA);
		}

		::System::Void HMFCFBCMFAK(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_HMFCFBCMFAK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void FDAFOGCEBJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_FDAFOGCEBJJ_OFFSET))(this);
		}

		::System::Void PCFBHCMPBHJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISEAUDIOBEHAVIOUR_PCFBHCMPBHJ_OFFSET))(this);
		}
	};
}
