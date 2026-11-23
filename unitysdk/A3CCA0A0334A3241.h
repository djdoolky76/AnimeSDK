#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F1B3C4ACACCA66F4;

#define A3CCA0A0334A3241__CCTOR_OFFSET UNITYSDK_OFFSET(0x24A1220)
#define A3CCA0A0334A3241__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A3CCA0A0334A3241_TypeDefinitionIndex = 4609;

class A3CCA0A0334A3241 : public ::System::Object
{
public:
	static ::A3CCA0A0334A3241** StaticGet_BDC1E8E781853683()
	{
		return (::A3CCA0A0334A3241**)Il2CppClass::FromTypeDefinitionIndex(A3CCA0A0334A3241_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::F1B3C4ACACCA66F4* B4FCB7034A467CE2; // 0x10

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A3CCA0A0334A3241__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A3CCA0A0334A3241__CTOR_OFFSET))(this);
	}
};
