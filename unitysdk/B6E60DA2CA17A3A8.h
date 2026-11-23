#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define B6E60DA2CA17A3A8_BA0AFB830600D2A9_OFFSET UNITYSDK_OFFSET(0x16A7BC0)
#define B6E60DA2CA17A3A8_BB0A2EB4694DA120_OFFSET UNITYSDK_OFFSET(0x389A710)
#define B6E60DA2CA17A3A8_F0D2AFBD3CAE7F65_OFFSET UNITYSDK_OFFSET(0x389A7A0)
#define B6E60DA2CA17A3A8_FD792C24FE49920B_OFFSET UNITYSDK_OFFSET(0x389A7B0)
#define B6E60DA2CA17A3A8__CCTOR_OFFSET UNITYSDK_OFFSET(0x389A9C0)
#define B6E60DA2CA17A3A8__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B6E60DA2CA17A3A8_TypeDefinitionIndex = 20931;

class B6E60DA2CA17A3A8 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::UInt32>** StaticGet_AA71F13EC0A76CF8()
	{
		return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(B6E60DA2CA17A3A8_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::UInt32 F7B1BDCAE895DC99; // 0x10

	::System::Void FD792C24FE49920B(::Il2CppArray<::System::Byte>* F6C2EBBDFCAEF915, ::System::Int32 BE9B161B3F3C2937, ::System::Int32 A70E5C58B2C7A692)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + B6E60DA2CA17A3A8_FD792C24FE49920B_OFFSET))(this, F6C2EBBDFCAEF915, BE9B161B3F3C2937, A70E5C58B2C7A692);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + B6E60DA2CA17A3A8__CCTOR_OFFSET))();
	}

	static ::System::UInt32 BB0A2EB4694DA120(::System::UInt32 A9DFADF56C3F529D, ::System::Byte E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::System::UInt32, ::System::Byte))((::PBYTE)hIl2Cpp + B6E60DA2CA17A3A8_BB0A2EB4694DA120_OFFSET))(A9DFADF56C3F529D, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B6E60DA2CA17A3A8__CTOR_OFFSET))(this);
	}

	::System::Int64 BA0AFB830600D2A9()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + B6E60DA2CA17A3A8_BA0AFB830600D2A9_OFFSET))(this);
	}

	::System::Void F0D2AFBD3CAE7F65()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B6E60DA2CA17A3A8_F0D2AFBD3CAE7F65_OFFSET))(this);
	}
};
