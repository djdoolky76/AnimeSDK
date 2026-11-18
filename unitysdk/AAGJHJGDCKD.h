#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define AAGJHJGDCKD__CTOR_OFFSET UNITYSDK_OFFSET(0x6CFF90)

inline static constexpr unsigned int AAGJHJGDCKD_TypeDefinitionIndex = 70154;

struct alignas(8) AAGJHJGDCKD
{
	::System::String* ACGPGJPIFBC; // 0x10
	::System::Int32 LKJPOEMAAJF; // 0x18
	::System::Byte _padding0[0x4];
	::System::Int64 JMLCPADPPNM; // 0x20

	::System::Void _ctor(::System::String* KDGGIIFDGNJ, ::System::Int32 OPIHEEFFDIP, ::System::Int64 BGDDNHMJALJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + AAGJHJGDCKD__CTOR_OFFSET))(this, KDGGIIFDGNJ, OPIHEEFFDIP, BGDDNHMJALJ);
	}
};
