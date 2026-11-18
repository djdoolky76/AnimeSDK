#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class URPSetting; }

#define MOLEMOLE_TIMELINE_URPBEHAVIOR_HMFCFBCMFAK_OFFSET UNITYSDK_OFFSET(0x13F29E60)
#define MOLEMOLE_TIMELINE_URPBEHAVIOR_MIDMHINHEGI_OFFSET UNITYSDK_OFFSET(0x13F29E70)
#define MOLEMOLE_TIMELINE_URPBEHAVIOR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x13F29D10)
#define MOLEMOLE_TIMELINE_URPBEHAVIOR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x13F29B80)
#define MOLEMOLE_TIMELINE_URPBEHAVIOR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x13F29DB0)
#define MOLEMOLE_TIMELINE_URPBEHAVIOR_PALLNLODODO_OFFSET UNITYSDK_OFFSET(0x13F29E90)
#define MOLEMOLE_TIMELINE_URPBEHAVIOR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x13F29E80)
#define MOLEMOLE_TIMELINE_URPBEHAVIOR_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x13F29C70)
#define MOLEMOLE_TIMELINE_URPBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x13F29E20)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int URPBehavior_TypeDefinitionIndex = 54212;

	class URPBehavior : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::MoleMole::Timeline::URPSetting* setting; // 0x10
		::System::Boolean hasPrevSetting; // 0x18
		::System::Byte _padding0[0x7];
		::MoleMole::Timeline::URPSetting* prevSetting; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_URPBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_URPBEHAVIOR_ONBEHAVIOURPLAY_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
		}

		::System::Void PrepareFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_URPBEHAVIOR_PREPAREFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_URPBEHAVIOR_ONBEHAVIOURPAUSE_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_URPBEHAVIOR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void HMFCFBCMFAK(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_URPBEHAVIOR_HMFCFBCMFAK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void MIDMHINHEGI(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_URPBEHAVIOR_MIDMHINHEGI_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_URPBEHAVIOR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void PALLNLODODO(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_URPBEHAVIOR_PALLNLODODO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}
	};
}
