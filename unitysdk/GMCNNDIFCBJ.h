#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GKABEIIGAHC.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define GMCNNDIFCBJ_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x748910)

inline static constexpr unsigned int GMCNNDIFCBJ_TypeDefinitionIndex = 51576;

struct alignas(4) GMCNNDIFCBJ
{
	::GKABEIIGAHC OCOJFKMOKMK; // 0x10
	::System::Single LJHLEHEBDCI; // 0x14
	::UnityEngine::Vector3 EJIOHLBIEIO; // 0x18
	::UnityEngine::Vector3 LMODOAGDBPE; // 0x24

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMCNNDIFCBJ_NPOLNFDBOOD_OFFSET))(this);
	}
};
