#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EEBBCE9B834ECEAB/F0126AD664C6542C.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define A2F2880E632F69E4__CTOR_OFFSET UNITYSDK_OFFSET(0x3C69950)

inline static constexpr unsigned int A2F2880E632F69E4_TypeDefinitionIndex = 11683;

class A2F2880E632F69E4 : public ::System::Attribute
{
public:
	::System::String* E12EC98021122ADA; // 0x10
	::EEBBCE9B834ECEAB::F0126AD664C6542C AE2C468BBE5D7CDB; // 0x18

	::System::Void _ctor(::System::String* ACA630B0177A1462)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + A2F2880E632F69E4__CTOR_OFFSET))(this, ACA630B0177A1462);
	}
};
