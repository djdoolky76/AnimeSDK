#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define NMIIPAFOCAC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x793870)
#define NMIIPAFOCAC__CTOR_OFFSET UNITYSDK_OFFSET(0x358B00)

inline static constexpr unsigned int NMIIPAFOCAC_TypeDefinitionIndex = 88961;

struct alignas(8) NMIIPAFOCAC
{
	::System::String* HFEIPMCNCNI; // 0x10

	::System::Void _ctor(::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NMIIPAFOCAC__CTOR_OFFSET))(this, AELLPLBJELA);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMIIPAFOCAC_DISPOSE_OFFSET))(this);
	}
};
