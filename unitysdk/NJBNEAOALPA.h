#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MoleMole/EntityHandle.h"

#define NJBNEAOALPA_KIOBPIFPHFJ_OFFSET UNITYSDK_OFFSET(0x5A43E0)

inline static constexpr unsigned int NJBNEAOALPA_TypeDefinitionIndex = 90191;

struct alignas(4) NJBNEAOALPA
{
	::MoleMole::EntityHandle KIOBPIFPHFJ()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBNEAOALPA_KIOBPIFPHFJ_OFFSET))(this);
	}
};
