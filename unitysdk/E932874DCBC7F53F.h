#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define E932874DCBC7F53F__CTOR_OFFSET UNITYSDK_OFFSET(0x1F77300)

inline static constexpr unsigned int E932874DCBC7F53F_TypeDefinitionIndex = 7831;

struct alignas(8) E932874DCBC7F53F
{
	::System::Int32 B8EB1D663419A06B; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* BC24C5C1A8EB99B3; // 0x18

	::System::Void _ctor(::System::Int32 FD05558570F4A509, ::System::String* E7C99297BCFC5085)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + E932874DCBC7F53F__CTOR_OFFSET))(this, FD05558570F4A509, E7C99297BCFC5085);
	}
};
