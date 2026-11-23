#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define FF5BF23213F810C5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x2759260)
#define FF5BF23213F810C5__CTOR_OFFSET UNITYSDK_OFFSET(0x40E89C0)

inline static constexpr unsigned int FF5BF23213F810C5_TypeDefinitionIndex = 20239;

class FF5BF23213F810C5 : public ::System::Attribute
{
public:
	::System::Type* F5F49B913D0ADA2C; // 0x10
	::System::Boolean E1ED05C7655F69AB; // 0x18

	::System::Void _ctor(::System::Type* E826FFFF635C21C8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + FF5BF23213F810C5__CTOR_OFFSET))(this, E826FFFF635C21C8);
	}

	::System::Void _ctor_1(::System::Type* E826FFFF635C21C8, ::System::Boolean E1ED05C7655F69AB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + FF5BF23213F810C5__CTOR_1_OFFSET))(this, E826FFFF635C21C8, E1ED05C7655F69AB);
	}
};
