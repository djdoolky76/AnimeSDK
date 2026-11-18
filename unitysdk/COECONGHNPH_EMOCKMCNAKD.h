#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define COECONGHNPH_EMOCKMCNAKD__CTOR_OFFSET UNITYSDK_OFFSET(0x2E4140)

inline static constexpr unsigned int COECONGHNPH_EMOCKMCNAKD_TypeDefinitionIndex = 66828;

struct alignas(4) COECONGHNPH_EMOCKMCNAKD
{
	::System::Int32 FKGNDKNHAEH; // 0x10
	::System::Int32 NOLLMOIGJHF; // 0x14

	::System::Void _ctor(::System::Int32 FKGNDKNHAEH, ::System::Int32 NOLLMOIGJHF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + COECONGHNPH_EMOCKMCNAKD__CTOR_OFFSET))(this, FKGNDKNHAEH, NOLLMOIGJHF);
	}
};
