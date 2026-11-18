#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define COECONGHNPH_LMJCBPOLPGF_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x7C9A10)
#define COECONGHNPH_LMJCBPOLPGF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7C9A00)
#define COECONGHNPH_LMJCBPOLPGF__CTOR_OFFSET UNITYSDK_OFFSET(0x7C99F0)

inline static constexpr unsigned int COECONGHNPH_LMJCBPOLPGF_TypeDefinitionIndex = 66832;

struct alignas(4) COECONGHNPH_LMJCBPOLPGF
{
	::System::UInt16 FKGNDKNHAEH; // 0x10
	::System::UInt16 NOLLMOIGJHF; // 0x12
	::System::Boolean IHFBCFHNMME; // 0x14

	::System::Void _ctor(::System::Int32 FKGNDKNHAEH, ::System::Int32 NOLLMOIGJHF, ::System::Boolean IHFBCFHNMME)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + COECONGHNPH_LMJCBPOLPGF__CTOR_OFFSET))(this, FKGNDKNHAEH, NOLLMOIGJHF, IHFBCFHNMME);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + COECONGHNPH_LMJCBPOLPGF_TOSTRING_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + COECONGHNPH_LMJCBPOLPGF_DPIHOJBBGLA_OFFSET))(this);
	}
};
