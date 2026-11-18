#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CCFGBIJDIKE.h"
#include "unitysdk/FDJDLIJPGDP.h"

namespace System { class String; }

#define LEGNKEBDEHL__CTOR_OFFSET UNITYSDK_OFFSET(0x19988010)

inline static constexpr unsigned int LEGNKEBDEHL_TypeDefinitionIndex = 59952;

class LEGNKEBDEHL : public ::FDJDLIJPGDP
{
public:
	::System::String* NAPFALLANDL; // 0x18
	::System::Int32 LKDGLCAGJNJ; // 0x20

	::System::Void _ctor(::CCFGBIJDIKE OBNIAHNMHPF, ::System::Int32 LKDGLCAGJNJ)
	{
		return ((::System::Void(*)(::PVOID, ::CCFGBIJDIKE, ::System::Int32))((::PBYTE)hIl2Cpp + LEGNKEBDEHL__CTOR_OFFSET))(this, OBNIAHNMHPF, LKDGLCAGJNJ);
	}
};
