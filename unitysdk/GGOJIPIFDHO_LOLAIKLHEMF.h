#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define GGOJIPIFDHO_LOLAIKLHEMF__CTOR_OFFSET UNITYSDK_OFFSET(0x7C6990)

inline static constexpr unsigned int GGOJIPIFDHO_LOLAIKLHEMF_TypeDefinitionIndex = 83234;

struct alignas(4) GGOJIPIFDHO_LOLAIKLHEMF
{
	::UnityEngine::Vector3 EIIDOADGOIF; // 0x10
	::UnityEngine::Vector3 JBCNPOHMGPE; // 0x1C
	::System::Boolean BBJNMOKPIGJ; // 0x28
	::System::Byte _padding0[0x3];
	::System::Single ECGAJMEKACM; // 0x2C
	::System::Single LAHLCKJOCHI; // 0x30
	::System::Single JDJPMJPFOLC; // 0x34

	::System::Void _ctor(::UnityEngine::Vector3 IAHFOFFPCJJ, ::UnityEngine::Vector3 HDBADDEFGMO, ::System::Single ECMOEENIHME, ::System::Single CBPDBAKPBDN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GGOJIPIFDHO_LOLAIKLHEMF__CTOR_OFFSET))(this, IAHFOFFPCJJ, HDBADDEFGMO, ECMOEENIHME, CBPDBAKPBDN);
	}
};
