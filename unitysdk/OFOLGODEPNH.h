#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MoleMole/EntityHandle.h"

#define OFOLGODEPNH_KIOBPIFPHFJ_OFFSET UNITYSDK_OFFSET(0x811840)

inline static constexpr unsigned int OFOLGODEPNH_TypeDefinitionIndex = 51712;

struct alignas(4) OFOLGODEPNH
{
	::MoleMole::EntityHandle KIOBPIFPHFJ()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + OFOLGODEPNH_KIOBPIFPHFJ_OFFSET))(this);
	}
};
