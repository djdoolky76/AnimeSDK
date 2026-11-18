#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define AGDCBDLBANM__CTOR_OFFSET UNITYSDK_OFFSET(0x7A10E0)

inline static constexpr unsigned int AGDCBDLBANM_TypeDefinitionIndex = 44584;

struct alignas(4) AGDCBDLBANM
{
	::System::Int32 MAFAOAEOCMA; // 0x10
	::System::Int32 HCBJIOMKGPM; // 0x14
	::System::Int32 HOAAKEBFMEI; // 0x18

	::System::Void _ctor(::System::Int32 GJCAEPKAHBO, ::System::Int32 HGLFNACOKPO, ::System::Int32 LGOBNMNBFIM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AGDCBDLBANM__CTOR_OFFSET))(this, GJCAEPKAHBO, HGLFNACOKPO, LGOBNMNBFIM);
	}
};
