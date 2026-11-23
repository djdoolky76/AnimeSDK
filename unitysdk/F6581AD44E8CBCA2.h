#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define F6581AD44E8CBCA2_E6A4EDFB781D1DCC_OFFSET UNITYSDK_OFFSET(0x28F2D50)
#define F6581AD44E8CBCA2_E8AF1E0387A100FA_1_OFFSET UNITYSDK_OFFSET(0x28FE790)
#define F6581AD44E8CBCA2_E8AF1E0387A100FA_OFFSET UNITYSDK_OFFSET(0x28FE610)
#define F6581AD44E8CBCA2_ECE05D8CA76D3CCD_OFFSET UNITYSDK_OFFSET(0x28FE800)
#define F6581AD44E8CBCA2__CTOR_OFFSET UNITYSDK_OFFSET(0x28F2E50)

inline static constexpr unsigned int F6581AD44E8CBCA2_TypeDefinitionIndex = 19694;

class F6581AD44E8CBCA2 : public ::System::Object
{
public:
	::System::IntPtr E432FC1D74EB921A; // 0x10
	::System::Boolean FC6A01549854C270; // 0x18

	::System::Void E8AF1E0387A100FA(::System::Boolean FB4A1BD5C4242BE9)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + F6581AD44E8CBCA2_E8AF1E0387A100FA_OFFSET))(this, FB4A1BD5C4242BE9);
	}

	::System::Void E6A4EDFB781D1DCC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F6581AD44E8CBCA2_E6A4EDFB781D1DCC_OFFSET))(this);
	}

	::System::Void E8AF1E0387A100FA_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F6581AD44E8CBCA2_E8AF1E0387A100FA_1_OFFSET))(this);
	}

	::System::Void ECE05D8CA76D3CCD(::System::Single E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + F6581AD44E8CBCA2_ECE05D8CA76D3CCD_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor(::System::IntPtr AC0A5E8A4F485F1F, ::System::Boolean A8CED94AB62D02E7)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + F6581AD44E8CBCA2__CTOR_OFFSET))(this, AC0A5E8A4F485F1F, A8CED94AB62D02E7);
	}
};
