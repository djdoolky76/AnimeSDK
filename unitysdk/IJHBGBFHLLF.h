#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOAAKHNGJJI.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/MoleMole/UICameraAtom.h"

namespace MoleMole::Cameras { class VNoiseSettings; }
namespace MoleMole::Config { class ConfigCameraNoise; }
namespace UnityEngine { class AnimationCurve; }

#define IJHBGBFHLLF_PKAFJHDJEDO_OFFSET UNITYSDK_OFFSET(0x13AA7D50)
#define IJHBGBFHLLF__CTOR_OFFSET UNITYSDK_OFFSET(0x13AA7BF0)

inline static constexpr unsigned int IJHBGBFHLLF_TypeDefinitionIndex = 79993;

class IJHBGBFHLLF : public ::HOAAKHNGJJI
{
public:
	::MoleMole::Cameras::VNoiseSettings* GHMHLGOFPKC; // 0x20
	::MoleMole::Config::ConfigCameraNoise* GNKHGKMJPKG; // 0x28
	::UnityEngine::AnimationCurve* ADPEBPBODCO; // 0x30
	::System::Single HLKCKCFHPCG; // 0x38
	::System::Single KLHAKBEOBCP; // 0x3C
	::UnityEngine::Vector3 KDJFDAHKCKP; // 0x40
	::System::Single FKNOEGJOPCA; // 0x4C

	::System::Void _ctor(::MoleMole::Config::ConfigCameraNoise* MFLLPCNFICL, ::System::Single DPFHDMDHCAI, ::System::Single PPMJKIEICJA, ::UnityEngine::AnimationCurve* PMALCPJBGIG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraNoise*, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + IJHBGBFHLLF__CTOR_OFFSET))(this, MFLLPCNFICL, DPFHDMDHCAI, PPMJKIEICJA, PMALCPJBGIG);
	}

	::MoleMole::UICameraAtom PKAFJHDJEDO(::System::Single IMLLDOHDCNC, ::System::Single PBCAAADNEPK, ::MoleMole::UICameraAtom AIGOOKNCCNH)
	{
		return ((::MoleMole::UICameraAtom(*)(::PVOID, ::System::Single, ::System::Single, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + IJHBGBFHLLF_PKAFJHDJEDO_OFFSET))(this, IMLLDOHDCNC, PBCAAADNEPK, AIGOOKNCCNH);
	}
};
