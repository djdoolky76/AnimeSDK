#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIPEGPGHAJI.h"

#define CFHGEGGDOFK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D97BC10)

inline static constexpr unsigned int CFHGEGGDOFK_TypeDefinitionIndex = 93489;

class CFHGEGGDOFK : public ::BIPEGPGHAJI
{
public:
	::System::Int32 NGMIGPFDJFN; // 0x20
	::System::Boolean GFHPDPHHHGL; // 0x24
	::System::Byte _padding0[0x3];
	::System::UInt32 HDGIELLOOEF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFHGEGGDOFK__CTOR_OFFSET))(this);
	}
};
