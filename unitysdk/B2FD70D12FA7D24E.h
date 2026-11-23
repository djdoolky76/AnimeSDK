#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F9CCA2102307C84F;
namespace AF5FBA80BA4AF1CC { class A8BB995C62BA330B; }
namespace System { class String; }
namespace System::Collections { class E6C6EEEB155967C0; }

#define B2FD70D12FA7D24E_A14EA28E3EDF431C_OFFSET UNITYSDK_OFFSET(0x3E2E390)
#define B2FD70D12FA7D24E_F476D7A4FE5559EC_OFFSET UNITYSDK_OFFSET(0x3E2E190)
#define B2FD70D12FA7D24E_FEFD5298862EC8D2_OFFSET UNITYSDK_OFFSET(0x3E30930)
#define B2FD70D12FA7D24E__CCTOR_OFFSET UNITYSDK_OFFSET(0x3E2E410)
#define B2FD70D12FA7D24E__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B2FD70D12FA7D24E_TypeDefinitionIndex = 15277;

class B2FD70D12FA7D24E : public ::System::Object
{
public:
	static ::System::Collections::E6C6EEEB155967C0** StaticGet_ADB154BBF4278A28()
	{
		return (::System::Collections::E6C6EEEB155967C0**)Il2CppClass::FromTypeDefinitionIndex(B2FD70D12FA7D24E_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::F9CCA2102307C84F** StaticGet_A8C33C70B3C4D0B0()
	{
		return (::F9CCA2102307C84F**)Il2CppClass::FromTypeDefinitionIndex(B2FD70D12FA7D24E_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::AF5FBA80BA4AF1CC::A8BB995C62BA330B** StaticGet_B7F3B079DEB5FA06()
	{
		return (::AF5FBA80BA4AF1CC::A8BB995C62BA330B**)Il2CppClass::FromTypeDefinitionIndex(B2FD70D12FA7D24E_TypeDefinitionIndex)->GetStaticField(0x10);
	}
	static ::AF5FBA80BA4AF1CC::A8BB995C62BA330B** StaticGet_EE70237B58FCF99F()
	{
		return (::AF5FBA80BA4AF1CC::A8BB995C62BA330B**)Il2CppClass::FromTypeDefinitionIndex(B2FD70D12FA7D24E_TypeDefinitionIndex)->GetStaticField(0x18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + B2FD70D12FA7D24E__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B2FD70D12FA7D24E__CTOR_OFFSET))(this);
	}

	::F9CCA2102307C84F* FEFD5298862EC8D2(::System::String* F79B4D487F303AB2)
	{
		return ((::F9CCA2102307C84F*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + B2FD70D12FA7D24E_FEFD5298862EC8D2_OFFSET))(this, F79B4D487F303AB2);
	}

	static ::Il2CppArray<::System::String*>* A14EA28E3EDF431C(::System::String* E937D4885DAA1AE8)
	{
		return ((::Il2CppArray<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + B2FD70D12FA7D24E_A14EA28E3EDF431C_OFFSET))(E937D4885DAA1AE8);
	}

	static ::Il2CppArray<::System::String*>* F476D7A4FE5559EC(::System::String* E937D4885DAA1AE8)
	{
		return ((::Il2CppArray<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + B2FD70D12FA7D24E_F476D7A4FE5559EC_OFFSET))(E937D4885DAA1AE8);
	}
};
