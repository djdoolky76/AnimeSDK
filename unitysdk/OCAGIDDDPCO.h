#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace RootMotion::FinalIK { class AimIK; }
namespace RootMotion::FinalIK { class LookAtIK; }
namespace System { class Object; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define OCAGIDDDPCO_FPJPCJPOFCE_OFFSET UNITYSDK_OFFSET(0xE1400A0)
#define OCAGIDDDPCO_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0xE140570)
#define OCAGIDDDPCO_KEBBMBFBDBK_OFFSET UNITYSDK_OFFSET(0xE1402A0)
#define OCAGIDDDPCO_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xE140240)
#define OCAGIDDDPCO_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0xE140560)
#define OCAGIDDDPCO_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xE13F570)
#define OCAGIDDDPCO__CTOR_OFFSET UNITYSDK_OFFSET(0xE140550)

inline static constexpr unsigned int OCAGIDDDPCO_TypeDefinitionIndex = 41754;

class OCAGIDDDPCO : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::UnityEngine::Animator* FPGIEMNHLEF; // 0x10
	::RootMotion::FinalIK::LookAtIK* AEKBIKINDCA; // 0x18
	::UnityEngine::Transform* LFMFFDHELOA; // 0x20
	::UnityEngine::Transform* ELCEABOGHEK; // 0x28
	::RootMotion::FinalIK::AimIK* GNGBNIFDJBO; // 0x30
	::System::Boolean PIHOGAJNDKC; // 0x38
	::System::Boolean MLELEDDCGHF; // 0x39

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCAGIDDDPCO__CTOR_OFFSET))(this);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + OCAGIDDDPCO_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + OCAGIDDDPCO_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void FPJPCJPOFCE(::UnityEngine::Animator* ICAAMDMMDDJ)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + OCAGIDDDPCO_FPJPCJPOFCE_OFFSET))(this, ICAAMDMMDDJ);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + OCAGIDDDPCO_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + OCAGIDDDPCO_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void KEBBMBFBDBK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCAGIDDDPCO_KEBBMBFBDBK_OFFSET))(this);
	}
};
