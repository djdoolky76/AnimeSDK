#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class MonoTimelineTickProxy; }
namespace System { class Object; }

#define FOFFKBMJEII_BPLEKADHHGD_OFFSET UNITYSDK_OFFSET(0x15CB3B70)
#define FOFFKBMJEII_EPHLFECPKCH_OFFSET UNITYSDK_OFFSET(0x15CB3890)
#define FOFFKBMJEII_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x15CB3B60)
#define FOFFKBMJEII_HMFCFBCMFAK_OFFSET UNITYSDK_OFFSET(0x15CB3B50)
#define FOFFKBMJEII_MIDMHINHEGI_OFFSET UNITYSDK_OFFSET(0x15CB3B20)
#define FOFFKBMJEII_NDBDAMIIMAI_OFFSET UNITYSDK_OFFSET(0x15CB3B30)
#define FOFFKBMJEII_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x15CB32F0)
#define FOFFKBMJEII_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x15CB3270)
#define FOFFKBMJEII_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x15CB3370)
#define FOFFKBMJEII_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x15CB3B40)
#define FOFFKBMJEII_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x15CB3420)
#define FOFFKBMJEII__CTOR_OFFSET UNITYSDK_OFFSET(0x15CB3B10)

inline static constexpr unsigned int FOFFKBMJEII_TypeDefinitionIndex = 89207;

class FOFFKBMJEII : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::MoleMole::Timeline::MonoTimelineTickProxy* DKGEMJELJKG; // 0x10
	::System::Single _HDBIHCMFHDE_k__BackingField; // 0x18
	::System::Boolean JODFEIGBNMK; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOFFKBMJEII__CTOR_OFFSET))(this);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + FOFFKBMJEII_ONBEHAVIOURPLAY_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
	}

	::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + FOFFKBMJEII_ONBEHAVIOURPAUSE_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + FOFFKBMJEII_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + FOFFKBMJEII_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void MIDMHINHEGI(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + FOFFKBMJEII_MIDMHINHEGI_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Single NDBDAMIIMAI()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOFFKBMJEII_NDBDAMIIMAI_OFFSET))(this);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + FOFFKBMJEII_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void HMFCFBCMFAK(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + FOFFKBMJEII_HMFCFBCMFAK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::MoleMole::Timeline::MonoTimelineTickProxy* EPHLFECPKCH(::System::Object* NEEMKJBIIBC)
	{
		return ((::MoleMole::Timeline::MonoTimelineTickProxy*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOFFKBMJEII_EPHLFECPKCH_OFFSET))(this, NEEMKJBIIBC);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + FOFFKBMJEII_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void BPLEKADHHGD(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FOFFKBMJEII_BPLEKADHHGD_OFFSET))(this, EGEGIMGMJHN);
	}
};
