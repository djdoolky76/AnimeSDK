#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define APBKGAEFBND__CTOR_1_OFFSET UNITYSDK_OFFSET(0x7A12F0)
#define APBKGAEFBND__CTOR_OFFSET UNITYSDK_OFFSET(0x7A12D0)

inline static constexpr unsigned int APBKGAEFBND_TypeDefinitionIndex = 54296;

struct alignas(8) APBKGAEFBND
{
	::System::String* ALLMHAPINPA; // 0x10
	::System::Boolean IJJGNNKGJAG; // 0x18
	::System::Byte _padding0[0x3];
	::System::Int32 NJNCOHLPLNJ; // 0x1C
	::System::Int32 OAPPAPMDAGF; // 0x20

	::System::Void _ctor(::System::String* EGNIEIAHPFH, ::System::Int32 KGGJCGPMAIH, ::System::Int32 BPEGDPLGFPO)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + APBKGAEFBND__CTOR_OFFSET))(this, EGNIEIAHPFH, KGGJCGPMAIH, BPEGDPLGFPO);
	}

	::System::Void _ctor_1(::System::String* EGNIEIAHPFH, ::System::Int32 BPEGDPLGFPO)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + APBKGAEFBND__CTOR_1_OFFSET))(this, EGNIEIAHPFH, BPEGDPLGFPO);
	}
};
