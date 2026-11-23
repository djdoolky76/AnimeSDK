#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BB005FAC3710C72A__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BB005FAC3710C72A_TypeDefinitionIndex = 16501;

class BB005FAC3710C72A : public ::System::Object
{
public:
	::System::Int32 EE347E8C03C7E3E6; // 0x10
	::System::Int32 ECAEA4F5E97D69DE; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BB005FAC3710C72A__CTOR_OFFSET))(this);
	}
};
