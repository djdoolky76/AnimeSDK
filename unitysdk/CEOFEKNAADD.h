#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }

#define CEOFEKNAADD_AHMEKMICFOD_OFFSET UNITYSDK_OFFSET(0x128EA3D0)
#define CEOFEKNAADD_CDMBKDALIFI_OFFSET UNITYSDK_OFFSET(0x128EB8D0)
#define CEOFEKNAADD_CFHLLGMGBLC_OFFSET UNITYSDK_OFFSET(0x128EB010)
#define CEOFEKNAADD_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x128EB8B0)
#define CEOFEKNAADD_JFHPOCCBPPO_OFFSET UNITYSDK_OFFSET(0x128EB8E0)
#define CEOFEKNAADD_KFLLIJFGEGF_OFFSET UNITYSDK_OFFSET(0x128EB7D0)
#define CEOFEKNAADD_LKHBIKCONKN_OFFSET UNITYSDK_OFFSET(0x128EB8A0)
#define CEOFEKNAADD_MOONNIIOGKP_OFFSET UNITYSDK_OFFSET(0x128EB7C0)
#define CEOFEKNAADD_NPCIDIBIOLE_OFFSET UNITYSDK_OFFSET(0x128EB8C0)
#define CEOFEKNAADD_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x128EA090)
#define CEOFEKNAADD_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x128EA590)
#define CEOFEKNAADD__CTOR_OFFSET UNITYSDK_OFFSET(0x128EB7B0)

inline static constexpr unsigned int CEOFEKNAADD_TypeDefinitionIndex = 80184;

class CEOFEKNAADD : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::UnityEngine::Animation* _HIECOJAKDJP_k__BackingField; // 0x10
	::UnityEngine::Transform* PMEODDDPODF; // 0x18
	::UnityEngine::ParticleSystem* _KLGOLGGHHLB_k__BackingField; // 0x20
	::System::Boolean GKANCCDKABD; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOFEKNAADD__CTOR_OFFSET))(this);
	}

	::System::Void OnGraphStart(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CEOFEKNAADD_ONGRAPHSTART_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CEOFEKNAADD_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void MOONNIIOGKP(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CEOFEKNAADD_MOONNIIOGKP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void KFLLIJFGEGF(::System::Single FNIOPKPHDEH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CEOFEKNAADD_KFLLIJFGEGF_OFFSET))(this, FNIOPKPHDEH);
	}

	::System::Void CFHLLGMGBLC(::System::Single IGLAJGHAGNK, ::System::Single DPFGOMLIENK, ::System::Single BNNJPOCBAIP, ::System::Single DGCKHHBEOHB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CEOFEKNAADD_CFHLLGMGBLC_OFFSET))(this, IGLAJGHAGNK, DPFGOMLIENK, BNNJPOCBAIP, DGCKHHBEOHB);
	}

	::UnityEngine::Animation* LKHBIKCONKN()
	{
		return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOFEKNAADD_LKHBIKCONKN_OFFSET))(this);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CEOFEKNAADD_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::UnityEngine::ParticleSystem* NPCIDIBIOLE()
	{
		return ((::UnityEngine::ParticleSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOFEKNAADD_NPCIDIBIOLE_OFFSET))(this);
	}

	::System::Void AHMEKMICFOD(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CEOFEKNAADD_AHMEKMICFOD_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void CDMBKDALIFI(::UnityEngine::Animation* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*))((::PBYTE)hIl2Cpp + CEOFEKNAADD_CDMBKDALIFI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void JFHPOCCBPPO(::UnityEngine::ParticleSystem* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + CEOFEKNAADD_JFHPOCCBPPO_OFFSET))(this, EGEGIMGMJHN);
	}
};
