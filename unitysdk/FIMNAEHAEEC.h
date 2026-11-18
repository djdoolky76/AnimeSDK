#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Timeline { class OverrideRadialBlurBehaviour; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class RadialBlur; }

#define FIMNAEHAEEC_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x140FF1B0)
#define FIMNAEHAEEC_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x140FF220)
#define FIMNAEHAEEC_HMFCFBCMFAK_OFFSET UNITYSDK_OFFSET(0x140FF200)
#define FIMNAEHAEEC_HNIHLBCIBCF_OFFSET UNITYSDK_OFFSET(0x140FDFF0)
#define FIMNAEHAEEC_LMGCBKENOPJ_OFFSET UNITYSDK_OFFSET(0x140FF510)
#define FIMNAEHAEEC_MKMGKPHIMLO_OFFSET UNITYSDK_OFFSET(0x140FF230)
#define FIMNAEHAEEC_MOONNIIOGKP_OFFSET UNITYSDK_OFFSET(0x140FF210)
#define FIMNAEHAEEC_NDPMIEBOCID_OFFSET UNITYSDK_OFFSET(0x140FE4D0)
#define FIMNAEHAEEC_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x140FEAA0)
#define FIMNAEHAEEC_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x140FEDE0)
#define FIMNAEHAEEC_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x140FD730)
#define FIMNAEHAEEC_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x140FD780)
#define FIMNAEHAEEC_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x140FF120)
#define FIMNAEHAEEC_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x140FF1A0)
#define FIMNAEHAEEC_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x140FD7D0)
#define FIMNAEHAEEC__CTOR_OFFSET UNITYSDK_OFFSET(0x140FF190)

inline static constexpr unsigned int FIMNAEHAEEC_TypeDefinitionIndex = 77819;

class FIMNAEHAEEC : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::UnityEngine::GameObject* IAPKABMDJNF; // 0x10
	::UnityEngine::Rendering::Universal::RadialBlur* PDDCMOCLMCL; // 0x18
	::UnityEngine::Rendering::Volume* EEAIBNJAFFH; // 0x20
	::System::Single HEOCKIJGIPF; // 0x28
	::System::Boolean BGEAAPDIKIG; // 0x2C
	::System::Boolean MHPABKFDIOI; // 0x2D
	::System::Boolean JODFEIGBNMK; // 0x2E
	::System::Boolean AJJANBOOGBB; // 0x2F
	::UnityEngine::Vector2 FBFEGMHKELH; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMNAEHAEEC__CTOR_OFFSET))(this);
	}

	::System::Void OnGraphStart(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + FIMNAEHAEEC_ONGRAPHSTART_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + FIMNAEHAEEC_ONGRAPHSTOP_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + FIMNAEHAEEC_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + FIMNAEHAEEC_ONBEHAVIOURPLAY_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + FIMNAEHAEEC_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void ODLBLHOKABA(::System::Boolean DECIDLELLCP, ::UnityEngine::Vector2 KAABMADJKPM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FIMNAEHAEEC_ODLBLHOKABA_OFFSET))(this, DECIDLELLCP, KAABMADJKPM);
	}

	::UnityEngine::Rendering::Universal::RadialBlur* HNIHLBCIBCF()
	{
		return ((::UnityEngine::Rendering::Universal::RadialBlur*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMNAEHAEEC_HNIHLBCIBCF_OFFSET))(this);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + FIMNAEHAEEC_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void BBOMJDBNHIC(::UnityEngine::GameObject* IAPKABMDJNF)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FIMNAEHAEEC_BBOMJDBNHIC_OFFSET))(this, IAPKABMDJNF);
	}

	::System::Void HMFCFBCMFAK(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + FIMNAEHAEEC_HMFCFBCMFAK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void MOONNIIOGKP(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + FIMNAEHAEEC_MOONNIIOGKP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + FIMNAEHAEEC_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::UnityEngine::Vector2 NDPMIEBOCID(::UnityEngine::Vector2 ECLFACHDOFB, ::MoleMole::Timeline::OverrideRadialBlurBehaviour* HLFFCMIFFIB)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::MoleMole::Timeline::OverrideRadialBlurBehaviour*))((::PBYTE)hIl2Cpp + FIMNAEHAEEC_NDPMIEBOCID_OFFSET))(this, ECLFACHDOFB, HLFFCMIFFIB);
	}

	::System::Void LMGCBKENOPJ(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + FIMNAEHAEEC_LMGCBKENOPJ_OFFSET))(this, MIALFKCCCPI);
	}

	::UnityEngine::Vector2 MKMGKPHIMLO(::UnityEngine::Vector2 ECLFACHDOFB, ::UnityEngine::Vector3 BAECLPHLLHO)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FIMNAEHAEEC_MKMGKPHIMLO_OFFSET))(this, ECLFACHDOFB, BAECLPHLLHO);
	}
};
