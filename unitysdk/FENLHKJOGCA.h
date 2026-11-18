#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"

namespace MoleMole::Timeline { class MihoyoControlPlayableAsset; }
namespace UnityEngine { class ParticleSystem; }

#define FENLHKJOGCA_BDIKIOFLPAI_OFFSET UNITYSDK_OFFSET(0x191B6060)
#define FENLHKJOGCA_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x191B61E0)
#define FENLHKJOGCA_HMFCFBCMFAK_OFFSET UNITYSDK_OFFSET(0x191B5FE0)
#define FENLHKJOGCA_JFHPOCCBPPO_OFFSET UNITYSDK_OFFSET(0x191B61D0)
#define FENLHKJOGCA_JMDEKPONKMF_OFFSET UNITYSDK_OFFSET(0x191B5FF0)
#define FENLHKJOGCA_MIDMHINHEGI_OFFSET UNITYSDK_OFFSET(0x191B64C0)
#define FENLHKJOGCA_NPCIDIBIOLE_OFFSET UNITYSDK_OFFSET(0x191B64D0)
#define FENLHKJOGCA_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x191B5F40)
#define FENLHKJOGCA_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x191B5EC0)
#define FENLHKJOGCA_PALLNLODODO_OFFSET UNITYSDK_OFFSET(0x191B5FD0)
#define FENLHKJOGCA_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x191B5700)
#define FENLHKJOGCA__CTOR_OFFSET UNITYSDK_OFFSET(0x191B5FC0)

inline static constexpr unsigned int FENLHKJOGCA_TypeDefinitionIndex = 78375;

class FENLHKJOGCA : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	// static const ::System::Single JLJKHPIEGKN; // 0x0
	::UnityEngine::ParticleSystem* _KLGOLGGHHLB_k__BackingField; // 0x10
	::System::UInt32 FDGNOKOKENN; // 0x18
	::System::Single DOEBGINNMJL; // 0x1C
	::System::Single BALEJLNFOME; // 0x20
	::System::Single ILGAAECJFBE; // 0x24
	::System::Single MOCAGENPHAJ; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FENLHKJOGCA__CTOR_OFFSET))(this);
	}

	::System::Void PrepareFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + FENLHKJOGCA_PREPAREFRAME_OFFSET))(this, HKOFGPMIFHB, LJBPECKCCEA);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + FENLHKJOGCA_ONBEHAVIOURPLAY_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
	}

	::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + FENLHKJOGCA_ONBEHAVIOURPAUSE_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
	}

	::System::Void PALLNLODODO(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + FENLHKJOGCA_PALLNLODODO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void HMFCFBCMFAK(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + FENLHKJOGCA_HMFCFBCMFAK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void JMDEKPONKMF(::UnityEngine::ParticleSystem* OMLGMJACMAB, ::System::UInt32 LOPMOALAPNE)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*, ::System::UInt32))((::PBYTE)hIl2Cpp + FENLHKJOGCA_JMDEKPONKMF_OFFSET))(this, OMLGMJACMAB, LOPMOALAPNE);
	}

	::System::Void JFHPOCCBPPO(::UnityEngine::ParticleSystem* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + FENLHKJOGCA_JFHPOCCBPPO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void BDIKIOFLPAI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FENLHKJOGCA_BDIKIOFLPAI_OFFSET))(this);
	}

	static ::UnityEngine::Playables::ScriptPlayable_1<::FENLHKJOGCA*> COKNIICCODC(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::ParticleSystem* GBELIHABEDH, ::System::UInt32 LOPMOALAPNE, ::MoleMole::Timeline::MihoyoControlPlayableAsset* NGLKIKLLLFL)
	{
		return ((::UnityEngine::Playables::ScriptPlayable_1<::FENLHKJOGCA*>(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::ParticleSystem*, ::System::UInt32, ::MoleMole::Timeline::MihoyoControlPlayableAsset*))((::PBYTE)hIl2Cpp + FENLHKJOGCA_COKNIICCODC_OFFSET))(MHPNGBGGMMN, GBELIHABEDH, LOPMOALAPNE, NGLKIKLLLFL);
	}

	::System::Void MIDMHINHEGI(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + FENLHKJOGCA_MIDMHINHEGI_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::UnityEngine::ParticleSystem* NPCIDIBIOLE()
	{
		return ((::UnityEngine::ParticleSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + FENLHKJOGCA_NPCIDIBIOLE_OFFSET))(this);
	}
};
