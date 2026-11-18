#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"

namespace System { class Object; }
namespace UnityEngine { class Animator; }

#define HHLILGDAAMK_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x16F38D70)
#define HHLILGDAAMK_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x16F38D60)
#define HHLILGDAAMK_JMDEKPONKMF_OFFSET UNITYSDK_OFFSET(0x16F38D10)
#define HHLILGDAAMK_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x16F389C0)
#define HHLILGDAAMK__CTOR_OFFSET UNITYSDK_OFFSET(0x16F38D00)

inline static constexpr unsigned int HHLILGDAAMK_TypeDefinitionIndex = 92736;

class HHLILGDAAMK : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::UnityEngine::Animator* LKGKJHKLJKM; // 0x10
	::System::Single CPAHJKALLLI; // 0x18
	::System::Single KOIHJGGKEGG; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHLILGDAAMK__CTOR_OFFSET))(this);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + HHLILGDAAMK_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void JMDEKPONKMF(::UnityEngine::Animator* ICAAMDMMDDJ)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + HHLILGDAAMK_JMDEKPONKMF_OFFSET))(this, ICAAMDMMDDJ);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + HHLILGDAAMK_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	static ::UnityEngine::Playables::ScriptPlayable_1<::HHLILGDAAMK*> COKNIICCODC(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::Animator* ICAAMDMMDDJ)
	{
		return ((::UnityEngine::Playables::ScriptPlayable_1<::HHLILGDAAMK*>(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + HHLILGDAAMK_COKNIICCODC_OFFSET))(MHPNGBGGMMN, ICAAMDMMDDJ);
	}
};
