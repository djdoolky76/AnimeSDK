#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"

namespace MoleMole::Timeline { class ZNetEffectPlayableAsset; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define NCPMEOFOLCI_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x12FDE850)
#define NCPMEOFOLCI_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x12FDEB70)
#define NCPMEOFOLCI_JMDEKPONKMF_OFFSET UNITYSDK_OFFSET(0x12FDEB10)
#define NCPMEOFOLCI_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x12FDE4C0)
#define NCPMEOFOLCI__CTOR_OFFSET UNITYSDK_OFFSET(0x12FDE840)

inline static constexpr unsigned int NCPMEOFOLCI_TypeDefinitionIndex = 52591;

class NCPMEOFOLCI : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::UnityEngine::Transform* BMILPKLKGJN; // 0x10
	::MoleMole::Timeline::ZNetEffectPlayableAsset* PJGHGMCBEFD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPMEOFOLCI__CTOR_OFFSET))(this);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData LJBPECKCCEA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + NCPMEOFOLCI_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, LJBPECKCCEA, NEEMKJBIIBC);
	}

	static ::UnityEngine::Playables::ScriptPlayable_1<::NCPMEOFOLCI*> COKNIICCODC(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::Transform* LNEEMAGIHLB, ::MoleMole::Timeline::ZNetEffectPlayableAsset* NGLKIKLLLFL)
	{
		return ((::UnityEngine::Playables::ScriptPlayable_1<::NCPMEOFOLCI*>(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Transform*, ::MoleMole::Timeline::ZNetEffectPlayableAsset*))((::PBYTE)hIl2Cpp + NCPMEOFOLCI_COKNIICCODC_OFFSET))(MHPNGBGGMMN, LNEEMAGIHLB, NGLKIKLLLFL);
	}

	::System::Void JMDEKPONKMF(::UnityEngine::Transform* LNEEMAGIHLB, ::MoleMole::Timeline::ZNetEffectPlayableAsset* NGLKIKLLLFL)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::MoleMole::Timeline::ZNetEffectPlayableAsset*))((::PBYTE)hIl2Cpp + NCPMEOFOLCI_JMDEKPONKMF_OFFSET))(this, LNEEMAGIHLB, NGLKIKLLLFL);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + NCPMEOFOLCI_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}
};
