#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }

#define AOJLAKNCINM_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0xF77A6D0)
#define AOJLAKNCINM_LMGCBKENOPJ_OFFSET UNITYSDK_OFFSET(0xF77A6C0)
#define AOJLAKNCINM_MOONNIIOGKP_OFFSET UNITYSDK_OFFSET(0xF77A6E0)
#define AOJLAKNCINM_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xF77A610)
#define AOJLAKNCINM_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xF77A660)
#define AOJLAKNCINM_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xF77A580)
#define AOJLAKNCINM__CTOR_OFFSET UNITYSDK_OFFSET(0xF77A6B0)

inline static constexpr unsigned int AOJLAKNCINM_TypeDefinitionIndex = 71918;

class AOJLAKNCINM : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOJLAKNCINM__CTOR_OFFSET))(this);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + AOJLAKNCINM_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void OnGraphStart(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + AOJLAKNCINM_ONGRAPHSTART_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + AOJLAKNCINM_ONGRAPHSTOP_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void LMGCBKENOPJ(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + AOJLAKNCINM_LMGCBKENOPJ_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + AOJLAKNCINM_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void MOONNIIOGKP(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + AOJLAKNCINM_MOONNIIOGKP_OFFSET))(this, MIALFKCCCPI);
	}
};
