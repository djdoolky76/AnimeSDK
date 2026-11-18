#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }

#define HFLMOHAFOHA_BGHCCFKLHNO_OFFSET UNITYSDK_OFFSET(0x15DA6290)
#define HFLMOHAFOHA_FCCLAELCIGL_OFFSET UNITYSDK_OFFSET(0x15DA6270)
#define HFLMOHAFOHA_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x15DA62D0)
#define HFLMOHAFOHA_HMFCFBCMFAK_OFFSET UNITYSDK_OFFSET(0x15DA6280)
#define HFLMOHAFOHA_LDPJGIAABAD_OFFSET UNITYSDK_OFFSET(0x15DA62C0)
#define HFLMOHAFOHA_LMGCBKENOPJ_OFFSET UNITYSDK_OFFSET(0x15DA62B0)
#define HFLMOHAFOHA_MOONNIIOGKP_OFFSET UNITYSDK_OFFSET(0x15DA62A0)
#define HFLMOHAFOHA_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x15DA57F0)
#define HFLMOHAFOHA_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x15DA56B0)
#define HFLMOHAFOHA_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x15DA5700)
#define HFLMOHAFOHA_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x15DA5750)
#define HFLMOHAFOHA_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x15DA57A0)
#define HFLMOHAFOHA_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x15DA62E0)
#define HFLMOHAFOHA_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x15DA5B20)
#define HFLMOHAFOHA__CTOR_OFFSET UNITYSDK_OFFSET(0x15DA6260)

inline static constexpr unsigned int HFLMOHAFOHA_TypeDefinitionIndex = 63896;

class HFLMOHAFOHA : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::System::Int32 _EDLOOCKNCLB_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFLMOHAFOHA__CTOR_OFFSET))(this);
	}

	::System::Void OnGraphStart(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + HFLMOHAFOHA_ONGRAPHSTART_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + HFLMOHAFOHA_ONGRAPHSTOP_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void OnPlayableCreate(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + HFLMOHAFOHA_ONPLAYABLECREATE_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + HFLMOHAFOHA_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + HFLMOHAFOHA_ONBEHAVIOURPLAY_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + HFLMOHAFOHA_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Int32 FCCLAELCIGL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFLMOHAFOHA_FCCLAELCIGL_OFFSET))(this);
	}

	::System::Void HMFCFBCMFAK(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + HFLMOHAFOHA_HMFCFBCMFAK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void BGHCCFKLHNO(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + HFLMOHAFOHA_BGHCCFKLHNO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void MOONNIIOGKP(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + HFLMOHAFOHA_MOONNIIOGKP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void LMGCBKENOPJ(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + HFLMOHAFOHA_LMGCBKENOPJ_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void LDPJGIAABAD(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HFLMOHAFOHA_LDPJGIAABAD_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + HFLMOHAFOHA_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + HFLMOHAFOHA_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}
};
