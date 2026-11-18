#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define JCBFBDAEGNG__CTOR_OFFSET UNITYSDK_OFFSET(0x153CADE0)

inline static constexpr unsigned int JCBFBDAEGNG_TypeDefinitionIndex = 67484;

class JCBFBDAEGNG : public ::System::Object
{
public:
	::System::String* BPJHKMAAEFM; // 0x10
	::System::Int32 NBLOCBLOLJO; // 0x18
	::System::Int32 OGOAGNBKJNE; // 0x1C
	::System::Int32 FJOPBECDKDP; // 0x20
	::System::Boolean JNMMAHNCKKJ; // 0x24
	::System::Boolean FHMNHNPGAGC; // 0x25
	::System::Byte _padding0[0x2];
	::System::Int32 BJPGNHMHDLD; // 0x28
	::System::Int32 BHMLEFGJMLI; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCBFBDAEGNG__CTOR_OFFSET))(this);
	}
};
