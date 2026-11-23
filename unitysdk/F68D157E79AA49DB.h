#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define F68D157E79AA49DB__CCTOR_OFFSET UNITYSDK_OFFSET(0x3BDE420)

inline static constexpr unsigned int F68D157E79AA49DB_TypeDefinitionIndex = 11251;

class F68D157E79AA49DB : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_A39371EA08BE95B2()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(F68D157E79AA49DB_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Boolean* StaticGet_BB53419192E356B8()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(F68D157E79AA49DB_TypeDefinitionIndex)->GetStaticField(0x1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F68D157E79AA49DB__CCTOR_OFFSET))();
	}
};
