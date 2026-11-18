#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace NPCCrowd::Lod { class NPCCrowdPositionAgent; }

#define MOLEMOLE_TIMELINE_RUNTIMEPRELOADBEHAVIOR_ELKOCNLDMDM_OFFSET UNITYSDK_OFFSET(0x15AE9900)
#define MOLEMOLE_TIMELINE_RUNTIMEPRELOADBEHAVIOR_HMFCFBCMFAK_OFFSET UNITYSDK_OFFSET(0x15AE98F0)
#define MOLEMOLE_TIMELINE_RUNTIMEPRELOADBEHAVIOR_MIDMHINHEGI_OFFSET UNITYSDK_OFFSET(0x15AE98D0)
#define MOLEMOLE_TIMELINE_RUNTIMEPRELOADBEHAVIOR_MNEKIMKHEON_OFFSET UNITYSDK_OFFSET(0x15AE9450)
#define MOLEMOLE_TIMELINE_RUNTIMEPRELOADBEHAVIOR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x15AE9630)
#define MOLEMOLE_TIMELINE_RUNTIMEPRELOADBEHAVIOR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x15AE9530)
#define MOLEMOLE_TIMELINE_RUNTIMEPRELOADBEHAVIOR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x15AE9790)
#define MOLEMOLE_TIMELINE_RUNTIMEPRELOADBEHAVIOR_PALLNLODODO_OFFSET UNITYSDK_OFFSET(0x15AE98C0)
#define MOLEMOLE_TIMELINE_RUNTIMEPRELOADBEHAVIOR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x15AE98E0)
#define MOLEMOLE_TIMELINE_RUNTIMEPRELOADBEHAVIOR_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x15AE93C0)
#define MOLEMOLE_TIMELINE_RUNTIMEPRELOADBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x15AE98B0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int RuntimePreLoadBehavior_TypeDefinitionIndex = 80310;

	class RuntimePreLoadBehavior : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::UnityEngine::Vector3 preLodPos; // 0x10
		::System::Byte _padding0[0x4];
		::NPCCrowd::Lod::NPCCrowdPositionAgent* posAgent; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEPRELOADBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void PrepareFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEPRELOADBEHAVIOR_PREPAREFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEPRELOADBEHAVIOR_ONBEHAVIOURPLAY_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEPRELOADBEHAVIOR_ONBEHAVIOURPAUSE_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEPRELOADBEHAVIOR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void MNEKIMKHEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEPRELOADBEHAVIOR_MNEKIMKHEON_OFFSET))(this);
		}

		::System::Void PALLNLODODO(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEPRELOADBEHAVIOR_PALLNLODODO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void MIDMHINHEGI(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEPRELOADBEHAVIOR_MIDMHINHEGI_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEPRELOADBEHAVIOR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void HMFCFBCMFAK(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEPRELOADBEHAVIOR_HMFCFBCMFAK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void ELKOCNLDMDM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEPRELOADBEHAVIOR_ELKOCNLDMDM_OFFSET))(this);
		}
	};
}
