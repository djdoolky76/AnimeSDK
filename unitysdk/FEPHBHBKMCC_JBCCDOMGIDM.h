#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FEPHBHBKMCC_JBCCDOMGIDM_NHAKLNFGKKF_OFFSET UNITYSDK_OFFSET(0x14AC3F00)
#define FEPHBHBKMCC_JBCCDOMGIDM__CTOR_OFFSET UNITYSDK_OFFSET(0x14AC3EF0)

inline static constexpr unsigned int FEPHBHBKMCC_JBCCDOMGIDM_TypeDefinitionIndex = 86401;

class FEPHBHBKMCC_JBCCDOMGIDM : public ::System::Object
{
public:
	::UnityEngine::Vector3 PIALMKKDDGI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEPHBHBKMCC_JBCCDOMGIDM__CTOR_OFFSET))(this);
	}

	::System::Int32 NHAKLNFGKKF(::UnityEngine::Vector3 EJCBEJMGFAJ, ::UnityEngine::Vector3 EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FEPHBHBKMCC_JBCCDOMGIDM_NHAKLNFGKKF_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
