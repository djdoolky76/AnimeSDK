#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DJCHCMEFPIF.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define ONHBDEOFMOM_INPBBJNBPHF_OFFSET UNITYSDK_OFFSET(0x15F85CA0)
#define ONHBDEOFMOM_MHHIIAPCKIE_OFFSET UNITYSDK_OFFSET(0x15F861B0)
#define ONHBDEOFMOM__CTOR_OFFSET UNITYSDK_OFFSET(0x15F85C90)

inline static constexpr unsigned int ONHBDEOFMOM_TypeDefinitionIndex = 59840;

class ONHBDEOFMOM : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONHBDEOFMOM__CTOR_OFFSET))(this);
	}

	static ::System::Boolean INPBBJNBPHF(::DJCHCMEFPIF PAPIGJMCFPF, ::UnityEngine::Vector3 GOAEFPGEJFA, ::UnityEngine::Vector3 BKNDKNABIBH, ::UnityEngine::Vector3& JHBACKOCFEF)
	{
		return ((::System::Boolean(*)(::DJCHCMEFPIF, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + ONHBDEOFMOM_INPBBJNBPHF_OFFSET))(PAPIGJMCFPF, GOAEFPGEJFA, BKNDKNABIBH, JHBACKOCFEF);
	}

	static ::System::Boolean MHHIIAPCKIE(::DJCHCMEFPIF PAPIGJMCFPF)
	{
		return ((::System::Boolean(*)(::DJCHCMEFPIF))((::PBYTE)hIl2Cpp + ONHBDEOFMOM_MHHIIAPCKIE_OFFSET))(PAPIGJMCFPF);
	}
};
