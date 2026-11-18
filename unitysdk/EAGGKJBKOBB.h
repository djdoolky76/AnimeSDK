#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }

#define EAGGKJBKOBB_BGHCCFKLHNO_OFFSET UNITYSDK_OFFSET(0x10F1A240)
#define EAGGKJBKOBB_FCCLAELCIGL_OFFSET UNITYSDK_OFFSET(0x10F1A1E0)
#define EAGGKJBKOBB_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x10F1A210)
#define EAGGKJBKOBB_HMFCFBCMFAK_OFFSET UNITYSDK_OFFSET(0x10F1A250)
#define EAGGKJBKOBB_LDPJGIAABAD_OFFSET UNITYSDK_OFFSET(0x10F1A1F0)
#define EAGGKJBKOBB_LMGCBKENOPJ_OFFSET UNITYSDK_OFFSET(0x10F1A200)
#define EAGGKJBKOBB_MOONNIIOGKP_OFFSET UNITYSDK_OFFSET(0x10F1A220)
#define EAGGKJBKOBB_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x10F197E0)
#define EAGGKJBKOBB_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x10F196A0)
#define EAGGKJBKOBB_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x10F196F0)
#define EAGGKJBKOBB_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x10F19740)
#define EAGGKJBKOBB_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x10F19790)
#define EAGGKJBKOBB_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x10F1A230)
#define EAGGKJBKOBB_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x10F19B10)
#define EAGGKJBKOBB__CTOR_OFFSET UNITYSDK_OFFSET(0x10F1A1D0)

inline static constexpr unsigned int EAGGKJBKOBB_TypeDefinitionIndex = 63780;

class EAGGKJBKOBB : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::System::Int32 _EDLOOCKNCLB_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAGGKJBKOBB__CTOR_OFFSET))(this);
	}

	::System::Void OnGraphStart(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + EAGGKJBKOBB_ONGRAPHSTART_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + EAGGKJBKOBB_ONGRAPHSTOP_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void OnPlayableCreate(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + EAGGKJBKOBB_ONPLAYABLECREATE_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + EAGGKJBKOBB_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + EAGGKJBKOBB_ONBEHAVIOURPLAY_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + EAGGKJBKOBB_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Int32 FCCLAELCIGL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAGGKJBKOBB_FCCLAELCIGL_OFFSET))(this);
	}

	::System::Void LDPJGIAABAD(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EAGGKJBKOBB_LDPJGIAABAD_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void LMGCBKENOPJ(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + EAGGKJBKOBB_LMGCBKENOPJ_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + EAGGKJBKOBB_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void MOONNIIOGKP(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + EAGGKJBKOBB_MOONNIIOGKP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + EAGGKJBKOBB_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void BGHCCFKLHNO(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + EAGGKJBKOBB_BGHCCFKLHNO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void HMFCFBCMFAK(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + EAGGKJBKOBB_HMFCFBCMFAK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
