#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define F8F2C4A14073B177_B3C4AC91180DB08D_OFFSET UNITYSDK_OFFSET(0x403BE00)
#define F8F2C4A14073B177_FF09B6C2F1DD14E9_OFFSET UNITYSDK_OFFSET(0x403BDB0)
#define F8F2C4A14073B177__CCTOR_OFFSET UNITYSDK_OFFSET(0x403BD70)

inline static constexpr unsigned int F8F2C4A14073B177_TypeDefinitionIndex = 20345;

class F8F2C4A14073B177 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_A87D051367FB2D87()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(F8F2C4A14073B177_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Int32 FF09B6C2F1DD14E9()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + F8F2C4A14073B177_FF09B6C2F1DD14E9_OFFSET))();
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F8F2C4A14073B177__CCTOR_OFFSET))();
	}

	static ::System::Void B3C4AC91180DB08D(::System::Int32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + F8F2C4A14073B177_B3C4AC91180DB08D_OFFSET))(E937D4885DAA1AE8);
	}
};
