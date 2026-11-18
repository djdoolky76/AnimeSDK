#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define POMDHHPEIFK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x858820)
#define POMDHHPEIFK__CTOR_OFFSET UNITYSDK_OFFSET(0x358B00)

inline static constexpr unsigned int POMDHHPEIFK_TypeDefinitionIndex = 79882;

struct alignas(8) POMDHHPEIFK
{
	::System::String* HFEIPMCNCNI; // 0x10

	::System::Void _ctor(::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + POMDHHPEIFK__CTOR_OFFSET))(this, AELLPLBJELA);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POMDHHPEIFK_DISPOSE_OFFSET))(this);
	}
};
