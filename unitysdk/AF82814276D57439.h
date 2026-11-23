#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FE31BE81CCA49221.h"

namespace System { class String; }

#define AF82814276D57439_A080618D59E9153C_OFFSET UNITYSDK_OFFSET(0x3CEC970)
#define AF82814276D57439_B46807E05A88C9F0_OFFSET UNITYSDK_OFFSET(0x3CEC960)
#define AF82814276D57439__CTOR_OFFSET UNITYSDK_OFFSET(0x3CEC9C0)

inline static constexpr unsigned int AF82814276D57439_TypeDefinitionIndex = 10753;

class AF82814276D57439 : public ::FE31BE81CCA49221
{
public:
	static ::System::IntPtr B46807E05A88C9F0(::System::Boolean F2E25A23B328656E, ::PVOID F79B4D487F303AB2, ::System::Int32 ED4B1A9C64BC69FB, ::System::Boolean& EAD76550E29A6B29)
	{
		return ((::System::IntPtr(*)(::System::Boolean, ::PVOID, ::System::Int32, ::System::Boolean&))((::PBYTE)hIl2Cpp + AF82814276D57439_B46807E05A88C9F0_OFFSET))(F2E25A23B328656E, F79B4D487F303AB2, ED4B1A9C64BC69FB, EAD76550E29A6B29);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AF82814276D57439__CTOR_OFFSET))(this);
	}

	static ::System::IntPtr A080618D59E9153C(::System::Boolean F2E25A23B328656E, ::System::String* F79B4D487F303AB2, ::System::Boolean& EAD76550E29A6B29)
	{
		return ((::System::IntPtr(*)(::System::Boolean, ::System::String*, ::System::Boolean&))((::PBYTE)hIl2Cpp + AF82814276D57439_A080618D59E9153C_OFFSET))(F2E25A23B328656E, F79B4D487F303AB2, EAD76550E29A6B29);
	}
};
