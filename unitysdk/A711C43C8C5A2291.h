#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F40EB8947F163A2D.h"

#define A711C43C8C5A2291__CCTOR_OFFSET UNITYSDK_OFFSET(0x3BDE270)
#define A711C43C8C5A2291__CTOR_OFFSET UNITYSDK_OFFSET(0x3BDE370)

inline static constexpr unsigned int A711C43C8C5A2291_TypeDefinitionIndex = 11249;

class A711C43C8C5A2291 : public ::F40EB8947F163A2D
{
public:
	static ::A711C43C8C5A2291** StaticGet_BD1EA225F8391F62()
	{
		return (::A711C43C8C5A2291**)Il2CppClass::FromTypeDefinitionIndex(A711C43C8C5A2291_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A711C43C8C5A2291__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A711C43C8C5A2291__CCTOR_OFFSET))();
	}
};
