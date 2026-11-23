#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FA4CA1ECB7BD621E_EB024F4D82C791C1_FA1AB4ADC44A18C2_OFFSET UNITYSDK_OFFSET(0x1FCBDA0)
#define FA4CA1ECB7BD621E_EB024F4D82C791C1__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FA4CA1ECB7BD621E_EB024F4D82C791C1_TypeDefinitionIndex = 8054;

class FA4CA1ECB7BD621E_EB024F4D82C791C1 : public ::System::Object
{
public:
	::System::String* EB4383AB7832C4B0; // 0x10
	::System::String* B9459EAED97B928B; // 0x18
	::System::String* A8CFA15DF4A794C6; // 0x20
	::System::String* FB59BF9B2FE542BA; // 0x28
	::System::String* E6574AED6DC996D5; // 0x30
	::System::String* A5E0312F2E525A3D; // 0x38
	::System::String* A3491F5B9B866637; // 0x40
	::System::String* EBEF7AC2CE43FF12; // 0x48
	::System::String* E03381867E06167E; // 0x50
	::System::String* E1DE46EB9870099C; // 0x58
	::System::String* AD10F637FE657757; // 0x60
	::System::String* E01B8F5B5AE99060; // 0x68
	::System::String* F22CEC97A8F11143; // 0x70
	::System::String* B5113D61CDE697AA; // 0x78
	::System::String* B8F643B5706FEA19; // 0x80
	::System::String* BAD369F57DCAE929; // 0x88
	::System::String* FA846D070D9B5E1C; // 0x90

	::System::String* FA1AB4ADC44A18C2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FA4CA1ECB7BD621E_EB024F4D82C791C1_FA1AB4ADC44A18C2_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FA4CA1ECB7BD621E_EB024F4D82C791C1__CTOR_OFFSET))(this);
	}
};
