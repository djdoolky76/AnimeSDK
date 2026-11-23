#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/InteropServices/SafeHandle.h"

namespace System { class String; }

#define F1D5AB5D6EBCB5AA_A3345B9AC9D75C45_OFFSET UNITYSDK_OFFSET(0x3BEB930)
#define F1D5AB5D6EBCB5AA_A4555184A1656FFE_OFFSET UNITYSDK_OFFSET(0x3BEBA20)
#define F1D5AB5D6EBCB5AA_AF5FFEA74FF9DA19_OFFSET UNITYSDK_OFFSET(0x3BEB7E0)
#define F1D5AB5D6EBCB5AA_B93D3BEBFBAC4ED1_OFFSET UNITYSDK_OFFSET(0x3BEB890)
#define F1D5AB5D6EBCB5AA_E8AF1E0387A100FA_OFFSET UNITYSDK_OFFSET(0x3BEB830)
#define F1D5AB5D6EBCB5AA_EF038B33A26E266E_OFFSET UNITYSDK_OFFSET(0x3BEB8E0)
#define F1D5AB5D6EBCB5AA__CTOR_OFFSET UNITYSDK_OFFSET(0x3BEB9B0)

inline static constexpr unsigned int F1D5AB5D6EBCB5AA_TypeDefinitionIndex = 11240;

class F1D5AB5D6EBCB5AA : public ::System::Runtime::InteropServices::SafeHandle
{
public:
	::System::Boolean A3345B9AC9D75C45()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + F1D5AB5D6EBCB5AA_A3345B9AC9D75C45_OFFSET))(this);
	}

	::System::Void B93D3BEBFBAC4ED1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F1D5AB5D6EBCB5AA_B93D3BEBFBAC4ED1_OFFSET))(this);
	}

	::System::String* EF038B33A26E266E()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + F1D5AB5D6EBCB5AA_EF038B33A26E266E_OFFSET))(this);
	}

	::System::IntPtr AF5FFEA74FF9DA19(::System::String* E15BCD7E743D54ED)
	{
		return ((::System::IntPtr(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + F1D5AB5D6EBCB5AA_AF5FFEA74FF9DA19_OFFSET))(this, E15BCD7E743D54ED);
	}

	::System::Void _ctor(::System::String* E15BCD7E743D54ED)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + F1D5AB5D6EBCB5AA__CTOR_OFFSET))(this, E15BCD7E743D54ED);
	}

	::System::Void E8AF1E0387A100FA(::System::Boolean FB4A1BD5C4242BE9)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + F1D5AB5D6EBCB5AA_E8AF1E0387A100FA_OFFSET))(this, FB4A1BD5C4242BE9);
	}

	::System::Boolean A4555184A1656FFE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + F1D5AB5D6EBCB5AA_A4555184A1656FFE_OFFSET))(this);
	}
};
