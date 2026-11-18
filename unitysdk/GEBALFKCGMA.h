#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define GEBALFKCGMA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x725670)
#define GEBALFKCGMA__CTOR_OFFSET UNITYSDK_OFFSET(0x358B00)

inline static constexpr unsigned int GEBALFKCGMA_TypeDefinitionIndex = 81909;

struct alignas(8) GEBALFKCGMA
{
	::System::String* HFEIPMCNCNI; // 0x10

	::System::Void _ctor(::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GEBALFKCGMA__CTOR_OFFSET))(this, AELLPLBJELA);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEBALFKCGMA_DISPOSE_OFFSET))(this);
	}
};
