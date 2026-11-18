#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"

namespace MoleMole { class MonoEffectPluginFollowCamera; }
namespace MoleMole::Timeline { class ZNetEffectPlayableAsset; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define PNJJJCLGHCC_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x1CB5A250)
#define PNJJJCLGHCC_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x1CB5A130)
#define PNJJJCLGHCC_HMFCFBCMFAK_OFFSET UNITYSDK_OFFSET(0x1CB5A140)
#define PNJJJCLGHCC_JMDEKPONKMF_OFFSET UNITYSDK_OFFSET(0x1CB5A150)
#define PNJJJCLGHCC_MIDMHINHEGI_OFFSET UNITYSDK_OFFSET(0x1CB5A240)
#define PNJJJCLGHCC_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1CB59950)
#define PNJJJCLGHCC_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1CB598D0)
#define PNJJJCLGHCC_PLIAFHDANCP_OFFSET UNITYSDK_OFFSET(0x1CB59BE0)
#define PNJJJCLGHCC_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1CB59B30)
#define PNJJJCLGHCC__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB5A120)

inline static constexpr unsigned int PNJJJCLGHCC_TypeDefinitionIndex = 62366;

class PNJJJCLGHCC : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::MoleMole::Timeline::ZNetEffectPlayableAsset* PJGHGMCBEFD; // 0x10
	::UnityEngine::GameObject* LJALNIDLDON; // 0x18
	::MoleMole::MonoEffectPluginFollowCamera* EBLNNNLEBFK; // 0x20
	::System::Single DHIFBNLCIEE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJJJCLGHCC__CTOR_OFFSET))(this);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + PNJJJCLGHCC_ONBEHAVIOURPLAY_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
	}

	::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + PNJJJCLGHCC_ONBEHAVIOURPAUSE_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData LJBPECKCCEA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + PNJJJCLGHCC_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, LJBPECKCCEA, NEEMKJBIIBC);
	}

	::System::Void PLIAFHDANCP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJJJCLGHCC_PLIAFHDANCP_OFFSET))(this);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + PNJJJCLGHCC_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void HMFCFBCMFAK(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + PNJJJCLGHCC_HMFCFBCMFAK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void JMDEKPONKMF(::UnityEngine::GameObject* JBFHKFGEKJJ, ::MoleMole::Timeline::ZNetEffectPlayableAsset* NGLKIKLLLFL)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::MoleMole::Timeline::ZNetEffectPlayableAsset*))((::PBYTE)hIl2Cpp + PNJJJCLGHCC_JMDEKPONKMF_OFFSET))(this, JBFHKFGEKJJ, NGLKIKLLLFL);
	}

	::System::Void MIDMHINHEGI(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + PNJJJCLGHCC_MIDMHINHEGI_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	static ::UnityEngine::Playables::ScriptPlayable_1<::PNJJJCLGHCC*> COKNIICCODC(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::GameObject* JBFHKFGEKJJ, ::MoleMole::Timeline::ZNetEffectPlayableAsset* NGLKIKLLLFL)
	{
		return ((::UnityEngine::Playables::ScriptPlayable_1<::PNJJJCLGHCC*>(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::MoleMole::Timeline::ZNetEffectPlayableAsset*))((::PBYTE)hIl2Cpp + PNJJJCLGHCC_COKNIICCODC_OFFSET))(MHPNGBGGMMN, JBFHKFGEKJJ, NGLKIKLLLFL);
	}
};
