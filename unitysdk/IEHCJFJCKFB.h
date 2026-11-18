#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class VisualEnvConfig; }
namespace System { class Object; }

#define IEHCJFJCKFB_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0xEBBE600)
#define IEHCJFJCKFB_HMFCFBCMFAK_OFFSET UNITYSDK_OFFSET(0xEBBE630)
#define IEHCJFJCKFB_LMGCBKENOPJ_OFFSET UNITYSDK_OFFSET(0xEBBE640)
#define IEHCJFJCKFB_MIDMHINHEGI_OFFSET UNITYSDK_OFFSET(0xEBBE610)
#define IEHCJFJCKFB_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xEBBD4D0)
#define IEHCJFJCKFB_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xEBBD450)
#define IEHCJFJCKFB_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xEBBD400)
#define IEHCJFJCKFB_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xEBBD560)
#define IEHCJFJCKFB_PALLNLODODO_OFFSET UNITYSDK_OFFSET(0xEBBE650)
#define IEHCJFJCKFB_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0xEBBE620)
#define IEHCJFJCKFB_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0xEBBD5D0)
#define IEHCJFJCKFB_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xEBBD650)
#define IEHCJFJCKFB__CTOR_OFFSET UNITYSDK_OFFSET(0xEBBE5F0)

inline static constexpr unsigned int IEHCJFJCKFB_TypeDefinitionIndex = 93238;

class IEHCJFJCKFB : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::MoleMole::Timeline::VisualEnvConfig* AMIBFAAOPMK; // 0x10
	::System::Boolean IAOJECCOMPN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEHCJFJCKFB__CTOR_OFFSET))(this);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + IEHCJFJCKFB_ONGRAPHSTOP_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + IEHCJFJCKFB_ONBEHAVIOURPLAY_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
	}

	::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + IEHCJFJCKFB_ONBEHAVIOURPAUSE_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + IEHCJFJCKFB_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void PrepareFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + IEHCJFJCKFB_PREPAREFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + IEHCJFJCKFB_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + IEHCJFJCKFB_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void MIDMHINHEGI(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + IEHCJFJCKFB_MIDMHINHEGI_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + IEHCJFJCKFB_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void HMFCFBCMFAK(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + IEHCJFJCKFB_HMFCFBCMFAK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void LMGCBKENOPJ(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + IEHCJFJCKFB_LMGCBKENOPJ_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void PALLNLODODO(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + IEHCJFJCKFB_PALLNLODODO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
