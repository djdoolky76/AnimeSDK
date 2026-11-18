#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::EffectSimulate { class IEffectSimulate; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class Volume; }

#define MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x19CF5BA0)
#define MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_GET_SCALECURVEWHENCLIPTIMECHANGEINFOMSG_OFFSET UNITYSDK_OFFSET(0x19CF5A80)
#define MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x19CF6670)
#define MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_HMFCFBCMFAK_OFFSET UNITYSDK_OFFSET(0x19CF6680)
#define MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_MIDMHINHEGI_OFFSET UNITYSDK_OFFSET(0x19CF6660)
#define MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x19CF5DB0)
#define MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x19CF5B00)
#define MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x19CF5F70)
#define MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x19CF65E0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MihoyoPostProcessBehavior_TypeDefinitionIndex = 54015;

	class MihoyoPostProcessBehavior : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Boolean scaleCurveWhenClipTimeChange; // 0x10
		::System::Boolean endNotClear; // 0x11
		::System::Byte _padding0[0x2];
		::System::Single fadeInDuration; // 0x14
		::System::Single fadeOutDuration; // 0x18
		::System::Byte _padding1[0x4];
		::System::Collections::Generic::List_1<::MoleMole::EffectSimulate::IEffectSimulate*>* ESList; // 0x20
		::UnityEngine::Rendering::Volume* m_stVolume; // 0x28
		::System::Double m_dClipIn; // 0x30
		::System::Double m_dDuration; // 0x38
		::System::Single m_fNormalDuration; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::String* get_ScaleCurveWhenClipTimeChangeInfoMsg()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_GET_SCALECURVEWHENCLIPTIMECHANGEINFOMSG_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_ONBEHAVIOURPLAY_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_ONBEHAVIOURPAUSE_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
		}

		::System::Void MIDMHINHEGI(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_MIDMHINHEGI_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
		}

		::System::Void HMFCFBCMFAK(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_HMFCFBCMFAK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void BBOMJDBNHIC(::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::System::Double LFHAFHLKKAK, ::System::Double MDPPNMIPDMP)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOPOSTPROCESSBEHAVIOR_BBOMJDBNHIC_OFFSET))(this, PHLFMCCNEGD, LFHAFHLKKAK, MDPPNMIPDMP);
		}
	};
}
