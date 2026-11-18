#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"

namespace UnityEngine { class Animation; }

#define BLIKLFHHBHG_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x1692BA40)
#define BLIKLFHHBHG_HMFCFBCMFAK_OFFSET UNITYSDK_OFFSET(0x1692BA20)
#define BLIKLFHHBHG_JMDEKPONKMF_OFFSET UNITYSDK_OFFSET(0x1692BCF0)
#define BLIKLFHHBHG_MIDMHINHEGI_OFFSET UNITYSDK_OFFSET(0x1692BD40)
#define BLIKLFHHBHG_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1692B990)
#define BLIKLFHHBHG_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1692B910)
#define BLIKLFHHBHG_PALLNLODODO_OFFSET UNITYSDK_OFFSET(0x1692BA30)
#define BLIKLFHHBHG_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x1692B5E0)
#define BLIKLFHHBHG__CTOR_OFFSET UNITYSDK_OFFSET(0x1692BA10)

inline static constexpr unsigned int BLIKLFHHBHG_TypeDefinitionIndex = 48545;

class BLIKLFHHBHG : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	// static const ::System::Single JLJKHPIEGKN; // 0x0
	::UnityEngine::Animation* AOKJEGNBALI; // 0x10
	::System::Single MOCAGENPHAJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLIKLFHHBHG__CTOR_OFFSET))(this);
	}

	::System::Void PrepareFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + BLIKLFHHBHG_PREPAREFRAME_OFFSET))(this, HKOFGPMIFHB, LJBPECKCCEA);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + BLIKLFHHBHG_ONBEHAVIOURPLAY_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
	}

	::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + BLIKLFHHBHG_ONBEHAVIOURPAUSE_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
	}

	::System::Void HMFCFBCMFAK(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + BLIKLFHHBHG_HMFCFBCMFAK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void PALLNLODODO(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + BLIKLFHHBHG_PALLNLODODO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	static ::UnityEngine::Playables::ScriptPlayable_1<::BLIKLFHHBHG*> COKNIICCODC(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::Animation* AOKJEGNBALI)
	{
		return ((::UnityEngine::Playables::ScriptPlayable_1<::BLIKLFHHBHG*>(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animation*))((::PBYTE)hIl2Cpp + BLIKLFHHBHG_COKNIICCODC_OFFSET))(MHPNGBGGMMN, AOKJEGNBALI);
	}

	::System::Void JMDEKPONKMF(::UnityEngine::Animation* AOKJEGNBALI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*))((::PBYTE)hIl2Cpp + BLIKLFHHBHG_JMDEKPONKMF_OFFSET))(this, AOKJEGNBALI);
	}

	::System::Void MIDMHINHEGI(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + BLIKLFHHBHG_MIDMHINHEGI_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
