#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define B61312F8CA12A282_BA0AFB830600D2A9_OFFSET UNITYSDK_OFFSET(0x26BAD80)
#define B61312F8CA12A282_F0D2AFBD3CAE7F65_OFFSET UNITYSDK_OFFSET(0x26BAB50)
#define B61312F8CA12A282_FD792C24FE49920B_OFFSET UNITYSDK_OFFSET(0x26BABA0)
#define B61312F8CA12A282__CCTOR_OFFSET UNITYSDK_OFFSET(0x26BAC90)
#define B61312F8CA12A282__CTOR_OFFSET UNITYSDK_OFFSET(0x26BAD20)

inline static constexpr unsigned int B61312F8CA12A282_TypeDefinitionIndex = 2533;

class B61312F8CA12A282 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::UInt32>** StaticGet_E72F8A5D74AB8409()
	{
		return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(B61312F8CA12A282_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Int32 E8D3EF233311DF15; // 0x10

	::System::Void FD792C24FE49920B(::System::Int32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + B61312F8CA12A282_FD792C24FE49920B_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + B61312F8CA12A282__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B61312F8CA12A282__CTOR_OFFSET))(this);
	}

	::System::Int64 BA0AFB830600D2A9()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + B61312F8CA12A282_BA0AFB830600D2A9_OFFSET))(this);
	}

	::System::Void F0D2AFBD3CAE7F65()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B61312F8CA12A282_F0D2AFBD3CAE7F65_OFFSET))(this);
	}
};
