#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A5247F028BCE7988;

#define B952985F75CEFB8F_A969EC7170A8ACD1_OFFSET UNITYSDK_OFFSET(0x294AB10)
#define B952985F75CEFB8F__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B952985F75CEFB8F_TypeDefinitionIndex = 15397;

class B952985F75CEFB8F : public ::System::Object
{
public:
	static ::A5247F028BCE7988** StaticGet_E782E7108886887F()
	{
		return (::A5247F028BCE7988**)Il2CppClass::FromTypeDefinitionIndex(B952985F75CEFB8F_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::A5247F028BCE7988* A969EC7170A8ACD1()
	{
		return ((::A5247F028BCE7988*(*)())((::PBYTE)hIl2Cpp + B952985F75CEFB8F_A969EC7170A8ACD1_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B952985F75CEFB8F__CTOR_OFFSET))(this);
	}
};
