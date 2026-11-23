#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define E4D75679A3A023A0__CTOR_OFFSET UNITYSDK_OFFSET(0x3CEAEA0)

inline static constexpr unsigned int E4D75679A3A023A0_TypeDefinitionIndex = 20264;

class E4D75679A3A023A0 : public ::System::Attribute
{
public:
	::System::Type* B15A78251612753F; // 0x10
	::System::Int32 A08AEEC02D4F1D1D; // 0x18

	::System::Void _ctor(::System::Type* B15A78251612753F, ::System::Int32 A08AEEC02D4F1D1D)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Int32))((::PBYTE)hIl2Cpp + E4D75679A3A023A0__CTOR_OFFSET))(this, B15A78251612753F, A08AEEC02D4F1D1D);
	}
};
