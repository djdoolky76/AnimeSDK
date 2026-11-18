#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }

#define KJKLEJDMDLA_BGHCCFKLHNO_OFFSET UNITYSDK_OFFSET(0x13C6B020)
#define KJKLEJDMDLA_FCCLAELCIGL_OFFSET UNITYSDK_OFFSET(0x13C6B000)
#define KJKLEJDMDLA_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x13C6B030)
#define KJKLEJDMDLA_HMFCFBCMFAK_OFFSET UNITYSDK_OFFSET(0x13C6B050)
#define KJKLEJDMDLA_LDPJGIAABAD_OFFSET UNITYSDK_OFFSET(0x13C6AFE0)
#define KJKLEJDMDLA_LMGCBKENOPJ_OFFSET UNITYSDK_OFFSET(0x13C6AFF0)
#define KJKLEJDMDLA_MOONNIIOGKP_OFFSET UNITYSDK_OFFSET(0x13C6B040)
#define KJKLEJDMDLA_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x13C6A5D0)
#define KJKLEJDMDLA_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x13C6A490)
#define KJKLEJDMDLA_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x13C6A4E0)
#define KJKLEJDMDLA_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x13C6A530)
#define KJKLEJDMDLA_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x13C6A580)
#define KJKLEJDMDLA_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x13C6B010)
#define KJKLEJDMDLA_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x13C6A900)
#define KJKLEJDMDLA__CTOR_OFFSET UNITYSDK_OFFSET(0x13C6AFD0)

inline static constexpr unsigned int KJKLEJDMDLA_TypeDefinitionIndex = 85771;

class KJKLEJDMDLA : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::System::Int32 _EDLOOCKNCLB_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJKLEJDMDLA__CTOR_OFFSET))(this);
	}

	::System::Void OnGraphStart(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + KJKLEJDMDLA_ONGRAPHSTART_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + KJKLEJDMDLA_ONGRAPHSTOP_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void OnPlayableCreate(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + KJKLEJDMDLA_ONPLAYABLECREATE_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + KJKLEJDMDLA_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + KJKLEJDMDLA_ONBEHAVIOURPLAY_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + KJKLEJDMDLA_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void LDPJGIAABAD(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KJKLEJDMDLA_LDPJGIAABAD_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void LMGCBKENOPJ(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + KJKLEJDMDLA_LMGCBKENOPJ_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Int32 FCCLAELCIGL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJKLEJDMDLA_FCCLAELCIGL_OFFSET))(this);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + KJKLEJDMDLA_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void BGHCCFKLHNO(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + KJKLEJDMDLA_BGHCCFKLHNO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + KJKLEJDMDLA_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void MOONNIIOGKP(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + KJKLEJDMDLA_MOONNIIOGKP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void HMFCFBCMFAK(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + KJKLEJDMDLA_HMFCFBCMFAK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
