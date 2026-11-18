#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline::AutoGenerateComps { class CompTimelineBaseConfig; }
namespace System { class Object; }

#define IHGAGNONFPF_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x141D86A0)
#define IHGAGNONFPF_HMFCFBCMFAK_OFFSET UNITYSDK_OFFSET(0x141D8690)
#define IHGAGNONFPF_LMGCBKENOPJ_OFFSET UNITYSDK_OFFSET(0x141D86C0)
#define IHGAGNONFPF_MIDMHINHEGI_OFFSET UNITYSDK_OFFSET(0x141D86D0)
#define IHGAGNONFPF_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x141D7CC0)
#define IHGAGNONFPF_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x141D7C40)
#define IHGAGNONFPF_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x141D7BF0)
#define IHGAGNONFPF_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x141D7D60)
#define IHGAGNONFPF_PALLNLODODO_OFFSET UNITYSDK_OFFSET(0x141D86B0)
#define IHGAGNONFPF_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x141D8680)
#define IHGAGNONFPF_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x141D7DD0)
#define IHGAGNONFPF_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x141D7E50)
#define IHGAGNONFPF__CTOR_OFFSET UNITYSDK_OFFSET(0x141D8670)

inline static constexpr unsigned int IHGAGNONFPF_TypeDefinitionIndex = 86128;

class IHGAGNONFPF : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* AMIBFAAOPMK; // 0x10
	::System::Boolean IAOJECCOMPN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHGAGNONFPF__CTOR_OFFSET))(this);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + IHGAGNONFPF_ONGRAPHSTOP_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + IHGAGNONFPF_ONBEHAVIOURPLAY_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
	}

	::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + IHGAGNONFPF_ONBEHAVIOURPAUSE_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + IHGAGNONFPF_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void PrepareFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + IHGAGNONFPF_PREPAREFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + IHGAGNONFPF_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + IHGAGNONFPF_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void HMFCFBCMFAK(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + IHGAGNONFPF_HMFCFBCMFAK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + IHGAGNONFPF_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void PALLNLODODO(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + IHGAGNONFPF_PALLNLODODO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void LMGCBKENOPJ(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + IHGAGNONFPF_LMGCBKENOPJ_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void MIDMHINHEGI(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + IHGAGNONFPF_MIDMHINHEGI_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
