#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define HFAGOPIHICP_NACKPHEPFFF_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x7365C0)
#define HFAGOPIHICP_NACKPHEPFFF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7365B0)

inline static constexpr unsigned int HFAGOPIHICP_NACKPHEPFFF_TypeDefinitionIndex = 89564;

struct alignas(8) HFAGOPIHICP_NACKPHEPFFF
{
	::System::String* GCMPPOGICKN; // 0x10
	::System::String* KIDNKODPFCF; // 0x18
	::System::String* LIIIAGFCJLO; // 0x20
	::System::String* OHIABICHHNF; // 0x28
	::System::String* LJBOCJNHIAM; // 0x30
	::System::String* APJIIHCFEGP; // 0x38

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFAGOPIHICP_NACKPHEPFFF_TOSTRING_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFAGOPIHICP_NACKPHEPFFF_DPIHOJBBGLA_OFFSET))(this);
	}
};
