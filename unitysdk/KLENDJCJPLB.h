#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"

namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class ParticleSystem; }

#define KLENDJCJPLB_AHMEKMICFOD_OFFSET UNITYSDK_OFFSET(0xD403320)
#define KLENDJCJPLB_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0xD4040B0)
#define KLENDJCJPLB_CPHOHIFODKE_OFFSET UNITYSDK_OFFSET(0xD403FA0)
#define KLENDJCJPLB_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0xD403FB0)
#define KLENDJCJPLB_JFHPOCCBPPO_OFFSET UNITYSDK_OFFSET(0xD403F80)
#define KLENDJCJPLB_KFLLIJFGEGF_OFFSET UNITYSDK_OFFSET(0xD403FD0)
#define KLENDJCJPLB_KJJCJMCNJNN_OFFSET UNITYSDK_OFFSET(0xD403F90)
#define KLENDJCJPLB_MOONNIIOGKP_OFFSET UNITYSDK_OFFSET(0xD4040A0)
#define KLENDJCJPLB_NPCIDIBIOLE_OFFSET UNITYSDK_OFFSET(0xD403FC0)
#define KLENDJCJPLB_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xD402FE0)
#define KLENDJCJPLB_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xD4034E0)
#define KLENDJCJPLB__CTOR_OFFSET UNITYSDK_OFFSET(0xD403F70)

inline static constexpr unsigned int KLENDJCJPLB_TypeDefinitionIndex = 50192;

class KLENDJCJPLB : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::UnityEngine::ParticleSystem* _KLGOLGGHHLB_k__BackingField; // 0x10
	::UnityEngine::Animation* _DEOOFFLJDOE_k__BackingField; // 0x18
	::System::Boolean GKANCCDKABD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLENDJCJPLB__CTOR_OFFSET))(this);
	}

	::System::Void OnGraphStart(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + KLENDJCJPLB_ONGRAPHSTART_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + KLENDJCJPLB_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void JFHPOCCBPPO(::UnityEngine::ParticleSystem* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + KLENDJCJPLB_JFHPOCCBPPO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void KJJCJMCNJNN(::UnityEngine::Animation* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*))((::PBYTE)hIl2Cpp + KLENDJCJPLB_KJJCJMCNJNN_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::Animation* CPHOHIFODKE()
	{
		return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLENDJCJPLB_CPHOHIFODKE_OFFSET))(this);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + KLENDJCJPLB_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::UnityEngine::ParticleSystem* NPCIDIBIOLE()
	{
		return ((::UnityEngine::ParticleSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLENDJCJPLB_NPCIDIBIOLE_OFFSET))(this);
	}

	::System::Void KFLLIJFGEGF(::System::Single FNIOPKPHDEH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KLENDJCJPLB_KFLLIJFGEGF_OFFSET))(this, FNIOPKPHDEH);
	}

	::System::Void AHMEKMICFOD(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + KLENDJCJPLB_AHMEKMICFOD_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void MOONNIIOGKP(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + KLENDJCJPLB_MOONNIIOGKP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::UnityEngine::Playables::ScriptPlayable_1<::KLENDJCJPLB*> COKNIICCODC(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::ParticleSystem* HNMLKGAINKL)
	{
		return ((::UnityEngine::Playables::ScriptPlayable_1<::KLENDJCJPLB*>(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + KLENDJCJPLB_COKNIICCODC_OFFSET))(MHPNGBGGMMN, HNMLKGAINKL);
	}
};
