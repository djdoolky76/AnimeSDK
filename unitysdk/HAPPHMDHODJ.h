#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MELDNFKKBME.h"
#include "unitysdk/MoleMole/EntityHandle.h"

#define HAPPHMDHODJ__CTOR_OFFSET UNITYSDK_OFFSET(0x19DEDAE0)

inline static constexpr unsigned int HAPPHMDHODJ_TypeDefinitionIndex = 38635;

class HAPPHMDHODJ : public ::MELDNFKKBME
{
public:
	::MoleMole::EntityHandle LJENMCPCPCL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAPPHMDHODJ__CTOR_OFFSET))(this);
	}
};
