#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B1AC9D6A61C7C684/A1F45104B7BC749A.h"
#include "unitysdk/B1AC9D6A61C7C684/A5EC76B9623DB555.h"
#include "unitysdk/B4F4C69D3CB58A89.h"
#include "unitysdk/AB893667BB6F371B.h"
#include "unitysdk/System/Nullable_1.h"

namespace System { class String; }

#define B125C1BB61718E43_B6F2C1B8CF39D6C3_OFFSET UNITYSDK_OFFSET(0x207CCD0)
#define B125C1BB61718E43_E87FA8426F6FFC48_OFFSET UNITYSDK_OFFSET(0x207CB90)
#define B125C1BB61718E43_ECF4027CE0F8EC72_OFFSET UNITYSDK_OFFSET(0x207C800)
#define B125C1BB61718E43__CCTOR_OFFSET UNITYSDK_OFFSET(0x207D000)
#define B125C1BB61718E43__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int B125C1BB61718E43_TypeDefinitionIndex = 8424;

class B125C1BB61718E43 : public ::B4F4C69D3CB58A89
{
public:
	static ::System::String** StaticGet_E8E2FD6C2BE7D934()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(B125C1BB61718E43_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Char* StaticGet_B49544231AD1B891()
	{
		return (::System::Char*)Il2CppClass::FromTypeDefinitionIndex(B125C1BB61718E43_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::String** StaticGet_B38BDF0C4E2BAFCC()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(B125C1BB61718E43_TypeDefinitionIndex)->GetStaticField(0x10);
	}
	static ::System::String** StaticGet_AB771AF4B538A2AC()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(B125C1BB61718E43_TypeDefinitionIndex)->GetStaticField(0x18);
	}
	static ::System::String** StaticGet_F9D41E02458B2F2F()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(B125C1BB61718E43_TypeDefinitionIndex)->GetStaticField(0x20);
	}
	::B1AC9D6A61C7C684::A1F45104B7BC749A F115FA1EDA6D1617; // 0x18
	::B1AC9D6A61C7C684::A5EC76B9623DB555 E452394A4A447FFA; // 0x1C
	::System::UInt32 AEA6A4F794917D32; // 0x20
	::System::Byte _padding0[0x4];
	::System::String* FF725C60DC527BDF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B125C1BB61718E43__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + B125C1BB61718E43__CCTOR_OFFSET))();
	}

	static ::System::Boolean E87FA8426F6FFC48(::System::String* A16A4F19B08E04BF)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + B125C1BB61718E43_E87FA8426F6FFC48_OFFSET))(A16A4F19B08E04BF);
	}

	static ::B125C1BB61718E43* B6F2C1B8CF39D6C3(::System::String* AF34928E358AD71B)
	{
		return ((::B125C1BB61718E43*(*)(::System::String*))((::PBYTE)hIl2Cpp + B125C1BB61718E43_B6F2C1B8CF39D6C3_OFFSET))(AF34928E358AD71B);
	}

	::System::Nullable_1<::AB893667BB6F371B> ECF4027CE0F8EC72(::System::Int32 E14961743E675799)
	{
		return ((::System::Nullable_1<::AB893667BB6F371B>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + B125C1BB61718E43_ECF4027CE0F8EC72_OFFSET))(this, E14961743E675799);
	}
};
