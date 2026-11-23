#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDAD7F45EA9CF9E9/FB215A5ABB4FCF77.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define A7746705C4B387D4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x40E8980)
#define A7746705C4B387D4__CTOR_OFFSET UNITYSDK_OFFSET(0x3CEAEA0)

inline static constexpr unsigned int A7746705C4B387D4_TypeDefinitionIndex = 20248;

class A7746705C4B387D4 : public ::System::Attribute
{
public:
	::System::Type* A288CB28FC2A6DA3; // 0x10
	::BDAD7F45EA9CF9E9::FB215A5ABB4FCF77 ABDE0F2A254CEB88; // 0x18

	::System::Void _ctor(::System::Type* A288CB28FC2A6DA3, ::BDAD7F45EA9CF9E9::FB215A5ABB4FCF77 ABDE0F2A254CEB88)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*, ::BDAD7F45EA9CF9E9::FB215A5ABB4FCF77))((::PBYTE)hIl2Cpp + A7746705C4B387D4__CTOR_OFFSET))(this, A288CB28FC2A6DA3, ABDE0F2A254CEB88);
	}

	::System::Void _ctor_1(::System::Type* A288CB28FC2A6DA3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + A7746705C4B387D4__CTOR_1_OFFSET))(this, A288CB28FC2A6DA3);
	}
};
