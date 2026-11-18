#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine::Rendering::Universal { class ChromaticAberration; }

#define CHROMATICABERRATIONPROXY_AWAKE_OFFSET UNITYSDK_OFFSET(0x1688F920)
#define CHROMATICABERRATIONPROXY_COPYVALUEFROM_OFFSET UNITYSDK_OFFSET(0x1688FCF0)
#define CHROMATICABERRATIONPROXY_SETVALUETO_OFFSET UNITYSDK_OFFSET(0x1688FED0)
#define CHROMATICABERRATIONPROXY_UPDATE_OFFSET UNITYSDK_OFFSET(0x1688FE80)
#define CHROMATICABERRATIONPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x16890060)

inline static constexpr unsigned int ChromaticAberrationProxy_TypeDefinitionIndex = 75223;

class ChromaticAberrationProxy : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Single intensity; // 0x18
	::System::Byte _padding0[0x4];
	::UnityEngine::Rendering::Universal::ChromaticAberration* _chromaticAberration; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHROMATICABERRATIONPROXY__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHROMATICABERRATIONPROXY_AWAKE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHROMATICABERRATIONPROXY_UPDATE_OFFSET))(this);
	}

	::System::Void CopyValueFrom()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHROMATICABERRATIONPROXY_COPYVALUEFROM_OFFSET))(this);
	}

	::System::Void SetValueTo()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHROMATICABERRATIONPROXY_SETVALUETO_OFFSET))(this);
	}
};
