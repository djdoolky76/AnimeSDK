#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define A562B26E18EFF98F_E6A4EDFB781D1DCC_OFFSET UNITYSDK_OFFSET(0x28F33C0)
#define A562B26E18EFF98F_E8AF1E0387A100FA_1_OFFSET UNITYSDK_OFFSET(0x28F5AB0)
#define A562B26E18EFF98F_E8AF1E0387A100FA_OFFSET UNITYSDK_OFFSET(0x28F5C30)
#define A562B26E18EFF98F_F0BDA4C0F8857362_OFFSET UNITYSDK_OFFSET(0x28F5D30)
#define A562B26E18EFF98F__CTOR_1_OFFSET UNITYSDK_OFFSET(0x28F2E50)
#define A562B26E18EFF98F__CTOR_OFFSET UNITYSDK_OFFSET(0x28F5CA0)

inline static constexpr unsigned int A562B26E18EFF98F_TypeDefinitionIndex = 19772;

class A562B26E18EFF98F : public ::System::Object
{
public:
	::System::IntPtr E432FC1D74EB921A; // 0x10
	::System::Boolean FC6A01549854C270; // 0x18

	::System::Void E6A4EDFB781D1DCC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A562B26E18EFF98F_E6A4EDFB781D1DCC_OFFSET))(this);
	}

	::System::Void E8AF1E0387A100FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A562B26E18EFF98F_E8AF1E0387A100FA_OFFSET))(this);
	}

	::System::Void F0BDA4C0F8857362(::System::IntPtr AC0A5E8A4F485F1F)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + A562B26E18EFF98F_F0BDA4C0F8857362_OFFSET))(this, AC0A5E8A4F485F1F);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A562B26E18EFF98F__CTOR_OFFSET))(this);
	}

	::System::Void E8AF1E0387A100FA_1(::System::Boolean FB4A1BD5C4242BE9)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + A562B26E18EFF98F_E8AF1E0387A100FA_1_OFFSET))(this, FB4A1BD5C4242BE9);
	}

	::System::Void _ctor_1(::System::IntPtr AC0A5E8A4F485F1F, ::System::Boolean A8CED94AB62D02E7)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + A562B26E18EFF98F__CTOR_1_OFFSET))(this, AC0A5E8A4F485F1F, A8CED94AB62D02E7);
	}
};
