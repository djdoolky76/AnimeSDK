#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define A0C34146963FBA85__CTOR_OFFSET UNITYSDK_OFFSET(0x2759260)

inline static constexpr unsigned int A0C34146963FBA85_TypeDefinitionIndex = 16952;

class A0C34146963FBA85 : public ::System::Attribute
{
public:
	::System::Type* F4E0866F12C56B2F; // 0x10

	::System::Void _ctor(::System::Type* BE63DFCD9BFF6CEE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + A0C34146963FBA85__CTOR_OFFSET))(this, BE63DFCD9BFF6CEE);
	}
};
