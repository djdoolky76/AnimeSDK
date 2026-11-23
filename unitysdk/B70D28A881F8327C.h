#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class B3C77022BB9DD1F7;

#define B70D28A881F8327C_A5F7EF4199A7CE71_OFFSET UNITYSDK_OFFSET(0x3CECB30)
#define B70D28A881F8327C_ECD458A6F51319F3_OFFSET UNITYSDK_OFFSET(0x3CECBA0)
#define B70D28A881F8327C__CCTOR_OFFSET UNITYSDK_OFFSET(0x3CECC10)
#define B70D28A881F8327C__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B70D28A881F8327C_TypeDefinitionIndex = 10734;

class B70D28A881F8327C : public ::System::Object
{
public:
	static ::B3C77022BB9DD1F7** StaticGet_F755BCFACD8723AD()
	{
		return (::B3C77022BB9DD1F7**)Il2CppClass::FromTypeDefinitionIndex(B70D28A881F8327C_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::B3C77022BB9DD1F7** StaticGet_EE46AE0F9DF136CF()
	{
		return (::B3C77022BB9DD1F7**)Il2CppClass::FromTypeDefinitionIndex(B70D28A881F8327C_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::B3C77022BB9DD1F7** StaticGet_A8BF851BA62B642A()
	{
		return (::B3C77022BB9DD1F7**)Il2CppClass::FromTypeDefinitionIndex(B70D28A881F8327C_TypeDefinitionIndex)->GetStaticField(0x10);
	}
	static ::B3C77022BB9DD1F7** StaticGet_E979064D0FE37CFF()
	{
		return (::B3C77022BB9DD1F7**)Il2CppClass::FromTypeDefinitionIndex(B70D28A881F8327C_TypeDefinitionIndex)->GetStaticField(0x18);
	}
	static ::B3C77022BB9DD1F7** StaticGet_AC4745BECD4568BD()
	{
		return (::B3C77022BB9DD1F7**)Il2CppClass::FromTypeDefinitionIndex(B70D28A881F8327C_TypeDefinitionIndex)->GetStaticField(0x20);
	}

	static ::System::Int32 A5F7EF4199A7CE71(::System::Int32 BC82832C13A0CF7A)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + B70D28A881F8327C_A5F7EF4199A7CE71_OFFSET))(BC82832C13A0CF7A);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B70D28A881F8327C__CTOR_OFFSET))(this);
	}

	static ::System::Int32 ECD458A6F51319F3(::System::Int32 BC82832C13A0CF7A)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + B70D28A881F8327C_ECD458A6F51319F3_OFFSET))(BC82832C13A0CF7A);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + B70D28A881F8327C__CCTOR_OFFSET))();
	}
};
