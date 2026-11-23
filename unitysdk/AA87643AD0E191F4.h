#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AA87643AD0E191F4_E6A4EDFB781D1DCC_OFFSET UNITYSDK_OFFSET(0x28F2D50)
#define AA87643AD0E191F4_E8AF1E0387A100FA_1_OFFSET UNITYSDK_OFFSET(0x290E6A0)
#define AA87643AD0E191F4_E8AF1E0387A100FA_OFFSET UNITYSDK_OFFSET(0x290E710)
#define AA87643AD0E191F4__CTOR_OFFSET UNITYSDK_OFFSET(0x28F2E50)

inline static constexpr unsigned int AA87643AD0E191F4_TypeDefinitionIndex = 19726;

class AA87643AD0E191F4 : public ::System::Object
{
public:
	::System::IntPtr E432FC1D74EB921A; // 0x10
	::System::Boolean FC6A01549854C270; // 0x18

	::System::Void E6A4EDFB781D1DCC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AA87643AD0E191F4_E6A4EDFB781D1DCC_OFFSET))(this);
	}

	::System::Void _ctor(::System::IntPtr AC0A5E8A4F485F1F, ::System::Boolean A8CED94AB62D02E7)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AA87643AD0E191F4__CTOR_OFFSET))(this, AC0A5E8A4F485F1F, A8CED94AB62D02E7);
	}

	::System::Void E8AF1E0387A100FA(::System::Boolean FB4A1BD5C4242BE9)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AA87643AD0E191F4_E8AF1E0387A100FA_OFFSET))(this, FB4A1BD5C4242BE9);
	}

	::System::Void E8AF1E0387A100FA_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AA87643AD0E191F4_E8AF1E0387A100FA_1_OFFSET))(this);
	}
};
