#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class CinemachineProceduralOffset; }
namespace System { class Object; }

#define KABENBJJFHE_ALBNGDHAPEC_OFFSET UNITYSDK_OFFSET(0x15B779D0)
#define KABENBJJFHE_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x15B77D30)
#define KABENBJJFHE_LMGCBKENOPJ_OFFSET UNITYSDK_OFFSET(0x15B77D20)
#define KABENBJJFHE_MIDMHINHEGI_OFFSET UNITYSDK_OFFSET(0x15B77D50)
#define KABENBJJFHE_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x15B77BC0)
#define KABENBJJFHE_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x15B77C50)
#define KABENBJJFHE_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x15B77CB0)
#define KABENBJJFHE_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x15B77D40)
#define KABENBJJFHE_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x15B773A0)
#define KABENBJJFHE__CTOR_OFFSET UNITYSDK_OFFSET(0x15B77D10)

inline static constexpr unsigned int KABENBJJFHE_TypeDefinitionIndex = 86607;

class KABENBJJFHE : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::MoleMole::Timeline::CinemachineProceduralOffset* EOMLMGMCJGE; // 0x10
	::System::Boolean EAGNGNBJFNB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KABENBJJFHE__CTOR_OFFSET))(this);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + KABENBJJFHE_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + KABENBJJFHE_ONBEHAVIOURPAUSE_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + KABENBJJFHE_ONGRAPHSTOP_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + KABENBJJFHE_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void LMGCBKENOPJ(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + KABENBJJFHE_LMGCBKENOPJ_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + KABENBJJFHE_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + KABENBJJFHE_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void ALBNGDHAPEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KABENBJJFHE_ALBNGDHAPEC_OFFSET))(this);
	}

	::System::Void MIDMHINHEGI(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + KABENBJJFHE_MIDMHINHEGI_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
