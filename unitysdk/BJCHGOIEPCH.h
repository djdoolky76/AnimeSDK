#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define BJCHGOIEPCH__CTOR_OFFSET UNITYSDK_OFFSET(0x7CDAA0)

inline static constexpr unsigned int BJCHGOIEPCH_TypeDefinitionIndex = 58533;

struct alignas(8) BJCHGOIEPCH
{
	::System::Int32 GFLGLCKEMOL; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* GEIOLIJJLBM; // 0x18
	::System::Boolean PGIGGGCAPPP; // 0x20

	::System::Void _ctor(::System::Int32 GFLGLCKEMOL, ::System::String* GEIOLIJJLBM, ::System::Boolean PGIGGGCAPPP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + BJCHGOIEPCH__CTOR_OFFSET))(this, GFLGLCKEMOL, GEIOLIJJLBM, PGIGGGCAPPP);
	}
};
