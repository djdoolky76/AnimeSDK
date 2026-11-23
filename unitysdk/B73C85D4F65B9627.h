#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FB15B066A5E7656D.h"
#include "unitysdk/System/ValueType.h"

class E945252ECE50FE4E;

#define B73C85D4F65B9627_F64E54D483ED1A91_OFFSET UNITYSDK_OFFSET(0x1E340A0)
#define B73C85D4F65B9627_FF1CCAB07C09873D_OFFSET UNITYSDK_OFFSET(0x1E34160)
#define B73C85D4F65B9627__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E341F0)

inline static constexpr unsigned int B73C85D4F65B9627_TypeDefinitionIndex = 9479;

struct alignas(4) B73C85D4F65B9627
{
	static ::B73C85D4F65B9627* StaticGet_BDC1E8E781853683()
	{
		return (::B73C85D4F65B9627*)Il2CppClass::FromTypeDefinitionIndex(B73C85D4F65B9627_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::B73C85D4F65B9627* StaticGet_F3F93D1905F6CF8D()
	{
		return (::B73C85D4F65B9627*)Il2CppClass::FromTypeDefinitionIndex(B73C85D4F65B9627_TypeDefinitionIndex)->GetStaticField(0x10);
	}
	static ::B73C85D4F65B9627* StaticGet_BD5F3F5280D52709()
	{
		return (::B73C85D4F65B9627*)Il2CppClass::FromTypeDefinitionIndex(B73C85D4F65B9627_TypeDefinitionIndex)->GetStaticField(0x20);
	}
	::System::Boolean F5BDE29218CC61E3; // 0x10
	::System::Byte _padding0[0x7];
	::FB15B066A5E7656D BE1D3B3410F56700; // 0x18

	/*
	static ::B73C85D4F65B9627 FF1CCAB07C09873D(::FB15B066A5E7656D AE57FF5179B75168)
	{
		return ((::B73C85D4F65B9627(*)(::FB15B066A5E7656D))((::PBYTE)hIl2Cpp + B73C85D4F65B9627_FF1CCAB07C09873D_OFFSET))(AE57FF5179B75168);
	}
	*/

	::System::Boolean F64E54D483ED1A91(::E945252ECE50FE4E* A17C2EA4E6D79CFE)
	{
		return ((::System::Boolean(*)(::PVOID, ::E945252ECE50FE4E*))((::PBYTE)hIl2Cpp + B73C85D4F65B9627_F64E54D483ED1A91_OFFSET))(this, A17C2EA4E6D79CFE);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + B73C85D4F65B9627__CCTOR_OFFSET))();
	}
};
