#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EMFIEIBPFID.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define PIFHAHFCMEL_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x8CCC80)
#define PIFHAHFCMEL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8CCC70)

inline static constexpr unsigned int PIFHAHFCMEL_TypeDefinitionIndex = 58198;

struct alignas(4) PIFHAHFCMEL
{
	::System::Int32 AGFDDDBADNF; // 0x10
	::EMFIEIBPFID OCOJFKMOKMK; // 0x14

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIFHAHFCMEL_TOSTRING_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIFHAHFCMEL_DPIHOJBBGLA_OFFSET))(this);
	}
};
