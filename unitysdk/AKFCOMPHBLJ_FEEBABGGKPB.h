#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define AKFCOMPHBLJ_FEEBABGGKPB_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x6E0C50)
#define AKFCOMPHBLJ_FEEBABGGKPB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x6E0B90)
#define AKFCOMPHBLJ_FEEBABGGKPB_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x6E0BF0)
#define AKFCOMPHBLJ_FEEBABGGKPB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x6E0B80)

inline static constexpr unsigned int AKFCOMPHBLJ_FEEBABGGKPB_TypeDefinitionIndex = 77057;

struct alignas(8) AKFCOMPHBLJ_FEEBABGGKPB
{
	// static const ::System::String* LDNBGMPIMKE; // 0x0
	::System::String* NNDPEENOBEO; // 0x10
	::System::Int32 GJMLMHNLHAA; // 0x18

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_FEEBABGGKPB_TOSTRING_OFFSET))(this);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_FEEBABGGKPB_GETHASHCODE_OFFSET))(this);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_FEEBABGGKPB_HLPHPBAODIF_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_FEEBABGGKPB_DPIHOJBBGLA_OFFSET))(this);
	}
};
