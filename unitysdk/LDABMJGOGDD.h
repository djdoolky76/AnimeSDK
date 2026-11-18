#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IONJPHDIELI.h"

namespace System { class String; }

#define LDABMJGOGDD_FHDJDIIPGGP_OFFSET UNITYSDK_OFFSET(0x15BB7010)
#define LDABMJGOGDD_KIHGEEDHNJI_OFFSET UNITYSDK_OFFSET(0x15BB70C0)
#define LDABMJGOGDD__CTOR_OFFSET UNITYSDK_OFFSET(0x15BB70B0)

inline static constexpr unsigned int LDABMJGOGDD_TypeDefinitionIndex = 86459;

class LDABMJGOGDD : public ::IONJPHDIELI
{
public:
	::System::String* GGDMPHPHOFH; // 0x18
	::System::Boolean CGOJOKHANJO; // 0x20
	::System::Byte _padding0[0x3];
	::System::Int32 HBHNPKPPKFE; // 0x24
	::System::Int32 FDOGGANACAP; // 0x28
	::System::Int32 AANIKBAIGHK; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDABMJGOGDD__CTOR_OFFSET))(this);
	}

	::System::String* FHDJDIIPGGP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDABMJGOGDD_FHDJDIIPGGP_OFFSET))(this);
	}

	::System::String* KIHGEEDHNJI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDABMJGOGDD_KIHGEEDHNJI_OFFSET))(this);
	}
};
