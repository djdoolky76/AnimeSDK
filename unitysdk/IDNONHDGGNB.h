#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NIGADNGLACP.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define IDNONHDGGNB_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x6F7F40)
#define IDNONHDGGNB_FMFDHJIEHNP_OFFSET UNITYSDK_OFFSET(0x12EA5250)
#define IDNONHDGGNB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x6F7F30)
#define IDNONHDGGNB__CTOR_OFFSET UNITYSDK_OFFSET(0x6F7F20)

inline static constexpr unsigned int IDNONHDGGNB_TypeDefinitionIndex = 79946;

struct alignas(4) IDNONHDGGNB
{
	::System::Boolean MJIMNNFEKNB; // 0x10
	::System::Boolean FANMPABJHAH; // 0x11
	::NIGADNGLACP JLLEFABKNFM; // 0x12

	::System::Void _ctor(::System::Boolean COMHKJLKMEL, ::System::Boolean PFFBEFMKIJE, ::NIGADNGLACP BNDPFICCEJK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::NIGADNGLACP))((::PBYTE)hIl2Cpp + IDNONHDGGNB__CTOR_OFFSET))(this, COMHKJLKMEL, PFFBEFMKIJE, BNDPFICCEJK);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNONHDGGNB_TOSTRING_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNONHDGGNB_DPIHOJBBGLA_OFFSET))(this);
	}

	/*
	static ::IDNONHDGGNB FMFDHJIEHNP()
	{
		return ((::IDNONHDGGNB(*)())((::PBYTE)hIl2Cpp + IDNONHDGGNB_FMFDHJIEHNP_OFFSET))();
	}
	*/
};
